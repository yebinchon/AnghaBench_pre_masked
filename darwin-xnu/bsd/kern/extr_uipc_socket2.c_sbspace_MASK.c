
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_cc; scalar_t__ sb_preconn_hiwat; scalar_t__ sb_mbcnt; scalar_t__ sb_mbmax; } ;


 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (int,int) ;

int
FUNC_2(struct sockbuf *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = FUNC_1((int)(VAR_0->sb_hiwat - VAR_0->sb_cc),
     (int)(VAR_0->sb_mbmax - VAR_0->sb_mbcnt));

 if (VAR_0->sb_preconn_hiwat != 0)
  VAR_2 = FUNC_1((int)(VAR_0->sb_preconn_hiwat - VAR_0->sb_cc), VAR_2);

 if (VAR_2 < 0)
  VAR_2 = 0;





 if (VAR_1 > VAR_2)
  VAR_2 = 0;
 else
  VAR_2 -= VAR_1;

 return (VAR_2);
}
