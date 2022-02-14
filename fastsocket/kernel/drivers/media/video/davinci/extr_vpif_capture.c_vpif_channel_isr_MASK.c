
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vpif_device {struct channel_obj** dev; } ;
struct TYPE_6__ {int field; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct common_obj {scalar_t__ started; scalar_t__ cur_frm; scalar_t__ next_frm; int dma_queue; TYPE_3__ fmt; } ;
struct TYPE_9__ {int frm_fmt; } ;
struct TYPE_10__ {TYPE_4__ std_info; } ;
struct channel_obj {int field_id; int channel_id; TYPE_5__ vpifparams; struct common_obj* common; } ;
typedef int irqreturn_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct vpif_device VAR_4 ;
 int FUNC_2 (struct common_obj*) ;
 int FUNC_3 (struct common_obj*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct vpif_device *VAR_7 = &VAR_4;
 struct common_obj *VAR_8;
 struct channel_obj *VAR_9;
 enum v4l2_field VAR_10;
 int VAR_11 = 0;
 int VAR_12 = -1, VAR_13;

 VAR_11 = *(int *)(VAR_6);
 VAR_9 = VAR_7->dev[VAR_11];

 VAR_10 = VAR_9->common[VAR_2].fmt.fmt.pix.field;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_8 = &VAR_9->common[VAR_13];

  if (0 == VAR_8->started)
   continue;


  if (1 == VAR_9->vpifparams.std_info.frm_fmt) {

   if (FUNC_0(&VAR_8->dma_queue))
    continue;

   if (!VAR_3[VAR_13][VAR_11])
    FUNC_2(VAR_8);

   VAR_3[VAR_13][VAR_11] = 0;

   FUNC_3(VAR_8);


   VAR_3[VAR_13][VAR_11] = 0;
  } else {




   if (VAR_3[VAR_13][VAR_11]) {
    VAR_3[VAR_13][VAR_11] = 0;
    continue;
   }
   if (0 == VAR_13) {
    VAR_9->field_id ^= 1;

    VAR_12 = FUNC_1(VAR_9->channel_id);
    if (VAR_12 != VAR_9->field_id) {




     if (0 == VAR_12)
      VAR_9->field_id = VAR_12;
     return VAR_0;
    }
   }

   if (0 == VAR_12) {

    if (VAR_8->cur_frm == VAR_8->next_frm)
     continue;


    FUNC_2(VAR_8);
   } else if (1 == VAR_12) {

    if (FUNC_0(&VAR_8->dma_queue) ||
        (VAR_8->cur_frm != VAR_8->next_frm))
     continue;

    FUNC_3(VAR_8);
   }
  }
 }
 return VAR_0;
}
