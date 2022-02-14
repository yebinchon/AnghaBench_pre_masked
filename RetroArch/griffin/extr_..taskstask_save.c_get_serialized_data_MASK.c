
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; void* data; } ;
typedef TYPE_1__ retro_ctx_serialize_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(const char *VAR_2, size_t VAR_3)
{
   retro_ctx_serialize_info_t VAR_4;
   bool VAR_5 = 0;
   void *VAR_6 = ((void*)0);

   if (!VAR_3)
      return ((void*)0);

   VAR_6 = FUNC_3(VAR_3);

   if (!VAR_6)
      return ((void*)0);

   FUNC_0("%s: %d %s.\n",
         FUNC_4(VAR_1),
         (int)VAR_3,
         FUNC_4(VAR_0));

   VAR_4.data = VAR_6;
   VAR_4.size = VAR_3;
   VAR_5 = FUNC_1(&VAR_4);

   if (!VAR_5)
   {
      FUNC_2(VAR_6);
      return ((void*)0);
   }

   return VAR_6;
}
