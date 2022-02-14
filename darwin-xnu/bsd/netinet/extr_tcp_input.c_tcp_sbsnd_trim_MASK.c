
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sockbuf {int sb_flags; scalar_t__ sb_idealsize; scalar_t__ sb_hiwat; scalar_t__ sb_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockbuf*,scalar_t__) ;
 int VAR_2 ;

void
FUNC_1(struct sockbuf *VAR_3)
{
 if (VAR_2 == 1 &&
  ((VAR_3->sb_flags & (VAR_0 | VAR_1)) ==
   (VAR_0 | VAR_1)) &&
  (VAR_3->sb_idealsize > 0) &&
  (VAR_3->sb_hiwat > VAR_3->sb_idealsize)) {
  u_int32_t VAR_4 = 0;
  if (VAR_3->sb_cc <= VAR_3->sb_idealsize) {
   VAR_4 = VAR_3->sb_hiwat - VAR_3->sb_idealsize;
  } else {
   VAR_4 = VAR_3->sb_hiwat - VAR_3->sb_cc;
  }
  FUNC_0(VAR_3, (VAR_3->sb_hiwat - VAR_4));
 }
 if (VAR_3->sb_hiwat <= VAR_3->sb_idealsize)
  VAR_3->sb_flags &= ~(VAR_1);
}
