
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {char* s_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,int ) ;

char *
FUNC_2(struct sbuf *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);

 return VAR_1->s_buf;
}
