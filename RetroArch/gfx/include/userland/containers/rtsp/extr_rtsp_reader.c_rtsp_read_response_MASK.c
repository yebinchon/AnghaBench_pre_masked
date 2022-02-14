
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {char* comms_buffer; int header_list; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {scalar_t__ status; } ;
typedef TYPE_4__ VC_CONTAINER_IO_T ;
struct TYPE_15__ {char* name; char* value; } ;
struct TYPE_11__ {TYPE_4__* io; TYPE_3__* module; } ;
typedef TYPE_5__ RTSP_HEADER_T ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_5 (int ,TYPE_5__*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_5 )
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_5->priv->module;
   VC_CONTAINER_IO_T *VAR_7 = VAR_5->priv->io;
   char *VAR_8 = VAR_6->comms_buffer;
   uint32_t VAR_9 = VAR_0 - 1;
   uint32_t VAR_10;
   char *VAR_11 = VAR_8;
   bool VAR_12 = 0;
   RTSP_HEADER_T VAR_13;

   FUNC_6(VAR_6->header_list);


   VAR_13.name = ((void*)0);
   VAR_13.value = VAR_8;

   while (VAR_9)
   {
      VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9);
      if (VAR_7->status != VAR_4)
         break;

      VAR_8 += VAR_10;
      VAR_9 -= VAR_10;

      while (!VAR_12 && VAR_11 < VAR_8)
      {
         switch (*VAR_11)
         {
         case ':':
            if (VAR_13.value)
            {

               VAR_11++;
            } else {

               *VAR_11++ = '\0';
               VAR_13.value = VAR_11;
            }
            break;

         case '\n':
            if (VAR_13.value)
            {

               *VAR_11++ = '\0';
               VAR_13.value = FUNC_3(VAR_13.value);
               if (VAR_13.name)
               {
                  if (!FUNC_5(VAR_6->header_list, &VAR_13, 0))
                  {
                     FUNC_0(VAR_5, "RTSP: Failed to add <%s> header to list", VAR_13.name);
                     return VAR_3;
                  }
               } else {

                  if (!FUNC_2(VAR_5, VAR_13.value))
                     return VAR_2;
               }

               VAR_13.name = VAR_11;
               VAR_13.value = ((void*)0);
            } else {
               uint32_t VAR_14;


               *VAR_11++ = '\0';
               if (*VAR_13.name && *VAR_13.name != '\r')
               {

                  FUNC_0(VAR_5, "RTSP: Invalid name in header - no colon:\n%s", VAR_13.name);
                  return VAR_2;
               }


               VAR_12 = 1;


               VAR_13.name = VAR_1;
               VAR_13.value = VAR_11;
               if (!FUNC_5(VAR_6->header_list, &VAR_13, 0))
               {
                  FUNC_0(VAR_5, "RTSP: Failed to add content pseudoheader to list");
                  return VAR_3;
               }


               VAR_14 = FUNC_1(VAR_6->header_list);
               if (VAR_11 + VAR_14 < VAR_8)
               {

                  VAR_9 = 0;
               } else {
                  uint32_t VAR_15 = VAR_14 - (VAR_8 - VAR_11);

                  if (VAR_15 >= VAR_9)
                  {
                     FUNC_0(VAR_5, "RTSP: Not enough room to read content");
                     return VAR_3;
                  }


                  VAR_9 = VAR_15;
               }
            }
            break;

         default:

            VAR_11++;
         }
      }
   }

   if (!VAR_9)
   {
      if (VAR_12)
      {

         *VAR_8 = '\0';
      } else {

         FUNC_0(VAR_5, "RTSP: Response header section too big / content missing");
         return VAR_2;
      }
   }

   return VAR_7->status;
}
