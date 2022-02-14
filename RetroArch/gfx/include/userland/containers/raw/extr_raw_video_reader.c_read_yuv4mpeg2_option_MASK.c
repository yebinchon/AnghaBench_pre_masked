
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {char* option; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_3__* module; } ;


 int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_2,
   unsigned int *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_2->priv->module;
   unsigned int VAR_5, VAR_6;


   while (*VAR_3 && FUNC_2(VAR_2) == ' ')
      (*VAR_3)--, FUNC_4(VAR_2);

   VAR_5 = FUNC_1(VAR_2, VAR_4->option,
      FUNC_0(sizeof(VAR_4->option), *VAR_3));


   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   {
      if (VAR_4->option[VAR_6] == ' ' || VAR_4->option[VAR_6] == 0x0a)
      {
         VAR_4->option[VAR_6] = 0;
         break;
      }
   }
   if (VAR_6 == 0)
      return VAR_0;

   *VAR_3 -= VAR_6;
   FUNC_3(VAR_2, VAR_6);


   if (VAR_6 == VAR_5)
   {
      while (*VAR_3 && FUNC_2(VAR_2) != ' ' && FUNC_2(VAR_2) != 0x0a)
         (*VAR_3)--, FUNC_4(VAR_2);
      return VAR_0;
   }

   return VAR_1;
}
