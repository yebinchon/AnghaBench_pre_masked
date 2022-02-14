
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* prefix; struct TYPE_5__* next; int create; } ;
typedef TYPE_1__ MMAL_COMPONENT_SUPPLIER_T ;
typedef int MMAL_COMPONENT_SUPPLIER_FUNCTION_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_3 (int,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void FUNC_5(const char *VAR_2,
   MMAL_COMPONENT_SUPPLIER_FUNCTION_T VAR_3)
{
   MMAL_COMPONENT_SUPPLIER_T *VAR_4 = FUNC_3(1,sizeof(*VAR_4),((void*)0));

   FUNC_1("prefix %s fn %p", (VAR_2 ? VAR_2 : "NULL"), VAR_3);

   if (FUNC_4(VAR_4))
   {
      VAR_4->create = VAR_3;
      FUNC_2(VAR_4->prefix, VAR_2, VAR_0);
      VAR_4->prefix[VAR_0-1] = '\0';

      VAR_4->next = VAR_1;
      VAR_1 = VAR_4;
   }
   else
   {
      FUNC_0("no memory for supplier registry entry");
   }
}
