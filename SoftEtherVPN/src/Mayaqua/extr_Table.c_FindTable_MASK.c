
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ TABLE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 int * VAR_0 ;

TABLE *FUNC_3(char *VAR_1)
{
 TABLE *VAR_2, VAR_3;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3.name = FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_0, &VAR_3);
 FUNC_1(VAR_3.name);

 return VAR_2;
}
