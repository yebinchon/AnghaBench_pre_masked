
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vpif_device {struct channel_obj** dev; } ;
struct TYPE_7__ {int field; } ;
struct TYPE_8__ {TYPE_1__ pix; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct common_obj {scalar_t__ started; TYPE_6__* next_frm; TYPE_6__* cur_frm; int dma_queue; TYPE_3__ fmt; } ;
struct TYPE_10__ {int frm_fmt; } ;
struct TYPE_11__ {TYPE_4__ std_info; } ;
struct channel_obj {int field_id; scalar_t__ channel_id; TYPE_5__ vpifparams; struct common_obj* common; } ;
typedef int irqreturn_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_12__ {int done; int state; int ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,struct common_obj*) ;
 int FUNC_3 (struct common_obj*) ;
 int FUNC_4 (scalar_t__) ;
 struct vpif_device VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct vpif_device *VAR_8 = &VAR_5;
 struct channel_obj *VAR_9;
 struct common_obj *VAR_10;
 enum v4l2_field VAR_11;
 int VAR_12 = -1, VAR_13;
 int VAR_14 = 0;

 VAR_14 = *(int *)(VAR_7);
 VAR_9 = VAR_8->dev[VAR_14];
 VAR_11 = VAR_9->common[VAR_3].fmt.fmt.pix.field;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_10 = &VAR_9->common[VAR_13];

  if (0 == VAR_10->started)
   continue;

  if (1 == VAR_9->vpifparams.std_info.frm_fmt) {
   if (FUNC_1(&VAR_10->dma_queue))
    continue;


   if (!VAR_4[VAR_13][VAR_14]) {


    FUNC_0(&VAR_10->cur_frm->ts);
    VAR_10->cur_frm->state = VAR_1;
    FUNC_5(&VAR_10->cur_frm->done);

    VAR_10->cur_frm = VAR_10->next_frm;
   }

   VAR_4[VAR_13][VAR_14] = 0;
   FUNC_3(VAR_10);
  } else {



   if (VAR_4[VAR_13][VAR_14]) {
    VAR_4[VAR_13][VAR_14] = 0;
    continue;
   }

   if (0 == VAR_13) {
    VAR_9->field_id ^= 1;

    VAR_12 = FUNC_4(VAR_9->channel_id + 2);

    if (VAR_12 != VAR_9->field_id) {

     if (0 == VAR_12)
      VAR_9->field_id = VAR_12;

     return VAR_0;
    }
   }
   FUNC_2(VAR_12, VAR_10);
  }
 }

 return VAR_0;
}
