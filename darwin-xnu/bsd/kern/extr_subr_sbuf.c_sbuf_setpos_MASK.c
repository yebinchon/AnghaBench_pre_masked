
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_size; int s_len; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,int ) ;

int
FUNC_3(struct sbuf *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);

 FUNC_0(VAR_1 >= 0,
     ("attempt to seek to a negative position (%d)", VAR_1));
 FUNC_0(VAR_1 < VAR_0->s_size,
     ("attempt to seek past end of sbuf (%d >= %d)", VAR_1, VAR_0->s_size));

 if (VAR_1 < 0 || VAR_1 > VAR_0->s_len)
  return (-1);
 VAR_0->s_len = VAR_1;
 return (0);
}
