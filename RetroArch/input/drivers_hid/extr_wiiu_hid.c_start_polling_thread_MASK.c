
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* polling_thread_stack; void* polling_thread; } ;
typedef TYPE_1__ wiiu_hid_t ;
typedef int int32_t ;
typedef int OSThreadAttributes ;
typedef void OSThread ;
typedef int BOOL ;


 int FUNC_0 (void*,int ,int,char*,void*,int,int,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(wiiu_hid_t *VAR_3)
{
   OSThreadAttributes VAR_4 = VAR_0;
   BOOL VAR_5 = 0;
   int32_t VAR_6 = 0x8000;
   int32_t VAR_7 = 10;
   OSThread *VAR_8 = FUNC_6();
   void *VAR_9 = FUNC_4(16, VAR_6);

   FUNC_3("[hid]: starting polling thread.\n");

   if (!VAR_8 || !VAR_9)
   {
      FUNC_3("[hid]: allocation failed, aborting thread start.\n");
      goto error;
   }

   if (!FUNC_0(VAR_8,
            VAR_1,
            1, (char *)VAR_3,
            VAR_9+VAR_6, VAR_6,
            VAR_7,
            VAR_4))
   {
      FUNC_3("[hid]: OSCreateThread failed.\n");
      goto error;
   }

   FUNC_2(VAR_8, VAR_2);

   VAR_3->polling_thread = VAR_8;
   VAR_3->polling_thread_stack = VAR_9;
   FUNC_1(VAR_8);
   return;

error:
   if (VAR_8)
      FUNC_5(VAR_8);
   if (VAR_9)
      FUNC_5(VAR_9);

   return;
}
