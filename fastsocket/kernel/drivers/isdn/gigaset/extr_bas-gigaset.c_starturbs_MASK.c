
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


struct urb {int transfer_buffer_length; int number_of_packets; TYPE_5__* iso_frame_desc; struct bc_state* context; int complete; void* interval; scalar_t__ transfer_buffer; void* transfer_flags; int dev; int pipe; } ;
struct TYPE_7__ {struct bas_bc_state* bas; } ;
struct bc_state {scalar_t__ proto2; int channel; int limit; struct urb* urb; TYPE_4__* cs; int inputstate; TYPE_1__ hw; } ;
struct bas_bc_state {int running; int * isooutovfl; int isooutdone; struct bc_state* isoouturbs; struct bc_state* isooutfree; TYPE_6__* isooutbuf; scalar_t__ isoinbuf; struct urb** isoinurbs; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int offset; int length; scalar_t__ actual_length; scalar_t__ status; } ;
struct TYPE_9__ {TYPE_2__* bas; } ;
struct TYPE_10__ {TYPE_3__ hw; } ;
struct TYPE_8__ {int udev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int ,char*,struct urb*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int VAR_15 ;
 int FUNC_2 (struct bas_bc_state*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct urb*,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_6(struct bc_state *VAR_17)
{
 struct bas_bc_state *VAR_18 = VAR_17->hw.bas;
 struct urb *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;


 if (VAR_17->proto2 == VAR_12)
  VAR_17->inputstate |= VAR_11;


 VAR_18->running = 1;
 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  VAR_19 = VAR_18->isoinurbs[VAR_21];
  if (!VAR_19) {
   VAR_22 = -VAR_9;
   goto error;
  }

  VAR_19->dev = VAR_17->cs->hw.bas->udev;
  VAR_19->pipe = FUNC_3(VAR_19->dev, 3 + 2 * VAR_17->channel);
  VAR_19->transfer_flags = VAR_14;
  VAR_19->transfer_buffer = VAR_18->isoinbuf + VAR_21 * VAR_1;
  VAR_19->transfer_buffer_length = VAR_1;
  VAR_19->number_of_packets = VAR_5;
  VAR_19->interval = VAR_0;
  VAR_19->complete = VAR_15;
  VAR_19->context = VAR_17;
  for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
   VAR_19->iso_frame_desc[VAR_20].offset = VAR_20 * VAR_3;
   VAR_19->iso_frame_desc[VAR_20].length = VAR_3;
   VAR_19->iso_frame_desc[VAR_20].status = 0;
   VAR_19->iso_frame_desc[VAR_20].actual_length = 0;
  }

  FUNC_0(VAR_8, "Initial isoc read", VAR_19);
  if ((VAR_22 = FUNC_5(VAR_19, VAR_10)) != 0)
   goto error;
 }


 FUNC_1(VAR_18->isooutbuf, VAR_13);


 for (VAR_21 = 0; VAR_21 < VAR_7; ++VAR_21) {
  VAR_19 = VAR_18->isoouturbs[VAR_21].urb;
  if (!VAR_19) {
   VAR_22 = -VAR_9;
   goto error;
  }
  VAR_19->dev = VAR_17->cs->hw.bas->udev;
  VAR_19->pipe = FUNC_4(VAR_19->dev, 4 + 2 * VAR_17->channel);
  VAR_19->transfer_flags = VAR_14;
  VAR_19->transfer_buffer = VAR_18->isooutbuf->data;
  VAR_19->transfer_buffer_length = sizeof(VAR_18->isooutbuf->data);
  VAR_19->number_of_packets = VAR_5;
  VAR_19->interval = VAR_0;
  VAR_19->complete = VAR_16;
  VAR_19->context = &VAR_18->isoouturbs[VAR_21];
  for (VAR_20 = 0; VAR_20 < VAR_5; ++VAR_20) {
   VAR_19->iso_frame_desc[VAR_20].offset = VAR_6;
   VAR_19->iso_frame_desc[VAR_20].length = VAR_4;
   VAR_19->iso_frame_desc[VAR_20].status = 0;
   VAR_19->iso_frame_desc[VAR_20].actual_length = 0;
  }
  VAR_18->isoouturbs[VAR_21].limit = -1;
 }


 for (VAR_21 = 0; VAR_21 < VAR_7-1; ++VAR_21) {
  FUNC_0(VAR_8, "Initial isoc write", VAR_19);
  VAR_22 = FUNC_5(VAR_18->isoouturbs[VAR_21].urb, VAR_10);
  if (VAR_22 != 0)
   goto error;
 }
 FUNC_0(VAR_8, "Initial isoc write (free)", VAR_19);
 VAR_18->isooutfree = &VAR_18->isoouturbs[VAR_7-1];
 VAR_18->isooutdone = *(VAR_18->isooutovfl = ((void*)0));
 return 0;
 error:
 FUNC_2(VAR_18);
 return VAR_22;
}
