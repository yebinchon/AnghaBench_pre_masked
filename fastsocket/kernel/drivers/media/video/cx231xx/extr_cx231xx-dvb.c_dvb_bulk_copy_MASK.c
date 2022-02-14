
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; int status; } ;
struct cx231xx {int state; TYPE_1__* dvb; } ;
struct TYPE_2__ {int demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cx231xx*,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct cx231xx *VAR_3, struct urb *VAR_4)
{
 if (!VAR_3)
  return 0;

 if ((VAR_3->state & VAR_0) || (VAR_3->state & VAR_1))
  return 0;

 if (VAR_4->status < 0) {
  FUNC_1(VAR_3, -1, VAR_4->status);
  if (VAR_4->status == -VAR_2)
   return 0;
 }


 FUNC_0(&VAR_3->dvb->demux,
  VAR_4->transfer_buffer, VAR_4->actual_length);

 return 0;
}
