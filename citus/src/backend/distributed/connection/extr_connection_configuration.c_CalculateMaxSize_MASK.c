
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * keyword; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ PQconninfoOption ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static Size
FUNC_2()
{
 PQconninfoOption *VAR_0 = FUNC_0();
 PQconninfoOption *VAR_1 = ((void*)0);
 Size VAR_2 = 0;

 for (VAR_1 = VAR_0;
   VAR_1->keyword != ((void*)0);
   VAR_1++, VAR_2++)
 {

 }

 FUNC_1(VAR_0);


 VAR_2++;

 return VAR_2;
}
