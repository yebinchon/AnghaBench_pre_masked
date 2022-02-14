
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ram_type {int path; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ retro_ctx_memory_info_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,int ,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*,struct ram_type*,unsigned int) ;
 int FUNC_2 (int ,void**,scalar_t__*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void*,size_t) ;
 int FUNC_5 (int ) ;

bool FUNC_6(unsigned VAR_2)
{
   int64_t VAR_3;
   struct ram_type VAR_4;
   retro_ctx_memory_info_t VAR_5;
   void *VAR_6 = ((void*)0);

   if (!FUNC_1(&VAR_5, &VAR_4, VAR_2))
      return 0;

   if (!FUNC_2(VAR_4.path, &VAR_6, &VAR_3))
      return 0;

   if (VAR_3 > 0)
   {
      if (VAR_3 > (ssize_t)VAR_5.size)
      {
         FUNC_0("SRAM is larger than implementation expects, "
               "doing partial load (truncating %u %s %s %u).\n",
               (unsigned)VAR_3,
               FUNC_5(VAR_0),
               FUNC_5(VAR_1),
               (unsigned)VAR_5.size);
         VAR_3 = VAR_5.size;
      }
      FUNC_4(VAR_5.data, VAR_6, (size_t)VAR_3);
   }

   if (VAR_6)
      FUNC_3(VAR_6);

   return 1;
}
