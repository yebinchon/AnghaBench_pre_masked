
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


struct TYPE_12__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {struct pvr2_v4l2_fh* input_map; TYPE_6__ channel; struct pvr2_v4l2* vhead; TYPE_2__* vprev; TYPE_5__* vnext; int prio; int * rhp; } ;
struct TYPE_10__ {TYPE_3__* mc_head; } ;
struct pvr2_v4l2 {TYPE_5__* vfirst; TYPE_4__ channel; TYPE_2__* vlast; int prio; } ;
struct pvr2_stream {int dummy; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_11__ {TYPE_2__* vprev; } ;
struct TYPE_9__ {scalar_t__ disconnect_flag; } ;
struct TYPE_8__ {TYPE_5__* vnext; } ;
struct TYPE_7__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_v4l2_fh*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;
 int FUNC_3 (int *) ;
 struct pvr2_stream* FUNC_4 (int *) ;
 int FUNC_5 (struct pvr2_stream*,int *,int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct pvr2_v4l2*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2)
{
 struct pvr2_v4l2_fh *VAR_3 = VAR_2->private_data;
 struct pvr2_v4l2 *VAR_4 = VAR_3->vhead;
 struct pvr2_hdw *VAR_5 = VAR_3->channel.mc_head->hdw;

 FUNC_6(VAR_0,"pvr2_v4l2_release");

 if (VAR_3->rhp) {
  struct pvr2_stream *VAR_6;
  FUNC_2(VAR_5,0);
  VAR_6 = FUNC_4(VAR_3->rhp);
  if (VAR_6) FUNC_5(VAR_6,((void*)0),((void*)0));
  FUNC_3(VAR_3->rhp);
  VAR_3->rhp = ((void*)0);
 }

 FUNC_8(&VAR_4->prio, VAR_3->prio);
 VAR_2->private_data = ((void*)0);

 if (VAR_3->vnext) {
  VAR_3->vnext->vprev = VAR_3->vprev;
 } else {
  VAR_4->vlast = VAR_3->vprev;
 }
 if (VAR_3->vprev) {
  VAR_3->vprev->vnext = VAR_3->vnext;
 } else {
  VAR_4->vfirst = VAR_3->vnext;
 }
 VAR_3->vnext = ((void*)0);
 VAR_3->vprev = ((void*)0);
 VAR_3->vhead = ((void*)0);
 FUNC_1(&VAR_3->channel);
 FUNC_6(VAR_1,
     "Destroying pvr_v4l2_fh id=%p",VAR_3);
 if (VAR_3->input_map) {
  FUNC_0(VAR_3->input_map);
  VAR_3->input_map = ((void*)0);
 }
 FUNC_0(VAR_3);
 if (VAR_4->channel.mc_head->disconnect_flag && !VAR_4->vfirst) {
  FUNC_7(VAR_4);
 }
 return 0;
}
