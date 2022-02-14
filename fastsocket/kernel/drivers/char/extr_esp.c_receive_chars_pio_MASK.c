
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int flags; struct tty_struct* tty; } ;
struct esp_struct {int read_status_mask; int ignore_status_mask; int stat_flags; TYPE_1__ port; scalar_t__ io_port; } ;
struct esp_pio_buffer {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct tty_struct*) ;
 struct esp_pio_buffer* FUNC_1 () ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct esp_pio_buffer*) ;
 int FUNC_4 (struct esp_struct*,scalar_t__) ;
 int FUNC_5 (struct tty_struct*,int,int) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static inline void FUNC_7(struct esp_struct *VAR_7, int VAR_8)
{
 struct tty_struct *VAR_9 = VAR_7->port.tty;
 int VAR_10;
 struct esp_pio_buffer *VAR_11;
 struct esp_pio_buffer *VAR_12;
 unsigned char VAR_13;

 VAR_11 = FUNC_1();

 if (!VAR_11)
  return;

 VAR_12 = FUNC_1();

 if (!VAR_12) {
  FUNC_3(VAR_11);
  return;
 }

 VAR_13 = (VAR_7->read_status_mask >> 2) & 0x07;

 for (VAR_10 = 0; VAR_10 < VAR_8 - 1; VAR_10 += 2) {
  *((unsigned short *)(VAR_11->data + VAR_10)) =
   FUNC_2(VAR_7->io_port + VAR_6);
  VAR_12->data[VAR_10] = FUNC_4(VAR_7, VAR_5);
  VAR_12->data[VAR_10 + 1] = (VAR_12->data[VAR_10] >> 3) & VAR_13;
  VAR_12->data[VAR_10] &= VAR_13;
 }

 if (VAR_8 & 0x0001) {
  VAR_11->data[VAR_8 - 1] = FUNC_4(VAR_7, VAR_6);
  VAR_12->data[VAR_8 - 1] =
   (FUNC_4(VAR_7, VAR_5) >> 3) & VAR_13;
 }


 VAR_9 = VAR_7->port.tty;

 if (!VAR_9) {
  FUNC_3(VAR_11);
  FUNC_3(VAR_12);
  VAR_7->stat_flags &= ~VAR_1;
  return;
 }

 VAR_13 = (VAR_7->ignore_status_mask >> 2) & 0x07;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  if (!(VAR_12->data[VAR_10] & VAR_13)) {
   int VAR_14 = 0;

   if (VAR_12->data[VAR_10] & 0x04) {
    VAR_14 = VAR_2;
    if (VAR_7->port.flags & VAR_0)
     FUNC_0(VAR_9);
   } else if (VAR_12->data[VAR_10] & 0x02)
    VAR_14 = VAR_3;
   else if (VAR_12->data[VAR_10] & 0x01)
    VAR_14 = VAR_4;
   FUNC_5(VAR_9, VAR_11->data[VAR_10], VAR_14);
  }
 }

 FUNC_6(VAR_9);

 VAR_7->stat_flags &= ~VAR_1;
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
}
