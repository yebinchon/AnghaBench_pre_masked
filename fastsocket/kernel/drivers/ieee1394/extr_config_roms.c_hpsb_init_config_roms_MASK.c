
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; scalar_t__ (* init ) () ;} ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(void)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  if (VAR_0[VAR_1]->init()) {
   FUNC_1("Failed to initialize config rom entry `%s'",
     VAR_0[VAR_1]->name);
   VAR_2 = -1;
  }

 return VAR_2;
}
