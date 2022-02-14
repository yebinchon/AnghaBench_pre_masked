
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_len; int * s_buf; } ;


 scalar_t__ FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int VAR_0 ;
 int FUNC_2 (struct sbuf*,int ) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,int ) ;
 scalar_t__ FUNC_5 (struct sbuf*,int ) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(struct sbuf *VAR_1, const char *VAR_2)
{
 FUNC_3(VAR_1);
 FUNC_4(VAR_1, 0);

 if (FUNC_0(VAR_1))
  return (-1);

 while (*VAR_2) {
  if (!FUNC_1(VAR_1) && FUNC_5(VAR_1, FUNC_6(VAR_2)) < 0)
   break;
  VAR_1->s_buf[VAR_1->s_len++] = *VAR_2++;
 }
 if (*VAR_2) {
  FUNC_2(VAR_1, VAR_0);
  return (-1);
 }
 return (0);
}
