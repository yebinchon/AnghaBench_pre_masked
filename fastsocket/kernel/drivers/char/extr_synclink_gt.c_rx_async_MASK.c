
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct mgsl_icount {int frame; int parity; int rx; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct slgt_info {unsigned int rbuf_current; int rbuf_index; unsigned char ignore_status_mask; unsigned int rbuf_count; int rx_timer; int device_name; struct slgt_desc* rbufs; struct mgsl_icount icount; TYPE_1__ port; } ;
struct slgt_desc {unsigned char* buf; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct slgt_info*,unsigned char*,int,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct slgt_desc) ;
 int FUNC_3 (struct slgt_desc) ;
 int FUNC_4 (struct slgt_info*,unsigned int,unsigned int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct tty_struct*,unsigned char,int) ;

__attribute__((used)) static void FUNC_8(struct slgt_info *VAR_5)
{
  struct tty_struct *VAR_6 = VAR_5->port.tty;
  struct mgsl_icount *VAR_7 = &VAR_5->icount;
 unsigned int VAR_8, VAR_9;
 unsigned char *VAR_10;
 unsigned char VAR_11;
 struct slgt_desc *VAR_12 = VAR_5->rbufs;
 int VAR_13, VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 unsigned char VAR_17;

 VAR_8 = VAR_9 = VAR_5->rbuf_current;

 while(FUNC_2(VAR_12[VAR_9])) {
  VAR_14 = FUNC_3(VAR_12[VAR_9]) - VAR_5->rbuf_index;
  VAR_10 = VAR_12[VAR_9].buf + VAR_5->rbuf_index;

  FUNC_1(("%s rx_async count=%d\n", VAR_5->device_name, VAR_14));
  FUNC_0(VAR_5, VAR_10, VAR_14, "rx");

  for(VAR_13=0 ; VAR_13 < VAR_14; VAR_13+=2, VAR_10+=2) {
   VAR_17 = *VAR_10;
   VAR_7->rx++;

   VAR_16 = 0;

   if ((VAR_11 = *(VAR_10+1) & (VAR_1 + VAR_0))) {
    if (VAR_11 & VAR_1)
     VAR_7->parity++;
    else if (VAR_11 & VAR_0)
     VAR_7->frame++;

    if (VAR_11 & VAR_5->ignore_status_mask)
     continue;
    if (VAR_11 & VAR_1)
     VAR_16 = VAR_3;
    else if (VAR_11 & VAR_0)
     VAR_16 = VAR_2;
   }
   if (VAR_6) {
    FUNC_7(VAR_6, VAR_17, VAR_16);
    VAR_15++;
   }
  }

  if (VAR_13 < VAR_14) {

   VAR_5->rbuf_index += VAR_13;
   FUNC_5(&VAR_5->rx_timer, VAR_4 + 1);
   break;
  }

  VAR_5->rbuf_index = 0;
  FUNC_4(VAR_5, VAR_9, VAR_9);

  if (++VAR_9 == VAR_5->rbuf_count)
   VAR_9 = 0;


  if (VAR_9 == VAR_8)
   break;
 }

 if (VAR_6 && VAR_15)
  FUNC_6(VAR_6);
}
