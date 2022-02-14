
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct adb_request*,int *,int,int ,int) ;

void
FUNC_2(int VAR_4)
{
 struct adb_request VAR_5;

 FUNC_1(&VAR_5, ((void*)0), 2, VAR_0, VAR_1 |
     (VAR_4 ? VAR_3 : VAR_2));
 while (!VAR_5.complete)
  FUNC_0();
}
