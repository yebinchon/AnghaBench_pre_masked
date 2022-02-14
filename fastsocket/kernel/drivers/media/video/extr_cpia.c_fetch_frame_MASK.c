
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mode; int decimation; } ;
struct TYPE_10__ {int expMode; } ;
struct TYPE_8__ {scalar_t__ streamState; } ;
struct TYPE_14__ {TYPE_6__ compression; TYPE_3__ exposure; TYPE_1__ status; int streamStartLine; } ;
struct TYPE_12__ {void* state; int count; int data; } ;
struct cam_data {int first_frame; unsigned long transfer_rate; int image_size; size_t curframe; TYPE_7__ params; TYPE_5__ decompressed_frame; TYPE_4__* frame; int raw_image; int lowlevel_data; TYPE_2__* ops; } ;
struct TYPE_11__ {scalar_t__ state; int data; } ;
struct TYPE_9__ {int (* streamRead ) (int ,int ,int ) ;scalar_t__ wait_for_stream_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (struct cam_data*) ;
 int FUNC_2 () ;
 int VAR_20 ;
 int FUNC_3 (struct cam_data*) ;
 scalar_t__ FUNC_4 (struct cam_data*,int ,scalar_t__,int ,int ,int ) ;
 unsigned long VAR_21 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct cam_data*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct cam_data*,int) ;
 int FUNC_9 (struct cam_data*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(void *VAR_22)
{
 int VAR_23, VAR_24;
 struct cam_data *VAR_25 = (struct cam_data *)VAR_22;
 unsigned long VAR_26, VAR_27, VAR_28;



 for (VAR_24 = 0; VAR_24 < 3; ++VAR_24) {
  if (VAR_24)
   FUNC_0("retry=%d\n", VAR_24);

  if (!VAR_25->ops)
   continue;


  if (VAR_25->first_frame &&
      VAR_25->params.compression.mode != VAR_8) {
   FUNC_4(VAR_25, VAR_6,
       VAR_8,
       VAR_16, 0, 0);


   FUNC_4(VAR_25, VAR_0, 0, 0, 0, 0);
  }


  if (FUNC_4(VAR_25, VAR_4, 0,
          VAR_25->params.streamStartLine, 0, 0))
   continue;

  if (VAR_25->ops->wait_for_stream_ready) {

   int VAR_29 = 0;
   FUNC_4(VAR_25, VAR_1,0,0,0,0);
   while (VAR_25->params.status.streamState != VAR_19) {
    if(++VAR_29 > VAR_17)
     break;
    if(VAR_25->params.status.streamState ==
       VAR_18) {

     if(!FUNC_1(VAR_25))
      return -VAR_12;
    }

    FUNC_2();


    FUNC_7(10);
    if (FUNC_10(VAR_20))
     return -VAR_11;

    FUNC_4(VAR_25, VAR_1,
        0, 0, 0, 0);
   }
   if(VAR_25->params.status.streamState != VAR_19) {
    continue;
   }
  }

  FUNC_2();


  VAR_26 = VAR_21;
  VAR_23 = VAR_25->ops->streamRead(VAR_25->lowlevel_data,
        VAR_25->raw_image, 0);
  if (VAR_23 <= 0) {
   FUNC_0("streamRead failed: %d\n", VAR_23);
   continue;
  }

  VAR_27 = VAR_23 * VAR_15 / 1024;
  VAR_28 = VAR_21-VAR_26;
  VAR_25->transfer_rate = VAR_28==0 ? VAR_27 : VAR_27/VAR_28;



  FUNC_9(VAR_25);



  if(VAR_25->params.exposure.expMode == 2)
   FUNC_6(VAR_25);


  FUNC_3(VAR_25);


  FUNC_4(VAR_25, VAR_2, 0, 0, 0, 0);
  FUNC_4(VAR_25, VAR_3, 0, 0, 0, 0);
  FUNC_4(VAR_25, VAR_5, 0, 0, 0, 0);





  FUNC_2();

  VAR_25->image_size = FUNC_8(VAR_25, VAR_23);
  if (VAR_25->image_size <= 0) {
   FUNC_0("parse_picture failed %d\n", VAR_25->image_size);
   if(VAR_25->params.compression.mode !=
      VAR_8) {



    VAR_25->first_frame = 1;
    FUNC_4(VAR_25, VAR_7,
        VAR_10, 0, 0, 0);


    FUNC_7(70);
    if (FUNC_10(VAR_20))
     return -VAR_11;
   }
  } else
   break;
 }

 if (VAR_24 < 3) {

  if (VAR_25->frame[VAR_25->curframe].state == VAR_14) {
   FUNC_5(VAR_25->frame[VAR_25->curframe].data,
          VAR_25->decompressed_frame.data,
          VAR_25->decompressed_frame.count);
   VAR_25->frame[VAR_25->curframe].state = VAR_13;
  } else
   VAR_25->decompressed_frame.state = VAR_13;

  if (VAR_25->first_frame) {
   VAR_25->first_frame = 0;
   FUNC_4(VAR_25, VAR_6,
       VAR_25->params.compression.mode,
       VAR_25->params.compression.decimation, 0, 0);


   FUNC_4(VAR_25, VAR_7,
       VAR_9, 0, 0, 0);
  }
  return 0;
 }
 return -VAR_12;
}
