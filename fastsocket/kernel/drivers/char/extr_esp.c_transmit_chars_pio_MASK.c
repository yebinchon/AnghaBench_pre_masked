
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tty; } ;
struct esp_struct {int xmit_cnt; int xmit_tail; int IER; TYPE_1__ port; scalar_t__ io_port; int * xmit_buf; } ;
struct esp_pio_buffer {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct esp_pio_buffer* FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (unsigned short,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct esp_pio_buffer*) ;
 int FUNC_5 (struct esp_struct*,int ) ;
 int FUNC_6 (struct esp_struct*,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_8(struct esp_struct *VAR_11,
     int VAR_12)
{
 int VAR_13;
 struct esp_pio_buffer *VAR_14;

 VAR_14 = FUNC_0();

 if (!VAR_14)
  return;

 while (VAR_12 && VAR_11->xmit_cnt) {
  if (VAR_11->xmit_tail + VAR_12 <= VAR_3) {
   FUNC_1(VAR_14->data,
          &(VAR_11->xmit_buf[VAR_11->xmit_tail]),
          VAR_12);
  } else {
   VAR_13 = VAR_3 - VAR_11->xmit_tail;
   FUNC_1(VAR_14->data,
          &(VAR_11->xmit_buf[VAR_11->xmit_tail]), VAR_13);
   FUNC_1(&(VAR_14->data[VAR_13]), VAR_11->xmit_buf,
          VAR_12 - VAR_13);
  }

  VAR_11->xmit_cnt -= VAR_12;
  VAR_11->xmit_tail = (VAR_11->xmit_tail + VAR_12) &
   (VAR_3 - 1);

  for (VAR_13 = 0; VAR_13 < VAR_12 - 1; VAR_13 += 2) {
   FUNC_2(*((unsigned short *)(VAR_14->data + VAR_13)),
        VAR_11->io_port + VAR_8);
  }

  if (VAR_12 & 0x0001)
   FUNC_6(VAR_11, VAR_8,
       VAR_14->data[VAR_12 - 1]);

  if (VAR_11->xmit_cnt) {
   FUNC_6(VAR_11, VAR_4, VAR_1);
   FUNC_6(VAR_11, VAR_4, VAR_0);
   VAR_12 = FUNC_5(VAR_11, VAR_6) << 8;
   VAR_12 |= FUNC_5(VAR_11, VAR_7);

   if (VAR_12 > VAR_11->xmit_cnt)
    VAR_12 = VAR_11->xmit_cnt;
  }
 }

 if (VAR_11->xmit_cnt < VAR_10) {
  if (VAR_11->port.tty)
   FUNC_7(VAR_11->port.tty);





  if (VAR_11->xmit_cnt <= 0) {
   VAR_11->IER &= ~VAR_9;
   FUNC_6(VAR_11, VAR_4,
       VAR_2);
   FUNC_6(VAR_11, VAR_5, VAR_11->IER);
  }
 }

 FUNC_4(VAR_14);
}
