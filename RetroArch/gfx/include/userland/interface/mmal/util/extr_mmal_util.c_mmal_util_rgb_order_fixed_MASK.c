
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sup_encodings ;
struct TYPE_8__ {int size; } ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_7__ {scalar_t__* encodings; TYPE_4__ header; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ MMAL_SUPPORTED_ENCODINGS_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;

int FUNC_1(MMAL_PORT_T *VAR_6)
{
   int VAR_7 = 0;
   MMAL_STATUS_T VAR_8;







   MMAL_SUPPORTED_ENCODINGS_T VAR_9 = {{VAR_4, sizeof(VAR_9)}, {0}};
   VAR_8 = FUNC_0(VAR_6, &VAR_9.header);
   if (VAR_8 == VAR_5 || VAR_8 == VAR_3)
   {


      int VAR_10;
      int VAR_11 = (VAR_9.header.size - sizeof(VAR_9.header)) /
          sizeof(VAR_9.encodings[0]);
      if(VAR_11 > VAR_0)
         VAR_11 = VAR_0;
      for (VAR_10=0; VAR_10<VAR_11; VAR_10++)
      {
         if (VAR_9.encodings[VAR_10] == VAR_1)
         {

            break;
         }
         if (VAR_9.encodings[VAR_10] == VAR_2)
         {

            VAR_7 = 1;
         }
      }
   }
   return VAR_7;
}
