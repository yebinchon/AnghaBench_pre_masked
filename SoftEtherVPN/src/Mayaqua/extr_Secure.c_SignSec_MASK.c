
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Error; } ;
typedef int SEC_OBJ ;
typedef TYPE_1__ SECURE ;


 int * FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *,void*,void*,int) ;

bool FUNC_3(SECURE *VAR_2, char *VAR_3, void *VAR_4, void *VAR_5, UINT VAR_6)
{
 SEC_OBJ *VAR_7;
 UINT VAR_8;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  VAR_2->Error = VAR_0;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_7 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);

 FUNC_1(VAR_7);

 return VAR_8;
}
