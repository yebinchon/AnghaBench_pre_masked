
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_12__ {char* path; int size; char* data; int bytes_read; int state_slot; scalar_t__ autoload; scalar_t__ file; } ;
typedef TYPE_1__ save_task_state_t ;
struct TYPE_13__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,size_t,char*,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*,float) ;
 int FUNC_18 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_19(retro_task_t *VAR_10)
{
   ssize_t VAR_11, VAR_12;
   save_task_state_t *VAR_13 = (save_task_state_t*)VAR_10->state;

   if (!VAR_13->file)
   {
      VAR_13->file = FUNC_2(VAR_13->path,
            VAR_7,
            VAR_6);

      if (!VAR_13->file)
         goto error;

      if (FUNC_5(VAR_13->file, 0, VAR_9) != 0)
         goto error;

      VAR_13->size = FUNC_6(VAR_13->file);

      if (VAR_13->size < 0)
         goto error;

      FUNC_4(VAR_13->file);

      VAR_13->data = FUNC_7(VAR_13->size + 1);

      if (!VAR_13->data)
         goto error;
   }

   VAR_11 = FUNC_0(VAR_13->size - VAR_13->bytes_read, VAR_8);
   VAR_12 = FUNC_3(VAR_13->file,
         (uint8_t*)VAR_13->data + VAR_13->bytes_read, VAR_11);
   VAR_13->bytes_read += VAR_12;

   if (VAR_13->size > 0)
      FUNC_17(VAR_10, (VAR_13->bytes_read / (float)VAR_13->size) * 100);

   if (FUNC_13(VAR_10) || VAR_12 != VAR_11)
   {
      if (VAR_13->autoload)
      {
         char *VAR_14 = (char*)FUNC_7(8192 * sizeof(char));

         VAR_14[0] = '\0';

         FUNC_9(VAR_14,
               8192 * sizeof(char),
               "%s \"%s\" %s.",
               FUNC_8(VAR_0),
               VAR_13->path,
               FUNC_8(VAR_1));
         FUNC_16(VAR_10, FUNC_10(VAR_14));
         FUNC_1(VAR_14);
      }
      else
         FUNC_16(VAR_10, FUNC_10(FUNC_8(VAR_2)));

      FUNC_1(VAR_13->data);
      VAR_13->data = ((void*)0);
      FUNC_15(VAR_10, VAR_13);
      return;
   }

   if (VAR_13->bytes_read == VAR_13->size)
   {
      size_t VAR_15 = 8192;
      char *VAR_16 = (char*)FUNC_7(VAR_15 * sizeof(char));

      VAR_16[0] = '\0';

      FUNC_12(VAR_10);

      if (VAR_13->autoload)
         FUNC_9(VAR_16, VAR_15,
               "%s \"%s\" %s.",
               FUNC_8(VAR_0),
               VAR_13->path,
               FUNC_8(VAR_5));
      else
      {
         if (VAR_13->state_slot < 0)
            FUNC_11(VAR_16, FUNC_8(VAR_4),
                 VAR_15);
         else
            FUNC_9(VAR_16, VAR_15,
                  FUNC_8(VAR_3),
                  VAR_13->state_slot);

      }

      if (!FUNC_14(VAR_10))
         FUNC_18(VAR_10, FUNC_10(VAR_16));

      FUNC_1(VAR_16);
      FUNC_15(VAR_10, VAR_13);

      return;
   }

   return;

error:
   FUNC_15(VAR_10, VAR_13);
}
