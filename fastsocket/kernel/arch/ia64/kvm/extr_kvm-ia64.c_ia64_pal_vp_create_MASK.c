
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ia64_pal_retval {long status; } ;


 int FUNC_0 (struct ia64_pal_retval,int ,int ,int ,int ) ;
 int VAR_0 ;

long FUNC_1(u64 *VAR_1, u64 *VAR_2, u64 *VAR_3)
{
 struct ia64_pal_retval VAR_4;

 FUNC_0(VAR_4, VAR_0, (u64)VAR_1, (u64)VAR_2,
   (u64)VAR_3);

 return VAR_4.status;
}
