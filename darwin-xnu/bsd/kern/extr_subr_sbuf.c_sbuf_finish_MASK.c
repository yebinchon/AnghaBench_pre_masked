
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {char* s_buf; size_t s_len; } ;


 int FUNC_0 (struct sbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sbuf*,int ) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,int ) ;

void
FUNC_4(struct sbuf *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_3(VAR_2, 0);

 VAR_2->s_buf[VAR_2->s_len] = '\0';
 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
