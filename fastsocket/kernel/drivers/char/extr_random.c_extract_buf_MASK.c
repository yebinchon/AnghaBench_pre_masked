
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int workspace ;
struct entropy_store {scalar_t__ pool; TYPE_1__* poolinfo; } ;
typedef int hash ;
typedef int extract ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_2__ {int poolwords; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct entropy_store*,int *,int,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_6(struct entropy_store *VAR_2, __u8 *VAR_3)
{
 int VAR_4;
 __u32 VAR_5[5], VAR_6[VAR_1];
 __u8 VAR_7[64];


 FUNC_4(VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_2->poolinfo->poolwords; VAR_4 += 16)
  FUNC_5(VAR_5, (__u8 *)(VAR_2->pool + VAR_4), VAR_6);
 FUNC_2(VAR_2, VAR_5, sizeof(VAR_5), VAR_7);





 FUNC_5(VAR_5, VAR_7, VAR_6);
 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 FUNC_1(VAR_6, 0, sizeof(VAR_6));






 VAR_5[0] ^= VAR_5[3];
 VAR_5[1] ^= VAR_5[4];
 VAR_5[2] ^= FUNC_3(VAR_5[2], 16);
 FUNC_0(VAR_3, VAR_5, VAR_0);
 FUNC_1(VAR_5, 0, sizeof(VAR_5));
}
