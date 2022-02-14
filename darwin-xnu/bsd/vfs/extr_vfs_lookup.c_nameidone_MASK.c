
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cn_flags; char* cn_pnbuf; int cn_pnlen; } ;
struct nameidata {TYPE_1__ ni_cnd; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct nameidata *VAR_2)
{
 if (VAR_2->ni_cnd.cn_flags & VAR_0) {
  char *VAR_3 = VAR_2->ni_cnd.cn_pnbuf;

  VAR_2->ni_cnd.cn_pnbuf = ((void*)0);
  VAR_2->ni_cnd.cn_flags &= ~VAR_0;
  FUNC_0(VAR_3, VAR_2->ni_cnd.cn_pnlen, VAR_1);
 }
}
