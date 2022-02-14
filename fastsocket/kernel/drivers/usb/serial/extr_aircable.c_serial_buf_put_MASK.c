
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {int head; scalar_t__ buf; int tail; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (scalar_t__,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct circ_buf *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 while (1) {
  VAR_4 = FUNC_0(VAR_1->head, VAR_1->tail, VAR_0);
  if (VAR_3 < VAR_4)
   VAR_4 = VAR_3;
  if (VAR_4 <= 0)
   break;
  FUNC_1(VAR_1->buf + VAR_1->head, VAR_2, VAR_4);
  VAR_1->head = (VAR_1->head + VAR_4) & (VAR_0-1);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  VAR_5 = VAR_4;
 }
 return VAR_5;
}
