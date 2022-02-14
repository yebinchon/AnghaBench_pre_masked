
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; TYPE_1__* tty; } ;
struct slgt_info {TYPE_2__ port; int icount; scalar_t__ pending_bh; int device_name; scalar_t__ tx_buf; int max_frame_size; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct slgt_info *VAR_4)
{
 FUNC_1(("%s startup\n", VAR_4->device_name));

 if (VAR_4->port.flags & VAR_0)
  return 0;

 if (!VAR_4->tx_buf) {
  VAR_4->tx_buf = FUNC_4(VAR_4->max_frame_size, VAR_2);
  if (!VAR_4->tx_buf) {
   FUNC_0(("%s can't allocate tx buffer\n", VAR_4->device_name));
   return -VAR_1;
  }
 }

 VAR_4->pending_bh = 0;

 FUNC_5(&VAR_4->icount, 0, sizeof(VAR_4->icount));


 FUNC_2(VAR_4);

 if (VAR_4->port.tty)
  FUNC_3(VAR_3, &VAR_4->port.tty->flags);

 VAR_4->port.flags |= VAR_0;

 return 0;
}
