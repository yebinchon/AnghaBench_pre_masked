
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,void*,scalar_t__) ;
 int FUNC_4 (int ,char*,char const*,char*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;
 int VAR_3 ;
 char* FUNC_7 (int ) ;

int64_t FUNC_8(const char *VAR_4, void **VAR_5, int64_t *VAR_6)
{
   int64_t VAR_7 = 0;
   int64_t VAR_8 = 0;
   void *VAR_9 = ((void*)0);
   RFILE *VAR_10 = FUNC_2(VAR_4,
         VAR_1,
         VAR_0);

   if (!VAR_10)
   {
      FUNC_4(VAR_3, "Failed to open %s: %s\n", VAR_4, FUNC_7(VAR_2));
      goto error;
   }

   VAR_8 = FUNC_1(VAR_10);

   if (VAR_8 < 0)
      goto error;

   VAR_9 = FUNC_6((size_t)(VAR_8 + 1));

   if (!VAR_9)
      goto error;
   if ((int64_t)(uint64_t)(VAR_8 + 1) != (VAR_8 + 1))
      goto error;

   VAR_7 = FUNC_3(VAR_10, VAR_9, (int64_t)VAR_8);
   if (VAR_7 < 0)
   {
      FUNC_4(VAR_3, "Failed to read %s: %s\n", VAR_4, FUNC_7(VAR_2));
      goto error;
   }

   FUNC_0(VAR_10);

   *VAR_5 = VAR_9;



   ((char*)VAR_9)[VAR_7] = '\0';

   if (VAR_6)
      *VAR_6 = VAR_7;

   return 1;

error:
   if (VAR_10)
      FUNC_0(VAR_10);
   if (VAR_9)
      FUNC_5(VAR_9);
   if (VAR_6)
      *VAR_6 = -1;
   *VAR_5 = ((void*)0);
   return 0;
}
