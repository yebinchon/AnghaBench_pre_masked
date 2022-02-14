
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int input_rotate; unsigned long add_ptr; int* pool; int lock; TYPE_1__* poolinfo; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_2__ {int poolwords; unsigned long tap1; unsigned long tap2; unsigned long tap3; unsigned long tap4; unsigned long tap5; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct entropy_store *VAR_0, const void *VAR_1,
       int VAR_2, __u8 VAR_3[64])
{
 static __u32 const VAR_4[8] = {
  0x00000000, 0x3b6e20c8, 0x76dc4190, 0x4db26158,
  0xedb88320, 0xd6d6a3e8, 0x9b64c2b0, 0xa00ae278 };
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13 = VAR_0->poolinfo->poolwords - 1;
 const char *VAR_14 = VAR_1;
 __u32 VAR_15;
 unsigned long VAR_16;


 VAR_7 = VAR_0->poolinfo->tap1;
 VAR_8 = VAR_0->poolinfo->tap2;
 VAR_9 = VAR_0->poolinfo->tap3;
 VAR_10 = VAR_0->poolinfo->tap4;
 VAR_11 = VAR_0->poolinfo->tap5;

 FUNC_1(&VAR_0->lock, VAR_16);
 VAR_12 = VAR_0->input_rotate;
 VAR_5 = VAR_0->add_ptr;


 while (VAR_2--) {
  VAR_15 = FUNC_0(*VAR_14++, VAR_12 & 31);
  VAR_5 = (VAR_5 - 1) & VAR_13;


  VAR_15 ^= VAR_0->pool[VAR_5];
  VAR_15 ^= VAR_0->pool[(VAR_5 + VAR_7) & VAR_13];
  VAR_15 ^= VAR_0->pool[(VAR_5 + VAR_8) & VAR_13];
  VAR_15 ^= VAR_0->pool[(VAR_5 + VAR_9) & VAR_13];
  VAR_15 ^= VAR_0->pool[(VAR_5 + VAR_10) & VAR_13];
  VAR_15 ^= VAR_0->pool[(VAR_5 + VAR_11) & VAR_13];


  VAR_0->pool[VAR_5] = (VAR_15 >> 3) ^ VAR_4[VAR_15 & 7];







  VAR_12 += VAR_5 ? 7 : 14;
 }

 VAR_0->input_rotate = VAR_12;
 VAR_0->add_ptr = VAR_5;

 if (VAR_3)
  for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
   ((__u32 *)VAR_3)[VAR_6] = VAR_0->pool[(VAR_5 - VAR_6) & VAR_13];

 FUNC_2(&VAR_0->lock, VAR_16);
}
