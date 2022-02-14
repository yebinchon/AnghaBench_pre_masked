
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int SessionCreated; int Error; } ;
typedef int SEC_OBJ ;
typedef TYPE_1__ SECURE ;


 int * FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_2(SECURE *VAR_2, char *VAR_3, UINT VAR_4)
{
 SEC_OBJ *VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_3 == ((void*)0))
 {
  VAR_2->Error = VAR_0;
  return 0;
 }
 if (VAR_2->SessionCreated == 0)
 {
  VAR_2->Error = VAR_1;
  return 0;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == ((void*)0))
 {
  return 0;
 }
 else
 {
  FUNC_1(VAR_5);
  return 1;
 }
}
