
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int flash_size; } ;
struct bnx2x {TYPE_1__ common; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int,int *,int) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_5, u32 VAR_6, u8 *VAR_7,
       int VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 __be32 VAR_11;

 if ((VAR_6 & 0x03) || (VAR_8 & 0x03) || (VAR_8 == 0)) {
  FUNC_0(VAR_0 | VAR_1,
     "Invalid parameter: offset 0x%x  buf_size 0x%x\n",
     VAR_6, VAR_8);
  return -VAR_2;
 }

 if (VAR_6 + VAR_8 > VAR_5->common.flash_size) {
  FUNC_0(VAR_0 | VAR_1,
     "Invalid parameter: offset (0x%x) + buf_size (0x%x) > flash_size (0x%x)\n",
     VAR_6, VAR_8, VAR_5->common.flash_size);
  return -VAR_2;
 }


 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9)
  return VAR_9;


 FUNC_3(VAR_5);


 VAR_10 = VAR_3;
 while ((VAR_8 > sizeof(u32)) && (VAR_9 == 0)) {
  VAR_9 = FUNC_4(VAR_5, VAR_6, &VAR_11, VAR_10);
  FUNC_6(VAR_7, &VAR_11, 4);


  VAR_6 += sizeof(u32);
  VAR_7 += sizeof(u32);
  VAR_8 -= sizeof(u32);
  VAR_10 = 0;
 }

 if (VAR_9 == 0) {
  VAR_10 |= VAR_4;
  VAR_9 = FUNC_4(VAR_5, VAR_6, &VAR_11, VAR_10);
  FUNC_6(VAR_7, &VAR_11, 4);
 }


 FUNC_2(VAR_5);
 FUNC_5(VAR_5);

 return VAR_9;
}
