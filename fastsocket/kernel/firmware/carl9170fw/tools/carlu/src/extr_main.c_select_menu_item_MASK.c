
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const option; int (* function ) () ;} ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(const char VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = FUNC_0(VAR_0) - 1; VAR_2 != 0; VAR_2--) {
  if (VAR_1 == VAR_0[VAR_2].option)
   break;
 }

 return VAR_0[VAR_2].function();
}
