
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ status; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_10__ {scalar_t__ cur_offset; int reconnecting; int persistent; int header_list; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 size_t FUNC_5 (TYPE_1__*,char*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,size_t) ;

__attribute__((used)) static size_t FUNC_8(VC_CONTAINER_IO_T *VAR_3, void *VAR_4, size_t VAR_5)
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   VC_CONTAINER_IO_MODULE_T *VAR_7 = VAR_3->module;
   size_t VAR_8;
   size_t VAR_9;
   size_t VAR_10 = 0;
   char *VAR_11 = VAR_4;





   if (VAR_7->cur_offset >= VAR_3->size)
   {
      VAR_3->status = VAR_1;
      return 0;
   }

   if (!VAR_7->persistent)
   {
      VAR_6 = FUNC_4(VAR_3);
      if (VAR_6 != VAR_2)
      {
         FUNC_1(((void*)0), "Error opening socket for GET request");
         return VAR_6;
      }
   }


   VAR_6 = FUNC_7(VAR_3, VAR_5);
   if (VAR_6 != VAR_2)
   {
      FUNC_1(((void*)0), "Error sending GET request");
      goto error;
   }

   VAR_6 = FUNC_6(VAR_3);
   if (VAR_6 == VAR_1 && !VAR_7->reconnecting)
   {
      FUNC_0(((void*)0), "reconnecting");
      FUNC_2(VAR_7);
      VAR_6 = FUNC_4(VAR_3);
      if (VAR_6 == VAR_2)
      {
         VAR_7->reconnecting = 1;
         VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_5);
         VAR_7->reconnecting = 0;
         return VAR_6;
      }
   }
   if (VAR_6 != VAR_2)
   {
      FUNC_1(((void*)0), "Error reading GET response");
      goto error;
   }





   VAR_8 = (size_t)FUNC_3(VAR_7->header_list);
   if (VAR_8 > VAR_5)
   {
      FUNC_1(((void*)0), "received too much data (%i/%i)",
                (int)VAR_8, (int)VAR_5);
      VAR_6 = VAR_0;
      goto error;
   }

   VAR_9 = 0;
   while (VAR_9 < VAR_8 && VAR_3->status == VAR_2)
   {
      VAR_10 = FUNC_5(VAR_3, VAR_11, VAR_8 - VAR_9);
      if (VAR_3->status == VAR_2)
      {
         VAR_9 += VAR_10;
         VAR_11 += VAR_10;
      }
   }

   if (VAR_3->status == VAR_2)
   {
      VAR_7->cur_offset += VAR_9;
      VAR_10 = VAR_9;
   }

   if (!VAR_7->persistent)
      FUNC_2(VAR_7);

   return VAR_10;

error:
   if (!VAR_7->persistent)
      FUNC_2(VAR_7);

   return VAR_6;
}
