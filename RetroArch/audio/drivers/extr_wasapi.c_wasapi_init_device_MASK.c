
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {unsigned int size; TYPE_1__* elems; } ;
typedef int int32_t ;
typedef int UINT32 ;
struct TYPE_2__ {int data; } ;
typedef int IMMDeviceEnumerator ;
typedef int IMMDeviceCollection ;
typedef int IMMDevice ;
typedef int HRESULT ;


 int VAR_0 ;
 int **** VAR_1 ;
 int FUNC_0 (int *****,int *,int ,int *****,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int **** VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,int,int **) ;
 int FUNC_8 (int *,int ,int ,int **) ;
 int FUNC_9 (int *,int ,int ,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char const) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char const*,int ) ;
 int FUNC_13 (struct string_list*) ;
 int FUNC_14 (char const*,int *,int ) ;

__attribute__((used)) static IMMDevice *FUNC_15(const char *VAR_6)
{
   HRESULT VAR_7;
   UINT32 VAR_8, VAR_9;
   IMMDeviceEnumerator *VAR_10 = ((void*)0);
   IMMDevice *VAR_11 = ((void*)0);
   IMMDeviceCollection *VAR_12 = ((void*)0);

   if (VAR_6)
   {
      FUNC_4("[WASAPI]: Initializing device %s ...\n", VAR_6);
   }
   else
   {
      FUNC_4("[WASAPI]: Initializing default device.. \n");
   }





   VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
         &VAR_3, (void **)&VAR_10);

   if (FUNC_1(VAR_7))
      goto error;

   if (VAR_6)
   {
      int32_t VAR_13 = -1;
      struct string_list *VAR_14 = (struct string_list*)FUNC_11(((void*)0));


      if (VAR_14)
      {
         if (VAR_14->elems)
         {
            unsigned VAR_15;
            for (VAR_15 = 0; VAR_15 < VAR_14->size; VAR_15++)
            {
               FUNC_4("[WASAPI]: %d : %s\n", VAR_15, VAR_14->elems[VAR_15].data);
               if (FUNC_12(VAR_6, VAR_14->elems[VAR_15].data))
               {
                  VAR_13 = VAR_15;
                  break;
               }
            }



            if (VAR_13 == -1 && FUNC_10(VAR_6[0]))
            {
               VAR_13 = FUNC_14(VAR_6, ((void*)0), 0);
               FUNC_4("[WASAPI]: Fallback, device index is a single number index instead: %d.\n", VAR_13);

            }
         }
         FUNC_13(VAR_14);
      }

      if (VAR_13 == -1)
         VAR_13 = 0;

      VAR_7 = FUNC_8(VAR_10,
            VAR_5, VAR_2, &VAR_12);
      if (FUNC_1(VAR_7))
         goto error;

      VAR_7 = FUNC_6(VAR_12, &VAR_8);
      if (FUNC_1(VAR_7))
         goto error;

      for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
      {
         VAR_7 = FUNC_7(VAR_12, VAR_9, &VAR_11);
         if (FUNC_1(VAR_7))
            goto error;

         if (VAR_9 == VAR_13)
            break;

         FUNC_2(VAR_11);
      }
   }
   else
   {
      VAR_7 = FUNC_9(
            VAR_10, VAR_5, VAR_4, &VAR_11);
      if (FUNC_1(VAR_7))
         goto error;
   }

   if (!VAR_11)
      goto error;

   FUNC_2(VAR_12);
   FUNC_2(VAR_10);

   return VAR_11;

error:
   FUNC_2(VAR_12);
   FUNC_2(VAR_10);

   if (VAR_6)
   {
      FUNC_5("[WASAPI]: Failed to initialize device.\n");
   }
   else
   {
      FUNC_3("[WASAPI]: Failed to initialize device.\n");
   }

   return ((void*)0);
}
