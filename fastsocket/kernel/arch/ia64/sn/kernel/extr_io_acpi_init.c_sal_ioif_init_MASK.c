
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ia64_sal_retval {long status; int v0; int member_3; int member_2; int member_1; int member_0; } ;


 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static long
FUNC_1(u64 *VAR_1)
{
 struct ia64_sal_retval VAR_2 = {0,0,0,0};

 FUNC_0(VAR_2,
   VAR_0, 0, 0, 0, 0, 0, 0, 0);
 *VAR_1 = VAR_2.v0;
 return VAR_2.status;
}
