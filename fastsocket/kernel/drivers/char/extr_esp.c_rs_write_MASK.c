
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int stopped; int name; struct esp_struct* driver_data; } ;
struct esp_struct {int xmit_cnt; int xmit_head; int IER; int lock; scalar_t__ xmit_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,unsigned char const*,int) ;
 int FUNC_1 (struct esp_struct*,int ,int) ;
 scalar_t__ FUNC_2 (struct esp_struct*,int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_5,
      const unsigned char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 struct esp_struct *VAR_11 = VAR_5->driver_data;
 unsigned long VAR_12;

 if (FUNC_2(VAR_11, VAR_5->name, "rs_write"))
  return 0;

 if (!VAR_11->xmit_buf)
  return 0;

 while (1) {



  VAR_8 = VAR_7;
  VAR_9 = VAR_1 - VAR_11->xmit_cnt - 1;

  if (VAR_9 < VAR_8)
   VAR_8 = VAR_9;

  VAR_9 = VAR_1 - VAR_11->xmit_head;

  if (VAR_9 < VAR_8)
   VAR_8 = VAR_9;

  if (VAR_8 <= 0)
   break;

  FUNC_0(VAR_11->xmit_buf + VAR_11->xmit_head, VAR_6, VAR_8);

  VAR_11->xmit_head = (VAR_11->xmit_head + VAR_8) & (VAR_1-1);
  VAR_11->xmit_cnt += VAR_8;
  VAR_6 += VAR_8;
  VAR_7 -= VAR_8;
  VAR_10 += VAR_8;
 }

 FUNC_3(&VAR_11->lock, VAR_12);

 if (VAR_11->xmit_cnt && !VAR_5->stopped && !(VAR_11->IER & VAR_4)) {
  VAR_11->IER |= VAR_4;
  FUNC_1(VAR_11, VAR_2, VAR_0);
  FUNC_1(VAR_11, VAR_3, VAR_11->IER);
 }

 FUNC_4(&VAR_11->lock, VAR_12);
 return VAR_10;
}
