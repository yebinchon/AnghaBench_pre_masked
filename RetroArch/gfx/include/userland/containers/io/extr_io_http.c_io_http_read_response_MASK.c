
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int endstr ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {int status; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_8__ {char* comms_buffer; int header_list; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;
struct TYPE_9__ {char* name; char* value; } ;
typedef TYPE_3__ HTTP_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_IO_T *VAR_4)
{
   VC_CONTAINER_IO_MODULE_T *VAR_5 = VAR_4->module;
   char *VAR_6 = VAR_5->comms_buffer;
   size_t VAR_7 = sizeof(VAR_5->comms_buffer) - 1;
   char *VAR_8 = VAR_6;
   bool VAR_9 = 0;
   HTTP_HEADER_T VAR_10;
   const char VAR_11[] = "\r\n\r\n";
   int VAR_12 = sizeof(VAR_11) - 1;
   int VAR_13 = 0;

   FUNC_6(VAR_5->header_list);


   VAR_10.name = ((void*)0);
   VAR_10.value = VAR_6;







   while (VAR_7)
   {
      if (FUNC_2(VAR_4, VAR_6, 1) != 1)
         break;

      VAR_6++;
      VAR_7--;

      if (VAR_6[-1] == VAR_11[VAR_13])
      {
         if (++VAR_13 == VAR_12)
            break;
      }
      else
         VAR_13 = 0;
   }
   if (!VAR_7)
   {
      FUNC_1(((void*)0), "comms buffer too small for complete HTTP message (%d)",
                sizeof(VAR_5->comms_buffer));
      return VAR_1;
   }

   *VAR_6 = '\0';

   if (VAR_13 == VAR_12)
   {
      if (VAR_0)
         FUNC_0(((void*)0), "READ FROM SERVER: %d bytes\n%s\n-----------------------------------------",
                   sizeof(VAR_5->comms_buffer) - 1 - VAR_7, VAR_5->comms_buffer);

      while (!VAR_9 && VAR_8 < VAR_6)
      {
         switch (*VAR_8)
         {
            case ':':
               if (VAR_10.value)
               {

                  VAR_8++;
               } else {

                  *VAR_8++ = '\0';
                  VAR_10.value = VAR_8;
               }
               break;

            case '\n':
               if (VAR_10.value)
               {

                  *VAR_8++ = '\0';
                  VAR_10.value = FUNC_4(VAR_10.value);
                  if (VAR_10.name)
                  {
                     if (!FUNC_5(VAR_5->header_list, &VAR_10, 0))
                     {
                        FUNC_1(((void*)0), "HTTP: Failed to add <%s> header to list", VAR_10.name);
                        return VAR_3;
                     }
                  } else {

                     if (!FUNC_3(VAR_10.value))
                        return VAR_2;
                  }

                  VAR_10.name = VAR_8;
                  VAR_10.value = ((void*)0);
               } else {

                  *VAR_8++ = '\0';
                  if (*VAR_10.name && *VAR_10.name != '\r')
                  {

                     FUNC_1(((void*)0), "HTTP: Invalid name in header - no colon:\n%s", VAR_10.name);
                     return VAR_2;
                  }


                  VAR_9 = 1;
               }
               break;

            default:

               VAR_8++;
         }
      }
   }

   if (!VAR_7 && !VAR_9)
   {

      FUNC_1(((void*)0), "HTTP: Response header section too big");
      return VAR_2;
   }

   return VAR_4->status;
}
