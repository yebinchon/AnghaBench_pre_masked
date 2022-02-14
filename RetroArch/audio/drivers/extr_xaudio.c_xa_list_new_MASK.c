
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
typedef unsigned int uint32_t ;
typedef void string_list ;
struct TYPE_3__ {int DisplayName; } ;
typedef TYPE_1__ XAUDIO2_DEVICE_DETAILS ;
typedef int IXAudio2 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int*) ;
 scalar_t__ FUNC_2 (int *,unsigned int,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*,char*,union string_list_elem_attr) ;
 void* FUNC_8 () ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void *FUNC_10(void *VAR_2)
{

   unsigned VAR_3;
   union string_list_elem_attr VAR_4;
   uint32_t VAR_5 = 0;
   IXAudio2 *VAR_6 = ((void*)0);
   struct string_list *VAR_7 = FUNC_8();

   if (!VAR_7)
      return ((void*)0);

   VAR_4.i = 0;

   if (FUNC_0(FUNC_4(&VAR_6, 0, VAR_1)))
      return ((void*)0);

   FUNC_1(VAR_6, &VAR_5);

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      XAUDIO2_DEVICE_DETAILS VAR_8;
      if (FUNC_2(VAR_6, VAR_3, &VAR_8) == VAR_0)
      {
         char *VAR_9 = FUNC_9(VAR_8.DisplayName);

         if (VAR_9)
         {
            FUNC_7(VAR_7, VAR_9, VAR_4);
            FUNC_5(VAR_9);
         }
      }
   }

   FUNC_3(VAR_6);

   return VAR_7;





}
