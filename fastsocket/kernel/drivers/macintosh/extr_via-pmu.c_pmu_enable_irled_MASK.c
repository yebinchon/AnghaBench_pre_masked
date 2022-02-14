
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct adb_request*,int *,int,int ,int) ;
 int FUNC_1 (struct adb_request*) ;
 int * VAR_6 ;

void
FUNC_2(int VAR_7)
{
 struct adb_request VAR_8;

 if (VAR_6 == ((void*)0))
  return ;
 if (VAR_5 == VAR_0)
  return ;

 FUNC_0(&VAR_8, ((void*)0), 2, VAR_1, VAR_2 |
     (VAR_7 ? VAR_4 : VAR_3));
 FUNC_1(&VAR_8);
}
