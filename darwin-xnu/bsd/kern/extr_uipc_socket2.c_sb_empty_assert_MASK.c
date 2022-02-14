
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {scalar_t__ sb_cc; scalar_t__ sb_mbcnt; int * sb_lastrecord; int * sb_mbtail; int * sb_mb; int sb_so; } ;


 int FUNC_0 (char*,char const*,struct sockbuf*,int ,scalar_t__,scalar_t__,int *,int *,int *) ;

void
FUNC_1(struct sockbuf *VAR_0, const char *VAR_1)
{
 if (!(VAR_0->sb_cc == 0 && VAR_0->sb_mb == ((void*)0) && VAR_0->sb_mbcnt == 0 &&
     VAR_0->sb_mbtail == ((void*)0) && VAR_0->sb_lastrecord == ((void*)0))) {
  FUNC_0("%s: sb %p so %p cc %d mbcnt %d mb %p mbtail %p "
      "lastrecord %p\n", VAR_1, VAR_0, VAR_0->sb_so, VAR_0->sb_cc,
      VAR_0->sb_mbcnt, VAR_0->sb_mb, VAR_0->sb_mbtail,
      VAR_0->sb_lastrecord);

 }
}
