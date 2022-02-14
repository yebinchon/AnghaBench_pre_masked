
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; TYPE_2__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct em28xx {int state; TYPE_1__* dvb; } ;
struct TYPE_4__ {int status; int actual_length; scalar_t__ offset; } ;
struct TYPE_3__ {int demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct em28xx*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct em28xx *VAR_4, struct urb *VAR_5)
{
 int VAR_6;

 if (!VAR_4)
  return 0;

 if ((VAR_4->state & VAR_0) || (VAR_4->state & VAR_1))
  return 0;

 if (VAR_5->status < 0) {
  FUNC_1(VAR_4, -1, VAR_5->status);
  if (VAR_5->status == -VAR_2)
   return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->number_of_packets; VAR_6++) {
  int VAR_7 = VAR_5->iso_frame_desc[VAR_6].status;

  if (VAR_7 < 0) {
   FUNC_1(VAR_4, VAR_6, VAR_7);
   if (VAR_5->iso_frame_desc[VAR_6].status != -VAR_3)
    continue;
  }

  FUNC_0(&VAR_4->dvb->demux, VAR_5->transfer_buffer +
     VAR_5->iso_frame_desc[VAR_6].offset,
     VAR_5->iso_frame_desc[VAR_6].actual_length);
 }

 return 0;
}
