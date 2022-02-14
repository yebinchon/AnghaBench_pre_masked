
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int urb_length; int data_count; int urb_count; } ;
struct uvd {int dp; TYPE_1__ stats; int streaming; scalar_t__ user_data; } ;
struct urb {scalar_t__ start_frame; int transfer_buffer_length; int status; int actual_length; struct uvd* context; } ;
struct konicawc {struct urb* last_data_urb; } ;


 int FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct uvd*,struct urb*,struct urb*) ;
 int FUNC_5 (struct uvd*,struct urb*) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_0)
{
 struct uvd *VAR_1 = VAR_0->context;
 struct konicawc *VAR_2 = (struct konicawc *)VAR_1->user_data;


 if (!FUNC_0(VAR_1))
  return;

 if (!VAR_1->streaming) {
  FUNC_1(1, "Not streaming, but interrupt!");
  return;
 }

 FUNC_1(3, "got frame %d len = %d buflen =%d", VAR_0->start_frame, VAR_0->actual_length, VAR_0->transfer_buffer_length);

 VAR_1->stats.urb_count++;

 if (VAR_0->transfer_buffer_length > 32) {
  VAR_2->last_data_urb = VAR_0;
  return;
 }

 if(VAR_2->last_data_urb) {
  int VAR_3 = 0;
  if(VAR_0->start_frame != VAR_2->last_data_urb->start_frame)
   FUNC_3("Lost sync on frames");
  else if (!VAR_0->status && !VAR_2->last_data_urb->status)
   VAR_3 = FUNC_4(VAR_1, VAR_2->last_data_urb, VAR_0);

  FUNC_5(VAR_1, VAR_2->last_data_urb);
  FUNC_5(VAR_1, VAR_0);
  VAR_2->last_data_urb = ((void*)0);
  VAR_1->stats.urb_length = VAR_3;
  VAR_1->stats.data_count += VAR_3;
  if(VAR_3)
   FUNC_2(&VAR_1->dp);
  return;
 }
 return;
}
