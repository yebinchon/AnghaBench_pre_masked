
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct TYPE_26__ {int alloc_size; int length; int flags; int data; } ;
struct TYPE_25__ {TYPE_4__* format; int buffer_num_recommended; int buffer_num; int buffer_size_recommended; int buffer_size; scalar_t__ is_enabled; } ;
struct TYPE_24__ {TYPE_3__* es; int encoding; } ;
struct TYPE_21__ {void* height; void* width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_22__ {int width; int height; TYPE_1__ crop; } ;
struct TYPE_23__ {TYPE_2__ video; } ;
struct TYPE_20__ {TYPE_5__** output; scalar_t__ status; TYPE_5__** input; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef int MMAL_FOURCC_T ;
typedef TYPE_6__ MMAL_BUFFER_HEADER_T ;
typedef int FILE ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*,int) ;
 void* VAR_7 ;
 int FUNC_1 (int ,int,int) ;
 TYPE_19__* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_11 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,TYPE_6__**,int ) ;
 scalar_t__ FUNC_13 (TYPE_5__*,TYPE_6__**,int ) ;
 scalar_t__ FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

void FUNC_19(MMAL_FOURCC_T VAR_12,
                      const char* VAR_13)
{
   MMAL_PORT_T* VAR_14;
   MMAL_PORT_T* VAR_15;
   MMAL_BUFFER_HEADER_T* VAR_16;
   MMAL_BUFFER_HEADER_T* VAR_17;
   MMAL_STATUS_T VAR_18;
   int VAR_19 = 0;
   int VAR_20 = 0;
   int VAR_21 = 0;
   FILE* VAR_22;
   int VAR_23;

   FUNC_16("Encoding test image %s\n", VAR_13);



   VAR_14 = VAR_8->input[0];
   VAR_8->status = VAR_5;

   if (VAR_14->is_enabled) {
      if (FUNC_14(VAR_14) != VAR_5) {
         FUNC_5(VAR_11, "Failed to disable input port\n");
         FUNC_2(1);
      }
   }

   VAR_14->format->encoding = VAR_1;
   VAR_14->format->es->video.width = FUNC_0(VAR_7, 32);
   VAR_14->format->es->video.height = FUNC_0(VAR_0, 16);
   VAR_14->format->es->video.crop.x = 0;
   VAR_14->format->es->video.crop.y = 0;
   VAR_14->format->es->video.crop.width = VAR_7;
   VAR_14->format->es->video.crop.height = VAR_0;
   if (FUNC_9(VAR_14) != VAR_5) {
      FUNC_5(VAR_11, "Failed to commit input port format\n");
      FUNC_2(1);
   }

   VAR_14->buffer_size = VAR_14->buffer_size_recommended;
   VAR_14->buffer_num = VAR_14->buffer_num_recommended;

   if (FUNC_15(VAR_14, VAR_6)
       != VAR_5) {
      FUNC_5(VAR_11, "Failed to enable input port\n");
      FUNC_2(1);
   }

   FUNC_16("- input %4.4s %ux%u\n",
          (char*)&VAR_14->format->encoding,
          VAR_14->format->es->video.width, VAR_14->format->es->video.height);



   VAR_15 = VAR_8->output[0];

   if (VAR_15->is_enabled) {
      if (FUNC_14(VAR_15) != VAR_5) {
         FUNC_5(VAR_11, "Failed to disable output port\n");
         FUNC_2(1);
      }
   }

   VAR_15->format->encoding = VAR_12;
   if (FUNC_9(VAR_15) != VAR_5) {
      FUNC_5(VAR_11, "Failed to commit output port format\n");
      FUNC_2(1);
   }

   FUNC_10(VAR_15, VAR_4, 100);

   VAR_15->buffer_size = VAR_15->buffer_size_recommended;
   VAR_15->buffer_num = VAR_15->buffer_num_recommended;

   if (FUNC_15(VAR_15, VAR_6)
       != VAR_5) {
      FUNC_5(VAR_11, "Failed to enable output port\n");
      FUNC_2(1);
   }

   FUNC_16("- output %4.4s\n", (char*)&VAR_12);



   VAR_22 = FUNC_4(VAR_13, "w");
   if (!VAR_22) {
      FUNC_5(VAR_11, "Failed to open file %s (%s)\n", VAR_13, FUNC_17(VAR_9));
      FUNC_2(1);
   }

   while (!VAR_19) {


      while (FUNC_12(VAR_15, &VAR_17, 0) == VAR_5) {
         if (FUNC_11(VAR_15, VAR_17) != VAR_5) {
            FUNC_5(VAR_11, "Failed to send buffer\n");
            break;
         }
      }


      if (!VAR_20 && FUNC_12(VAR_14, &VAR_16, 0) == VAR_5) {
         FUNC_16("- sending %u bytes to encoder\n", VAR_16->alloc_size);
         FUNC_1(VAR_16->data, VAR_16->alloc_size, VAR_14->format->es->video.width);
         VAR_16->length = VAR_16->alloc_size;
         VAR_16->flags = VAR_2;
         if (FUNC_11(VAR_14, VAR_16) != VAR_5) {
            FUNC_5(VAR_11, "Failed to send buffer\n");
            break;
         }
         VAR_20 = 1;
      }


      VAR_18 = FUNC_13(VAR_15, &VAR_17, 0);
      if (VAR_18 == VAR_3) {

         FUNC_18(&VAR_10);
         continue;
      } else if (VAR_18 != VAR_5) {
         FUNC_5(VAR_11, "Failed to get full buffer\n");
         FUNC_2(1);
      }

      FUNC_16("- received %i bytes\n", VAR_17->length);
      VAR_19 = VAR_17->flags & VAR_2;

      VAR_23 = FUNC_6(VAR_17->data, 1, VAR_17->length, VAR_22);
      if (VAR_23 != VAR_17->length) {
         FUNC_5(VAR_11, "Failed to write complete buffer\n");
         FUNC_2(1);
      }
      VAR_21 += VAR_23;

      FUNC_7(VAR_17);
   }

   FUNC_8(VAR_15);

   FUNC_3(VAR_22);
   FUNC_16("- written %u bytes to %s\n\n", VAR_21, VAR_13);
}
