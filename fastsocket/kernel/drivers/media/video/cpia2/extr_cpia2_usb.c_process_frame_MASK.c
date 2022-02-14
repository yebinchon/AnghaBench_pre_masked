
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camera_data {int first_image_seen; int num_frames; TYPE_1__* workbuff; TYPE_1__* curbuff; scalar_t__ mmapped; } ;
struct TYPE_2__ {unsigned char* data; int length; int max_length; void* status; int num; struct TYPE_2__* next; } ;


 int FUNC_0 (char*,...) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct camera_data *VAR_3)
{
 static int VAR_4;

 unsigned char *VAR_5 = VAR_3->workbuff->data;

 FUNC_0("Processing frame #%d, current:%d\n",
     VAR_3->workbuff->num, VAR_3->curbuff->num);

 if(VAR_3->workbuff->length > VAR_3->workbuff->max_length)
  VAR_3->workbuff->max_length = VAR_3->workbuff->length;

 if ((VAR_5[0] == 0xFF) && (VAR_5[1] == 0xD8)) {
  VAR_4++;
 } else {
  VAR_3->workbuff->status = VAR_1;
  FUNC_0("Start of frame not found\n");
  return;
 }




 if(!VAR_3->first_image_seen) {


  VAR_3->first_image_seen = 1;
  VAR_3->workbuff->status = VAR_0;
  return;
 }
 if (VAR_3->workbuff->length > 3) {
  if(VAR_3->mmapped &&
     VAR_3->workbuff->length < VAR_3->workbuff->max_length) {

   FUNC_1(VAR_3->workbuff->data+VAR_3->workbuff->length,
          0, VAR_3->workbuff->max_length-
      VAR_3->workbuff->length);
  }
  VAR_3->workbuff->max_length = VAR_3->workbuff->length;
  VAR_3->workbuff->status = VAR_2;

  if(!VAR_3->mmapped && VAR_3->num_frames > 2) {
   VAR_3->curbuff->status = VAR_0;
  }
  VAR_3->curbuff = VAR_3->workbuff;
  VAR_3->workbuff = VAR_3->workbuff->next;
  FUNC_0("Changed buffers, work:%d, current:%d\n",
      VAR_3->workbuff->num, VAR_3->curbuff->num);
  return;
 } else {
  FUNC_0("Not enough data for an image.\n");
 }

 VAR_3->workbuff->status = VAR_1;
 return;
}
