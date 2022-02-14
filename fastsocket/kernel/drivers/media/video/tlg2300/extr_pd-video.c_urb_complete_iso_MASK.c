
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_data {int bubble_work; int is_streaming; } ;
struct urb {int number_of_packets; scalar_t__ transfer_buffer; struct front_face* context; } ;
struct front_face {TYPE_1__* pd; } ;
struct TYPE_2__ {struct video_data video_data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct video_data*,char*,int) ;
 int FUNC_1 (struct video_data*,char*,int) ;
 int FUNC_2 (int,struct urb*,int*,int*,int*) ;
 int FUNC_3 (struct front_face*,struct video_data*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_2)
{
 struct front_face *VAR_3 = VAR_2->context;
 struct video_data *VAR_4 = &VAR_3->pd->video_data;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 char *VAR_8 = (char *)VAR_2->transfer_buffer;
 int VAR_9 = 0;

 if (!VAR_4->is_streaming)
  return;

 do {
  if (!FUNC_3(VAR_3, VAR_4))
   goto out;

  switch (FUNC_2(VAR_6, VAR_2, &VAR_6, &VAR_7, &VAR_5)) {
  case 130:
   FUNC_1(VAR_4, VAR_8 + (VAR_6 * VAR_1),
     (VAR_7 - VAR_6 + 1) * VAR_1);
   break;
  case 128:
   FUNC_0(VAR_4, VAR_8 + (VAR_6 * VAR_1),
     VAR_1);
   break;
  case 131:
   goto out;
  case 129:
   FUNC_4("\t We got too much bubble");
   FUNC_5(&VAR_4->bubble_work);
   return;
  }
 } while (VAR_6 = VAR_7 + 1, VAR_6 < VAR_2->number_of_packets);

out:
 VAR_9 = FUNC_6(VAR_2, VAR_0);
 if (VAR_9)
  FUNC_4("usb_submit_urb err : %d", VAR_9);
}
