
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int SessionCreated; int Error; } ;
typedef int SEC_OBJ ;
typedef TYPE_1__ SECURE ;


 int * FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(SECURE *VAR_2, char *VAR_3, void *VAR_4, UINT VAR_5)
{
 UINT VAR_6 = 0;
 SEC_OBJ *VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->SessionCreated == 0)
 {
  VAR_2->Error = VAR_1;
  return 0;
 }


 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_7 == ((void*)0))
 {

  return 0;
 }


 VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5);

 FUNC_1(VAR_7);

 return VAR_6;
}
