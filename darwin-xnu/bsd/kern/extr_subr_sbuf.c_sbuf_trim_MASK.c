
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_len; int * s_buf; } ;


 scalar_t__ FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(struct sbuf *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);

 if (FUNC_0(VAR_0))
  return (-1);

 while (VAR_0->s_len && FUNC_3(VAR_0->s_buf[VAR_0->s_len-1]))
  --VAR_0->s_len;

 return (0);
}
