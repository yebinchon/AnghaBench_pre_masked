
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct circ_buf {unsigned char* buf; size_t head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;

__attribute__((used)) static inline int
FUNC_3(struct uart_port *VAR_1, struct circ_buf *VAR_2, unsigned char VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!VAR_2->buf)
  return 0;

 FUNC_0(&VAR_1->lock, VAR_4);
 if (FUNC_2(VAR_2) != 0) {
  VAR_2->buf[VAR_2->head] = VAR_3;
  VAR_2->head = (VAR_2->head + 1) & (VAR_0 - 1);
  VAR_5 = 1;
 }
 FUNC_1(&VAR_1->lock, VAR_4);
 return VAR_5;
}
