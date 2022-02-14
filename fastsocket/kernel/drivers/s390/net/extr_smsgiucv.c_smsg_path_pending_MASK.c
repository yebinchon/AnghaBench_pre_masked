
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iucv_path {int dummy; } ;
typedef int ipvmid ;


 int VAR_0 ;
 int FUNC_0 (struct iucv_path*,int *,char*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct iucv_path *VAR_2, u8 VAR_3[8],
        u8 VAR_4[16])
{
 if (FUNC_1(VAR_3, "*MSG    ", sizeof(VAR_3)) != 0)
  return -VAR_0;

 return FUNC_0(VAR_2, &VAR_1, "SMSGIUCV        ", ((void*)0));
}
