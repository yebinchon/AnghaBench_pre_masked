
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ retro_ctx_size_info_t ;
struct TYPE_5__ {void* data; scalar_t__ size; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (char const*,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,void*,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*) ;
 int VAR_5 ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (char const*,void*,scalar_t__,int,int) ;
 int FUNC_11 (char const*,void*,scalar_t__,int) ;
 TYPE_2__ VAR_6 ;

bool FUNC_12(const char *VAR_7, bool VAR_8, bool VAR_9)
{
   retro_ctx_size_info_t VAR_10;
   void *VAR_11 = ((void*)0);

   FUNC_2(&VAR_10);

   if (VAR_10.size == 0)
      return 0;

   if (!VAR_5)
   {
      FUNC_1("%s: \"%s\".\n",
            FUNC_7(VAR_3),
            VAR_7);

      VAR_11 = FUNC_4(VAR_7, VAR_10.size);

      if (!VAR_11)
      {
         FUNC_0("%s \"%s\".\n",
               FUNC_7(VAR_1),
               VAR_7);
         return 0;
      }

      FUNC_1("%s: %d %s.\n",
            FUNC_7(VAR_4),
            (int)VAR_10.size,
            FUNC_7(VAR_0));
   }

   if (VAR_8)
   {
      if (FUNC_8(VAR_7) && !VAR_9)
      {



         FUNC_1("%s ...\n",
               FUNC_7(VAR_2));

         FUNC_10(VAR_7, VAR_11, VAR_10.size, 1, VAR_9);
      }
      else
         FUNC_11(VAR_7, VAR_11, VAR_10.size, VAR_9);
   }
   else
   {
      if (!VAR_11)
         VAR_11 = FUNC_4(VAR_7, VAR_10.size);

      if (!VAR_11)
      {
         FUNC_0("%s \"%s\".\n",
               FUNC_7(VAR_1),
               VAR_7);
         return 0;
      }




      if (VAR_6.data)
      {
         FUNC_3(VAR_6.data);
         VAR_6.data = ((void*)0);
      }

      VAR_6.data = FUNC_5(VAR_10.size);
      if (!VAR_6.data)
      {
         FUNC_3(VAR_11);
         return 0;
      }

      FUNC_6(VAR_6.data, VAR_11, VAR_10.size);
      FUNC_3(VAR_11);
      VAR_6.size = VAR_10.size;
      FUNC_9(VAR_6.path, VAR_7, sizeof(VAR_6.path));
   }

   return 1;
}
