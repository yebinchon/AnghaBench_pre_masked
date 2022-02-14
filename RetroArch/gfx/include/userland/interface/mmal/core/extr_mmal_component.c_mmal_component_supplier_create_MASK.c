
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* prefix; scalar_t__ (* create ) (char const*,int *) ;struct TYPE_3__* next; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_COMPONENT_T ;
typedef TYPE_1__ MMAL_COMPONENT_SUPPLIER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char const*,size_t) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(const char *VAR_3, MMAL_COMPONENT_T *VAR_4)
{
   MMAL_COMPONENT_SUPPLIER_T *VAR_5 = VAR_2;
   MMAL_STATUS_T VAR_6 = VAR_0;
   const char *VAR_7 = FUNC_1(VAR_3, '.');
   size_t VAR_8 = VAR_7 ? VAR_7 - VAR_3 : (int)FUNC_2(VAR_3);


   while (VAR_5)
   {
      if (FUNC_2(VAR_5->prefix) == VAR_8 && !FUNC_0(VAR_5->prefix, VAR_3, VAR_8))
      {
         VAR_6 = VAR_5->create(VAR_3, VAR_4);
         if (VAR_6 == VAR_1)
            break;
      }
      VAR_5 = VAR_5->next;
   }
   return VAR_6;
}
