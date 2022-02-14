
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int num_value; } ;
typedef int PACK ;
typedef TYPE_1__ ELEMENT ;


 TYPE_1__* FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;

UINT FUNC_1(PACK *VAR_1, char *VAR_2)
{
 ELEMENT *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 return VAR_3->num_value;
}
