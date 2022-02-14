
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_len; } ;


 scalar_t__ FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;

int
FUNC_2(struct sbuf *VAR_0)
{
 FUNC_1(VAR_0);


 if (FUNC_0(VAR_0))
  return (-1);
 return VAR_0->s_len;
}
