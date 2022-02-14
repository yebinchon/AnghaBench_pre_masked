
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_mbmax; scalar_t__ sb_hiwat; } ;


 int FUNC_0 (struct sockbuf*) ;

void
FUNC_1(struct sockbuf *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->sb_hiwat = 0;
 VAR_0->sb_mbmax = 0;
}
