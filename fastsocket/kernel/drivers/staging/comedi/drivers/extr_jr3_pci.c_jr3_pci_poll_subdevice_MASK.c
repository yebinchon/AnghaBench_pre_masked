
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct transform_t {TYPE_4__* link; } ;
struct six_axis_t {int mz; int my; int mx; int fz; int fy; int fx; } ;
struct poll_delay_t {int dummy; } ;
struct jr3_pci_subdev_private {int errors; int state; int retries; TYPE_2__* range; void* serial_no; void* model_no; int channel_no; struct jr3_channel* channel; } ;
struct TYPE_7__ {int mz; int my; int mx; int fz; int fy; int fx; } ;
struct force_array {int v2; int v1; int mz; int my; int mx; int fz; int fy; int fx; } ;
struct jr3_channel {TYPE_3__ offsets; struct force_array full_scale; int serial_no; int model_no; int errors; } ;
struct comedi_subdevice {struct jr3_pci_subdev_private* private; } ;
typedef enum link_types { ____Placeholder_link_types } link_types ;
struct TYPE_8__ {int link_type; int link_amount; } ;
struct TYPE_5__ {int min; int max; } ;
struct TYPE_6__ {TYPE_1__ range; } ;


 int FUNC_0 (TYPE_4__*) ;
 struct six_axis_t FUNC_1 (struct jr3_channel volatile*) ;
 struct six_axis_t FUNC_2 (struct jr3_channel volatile*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (struct jr3_channel volatile*) ;
 struct poll_delay_t FUNC_6 (int,int) ;
 int FUNC_7 (char*,...) ;
 int VAR_0 ;
 int FUNC_8 (struct jr3_channel volatile*,struct six_axis_t) ;
 int FUNC_9 (struct jr3_channel volatile*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct jr3_channel volatile*,struct transform_t,int ) ;






 int FUNC_12 (struct jr3_channel volatile*,int ) ;
 int FUNC_13 (struct jr3_channel volatile*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct poll_delay_t FUNC_14(struct comedi_subdevice *VAR_3)
{
 struct poll_delay_t VAR_4 = FUNC_6(1000, 2000);
 struct jr3_pci_subdev_private *VAR_5 = VAR_3->private;
 int VAR_6;

 if (VAR_5) {
  volatile struct jr3_channel *VAR_7 = VAR_5->channel;
  int VAR_8 = FUNC_4(&VAR_7->errors);

  if (VAR_8 != VAR_5->errors) {
   FUNC_7("Errors: %x -> %x\n", VAR_5->errors, VAR_8);
   VAR_5->errors = VAR_8;
  }
  if (VAR_8 & (VAR_1 | VAR_2 | VAR_0)) {

   VAR_5->state = 128;

  }
  switch (VAR_5->state) {
  case 128:{
    u16 VAR_9 = FUNC_4(&VAR_7->model_no);
    u16 VAR_10 = FUNC_4(&VAR_7->serial_no);
    if ((VAR_8 & (VAR_1 | VAR_2)) ||
        VAR_9 == 0 || VAR_10 == 0) {




     VAR_4 = FUNC_6(1000, 2000);
    } else {
     VAR_5->retries = 0;
     VAR_5->state =
         129;
     VAR_4 = FUNC_6(1000, 2000);
    }
   }
   break;
  case 129:{
    VAR_5->retries++;
    if (VAR_5->retries < 10) {

     VAR_4 = FUNC_6(1000, 2000);
    } else {
     struct transform_t VAR_11;

     VAR_5->model_no =
         FUNC_4(&VAR_7->model_no);
     VAR_5->serial_no =
         FUNC_4(&VAR_7->serial_no);

     FUNC_7
         ("Setting transform for channel %d\n",
          VAR_5->channel_no);
     FUNC_7("Sensor Model     = %i\n",
            VAR_5->model_no);
     FUNC_7("Sensor Serial    = %i\n",
            VAR_5->serial_no);


     for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_11.link); VAR_6++) {
      VAR_11.link[VAR_6].link_type =
       (enum link_types)0;
      VAR_11.link[VAR_6].link_amount = 0;
     }

     FUNC_11(VAR_7, VAR_11, 0);
     FUNC_13(VAR_7, 0);
     VAR_5->state =
         131;
     VAR_4 = FUNC_6(20, 100);
    }
   } break;
  case 131:{
    if (!FUNC_5(VAR_7)) {
     FUNC_7
         ("state_jr3_init_transform_complete complete = %d\n",
          FUNC_5(VAR_7));
     VAR_4 = FUNC_6(20, 100);
    } else {

     struct six_axis_t VAR_12;
     struct six_axis_t VAR_13;

     VAR_12 =
         FUNC_2(VAR_7);
     FUNC_7("Obtained Min. Full Scales:\n");
     FUNC_7("%i   ", (VAR_12).fx);
     FUNC_7("%i   ", (VAR_12).fy);
     FUNC_7("%i   ", (VAR_12).fz);
     FUNC_7("%i   ", (VAR_12).mx);
     FUNC_7("%i   ", (VAR_12).my);
     FUNC_7("%i   ", (VAR_12).mz);
     FUNC_7("\n");

     VAR_13 =
         FUNC_1(VAR_7);
     FUNC_7("Obtained Max. Full Scales:\n");
     FUNC_7("%i   ", (VAR_13).fx);
     FUNC_7("%i   ", (VAR_13).fy);
     FUNC_7("%i   ", (VAR_13).fz);
     FUNC_7("%i   ", (VAR_13).mx);
     FUNC_7("%i   ", (VAR_13).my);
     FUNC_7("%i   ", (VAR_13).mz);
     FUNC_7("\n");

     FUNC_8(VAR_7,
       VAR_13);

     VAR_5->state =
         132;
     VAR_4 = FUNC_6(20, 100);
    }
   }
   break;
  case 132:{
    if (!FUNC_5(VAR_7)) {
     FUNC_7
         ("state_jr3_init_set_full_scale_complete complete = %d\n",
          FUNC_5(VAR_7));
     VAR_4 = FUNC_6(20, 100);
    } else {
     volatile struct force_array *VAR_14;


     VAR_14 = &VAR_7->full_scale;
     VAR_5->range[0].range.min =
         -FUNC_3(&VAR_14->fx) * 1000;
     VAR_5->range[0].range.max =
         FUNC_3(&VAR_14->fx) * 1000;
     VAR_5->range[1].range.min =
         -FUNC_3(&VAR_14->fy) * 1000;
     VAR_5->range[1].range.max =
         FUNC_3(&VAR_14->fy) * 1000;
     VAR_5->range[2].range.min =
         -FUNC_3(&VAR_14->fz) * 1000;
     VAR_5->range[2].range.max =
         FUNC_3(&VAR_14->fz) * 1000;
     VAR_5->range[3].range.min =
         -FUNC_3(&VAR_14->mx) * 100;
     VAR_5->range[3].range.max =
         FUNC_3(&VAR_14->mx) * 100;
     VAR_5->range[4].range.min =
         -FUNC_3(&VAR_14->my) * 100;
     VAR_5->range[4].range.max =
         FUNC_3(&VAR_14->my) * 100;
     VAR_5->range[5].range.min =
         -FUNC_3(&VAR_14->mz) * 100;
     VAR_5->range[5].range.max =
         FUNC_3(&VAR_14->mz) * 100;
     VAR_5->range[6].range.min = -FUNC_3(&VAR_14->v1) * 100;
     VAR_5->range[6].range.max = FUNC_3(&VAR_14->v1) * 100;
     VAR_5->range[7].range.min = -FUNC_3(&VAR_14->v2) * 100;
     VAR_5->range[7].range.max = FUNC_3(&VAR_14->v2) * 100;
     VAR_5->range[8].range.min = 0;
     VAR_5->range[8].range.max = 65535;

     {
      int VAR_15;
      for (VAR_15 = 0; VAR_15 < 9; VAR_15++) {
       FUNC_7("%d %d - %d\n",
              VAR_15,
              VAR_5->
              range[VAR_15].range.
              min,
              VAR_5->
              range[VAR_15].range.
              max);
      }
     }

     FUNC_12(VAR_7, 0);
     VAR_5->state =
         130;
     VAR_4 = FUNC_6(40, 100);
    }
   }
   break;
  case 130:{
    if (!FUNC_5(VAR_7)) {
     FUNC_7
         ("state_jr3_init_use_offset_complete complete = %d\n",
          FUNC_5(VAR_7));
     VAR_4 = FUNC_6(20, 100);
    } else {
     FUNC_7
         ("Default offsets %d %d %d %d %d %d\n",
          FUNC_3(&VAR_7->offsets.fx),
          FUNC_3(&VAR_7->offsets.fy),
          FUNC_3(&VAR_7->offsets.fz),
          FUNC_3(&VAR_7->offsets.mx),
          FUNC_3(&VAR_7->offsets.my),
          FUNC_3(&VAR_7->offsets.mz));

     FUNC_10(&VAR_7->offsets.fx, 0);
     FUNC_10(&VAR_7->offsets.fy, 0);
     FUNC_10(&VAR_7->offsets.fz, 0);
     FUNC_10(&VAR_7->offsets.mx, 0);
     FUNC_10(&VAR_7->offsets.my, 0);
     FUNC_10(&VAR_7->offsets.mz, 0);

     FUNC_9(VAR_7);

     VAR_5->state = 133;
    }
   }
   break;
  case 133:{
    FUNC_6(10000, 20000);
   }
   break;
  default:{
    FUNC_6(1000, 2000);
   }
   break;
  }
 }
 return VAR_4;
}
