
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ram_type {int path; int type; } ;
struct TYPE_3__ {int size; int data; } ;
typedef TYPE_1__ retro_ctx_memory_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,struct ram_type*,unsigned int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

bool FUNC_7(unsigned VAR_4)
{
   struct ram_type VAR_5;
   retro_ctx_memory_info_t VAR_6;

   if (!FUNC_3(&VAR_6, &VAR_5, VAR_4))
      return 0;

   FUNC_1("%s #%u %s \"%s\".\n",
         FUNC_6(VAR_2),
         VAR_5.type,
         FUNC_6(VAR_3),
         VAR_5.path);

   if (!FUNC_5(
            VAR_5.path, VAR_6.data, VAR_6.size))
   {
      FUNC_0("%s.\n",
            FUNC_6(VAR_0));
      FUNC_2("Attempting to recover ...\n");




      if (!FUNC_4(
               VAR_6.data, VAR_6.size, VAR_5.type))
      {
         FUNC_2("Failed ... Cannot recover save file.\n");
      }
      return 0;
   }

   FUNC_1("%s \"%s\".\n",
         FUNC_6(VAR_1),
         VAR_5.path);

   return 1;
}
