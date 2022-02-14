
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {char* line; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 unsigned int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_3->priv->module;
   unsigned int VAR_5, VAR_6 = FUNC_1(VAR_3, VAR_4->line, sizeof(VAR_4->line)-1);

   if (!VAR_6)
      return VAR_1;


   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
      if (VAR_4->line[VAR_5] == '\n')
         break;


   if (VAR_5 == sizeof(VAR_4->line)-1)
   {
      FUNC_0(VAR_3, "line too big");
      return VAR_0;
   }

   if (VAR_5 < VAR_6)
   {
      VAR_4->line[VAR_5++] = 0;
      if (VAR_5 < VAR_6 && VAR_4->line[VAR_5] == '\r')
         VAR_5++;
   }
   VAR_4->line[VAR_5] = 0;

   FUNC_2(VAR_3, VAR_5);
   return VAR_2;
}
