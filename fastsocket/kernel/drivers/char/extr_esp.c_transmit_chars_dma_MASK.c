
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tty; } ;
struct esp_struct {int xmit_tail; scalar_t__ xmit_cnt; int stat_flags; int IER; TYPE_1__ port; int * xmit_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct esp_struct*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct esp_struct *VAR_12, int VAR_13)
{
 VAR_11 = VAR_13;

 if (VAR_12->xmit_tail + VAR_11 <= VAR_4) {
  FUNC_1(VAR_10, &(VAR_12->xmit_buf[VAR_12->xmit_tail]),
         VAR_11);
 } else {
  int VAR_14 = VAR_4 - VAR_12->xmit_tail;
  FUNC_1(VAR_10, &(VAR_12->xmit_buf[VAR_12->xmit_tail]),
   VAR_14);
  FUNC_1(&(VAR_10[VAR_14]), VAR_12->xmit_buf, VAR_11 - VAR_14);
 }

 VAR_12->xmit_cnt -= VAR_11;
 VAR_12->xmit_tail = (VAR_12->xmit_tail + VAR_11) & (VAR_4 - 1);

 if (VAR_12->xmit_cnt < VAR_8) {
  if (VAR_12->port.tty)
   FUNC_5(VAR_12->port.tty);





  if (VAR_12->xmit_cnt <= 0) {
   VAR_12->IER &= ~VAR_7;
   FUNC_4(VAR_12, VAR_5, VAR_1);
   FUNC_4(VAR_12, VAR_6, VAR_12->IER);
  }
 }

 VAR_12->stat_flags |= VAR_3;

 FUNC_3(VAR_9, VAR_0, FUNC_0(VAR_10),
        VAR_11);
 FUNC_4(VAR_12, VAR_5, VAR_2);
}
