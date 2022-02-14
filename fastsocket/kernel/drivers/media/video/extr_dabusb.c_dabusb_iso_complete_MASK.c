
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int number_of_packets; int actual_length; TYPE_4__* dev; TYPE_1__* iso_frame_desc; int status; void* transfer_buffer; TYPE_3__* context; } ;
typedef TYPE_2__* pdabusb_t ;
typedef TYPE_3__* pbuff_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_2__* s; } ;
struct TYPE_7__ {scalar_t__ state; int overruns; int wait; int remove_pending; int pending_io; } ;
struct TYPE_6__ {int actual_length; int offset; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (TYPE_4__*,unsigned int,int ) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9 (struct urb *VAR_3)
{
 pbuff_t VAR_4 = VAR_3->context;
 pdabusb_t VAR_5 = VAR_4->s;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 void *VAR_9 = VAR_3->transfer_buffer;

 FUNC_1("dabusb_iso_complete");


 if (VAR_3->status != -VAR_0) {
  unsigned int VAR_10 = FUNC_7 (VAR_3->dev, VAR_1);
  int VAR_11 = FUNC_5 (VAR_3->dev, VAR_10, FUNC_6 (VAR_10));
  for (VAR_6 = 0; VAR_6 < VAR_3->number_of_packets; VAR_6++)
   if (!VAR_3->iso_frame_desc[VAR_6].status) {
    VAR_7 = VAR_3->iso_frame_desc[VAR_6].actual_length;
    if (VAR_7 <= VAR_11) {
     FUNC_4 (VAR_9 + VAR_8, VAR_9 + VAR_3->iso_frame_desc[VAR_6].offset, VAR_7);
     VAR_8 += VAR_7;
    }
    else
     FUNC_2(&VAR_3->dev->dev,
      "dabusb_iso_complete: invalid len %d\n", VAR_7);
   }
   else
    FUNC_3(&VAR_3->dev->dev, "dabusb_iso_complete: corrupted packet status: %d\n", VAR_3->iso_frame_desc[VAR_6].status);
  if (VAR_8 != VAR_3->actual_length)
   FUNC_2(&VAR_3->dev->dev,
    "dst!=purb->actual_length:%d!=%d\n",
     VAR_8, VAR_3->actual_length);
 }

 if (FUNC_0 (&VAR_5->pending_io) && !VAR_5->remove_pending && VAR_5->state != VAR_2) {
  VAR_5->overruns++;
  FUNC_2(&VAR_3->dev->dev, "overrun (%d)\n", VAR_5->overruns);
 }
 FUNC_8 (&VAR_5->wait);
}
