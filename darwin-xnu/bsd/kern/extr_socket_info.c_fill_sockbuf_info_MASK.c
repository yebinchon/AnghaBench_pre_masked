
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sockbuf_info {int sbi_timeo; int sbi_flags; int sbi_lowat; int sbi_mbmax; int sbi_mbcnt; int sbi_hiwat; int sbi_cc; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct sockbuf {TYPE_1__ sb_timeo; int sb_flags; int sb_lowat; int sb_mbmax; int sb_mbcnt; int sb_hiwat; int sb_cc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct sockbuf *VAR_2, struct sockbuf_info *VAR_3)
{
 VAR_3->sbi_cc = VAR_2->sb_cc;
 VAR_3->sbi_hiwat = VAR_2->sb_hiwat;
 VAR_3->sbi_mbcnt = VAR_2->sb_mbcnt;
 VAR_3->sbi_mbmax = VAR_2->sb_mbmax;
 VAR_3->sbi_lowat = VAR_2->sb_lowat;
 VAR_3->sbi_flags = VAR_2->sb_flags;
 VAR_3->sbi_timeo = (u_int32_t)(VAR_2->sb_timeo.tv_sec * VAR_0) +
     VAR_2->sb_timeo.tv_usec / VAR_1;
 if (VAR_3->sbi_timeo == 0 && VAR_2->sb_timeo.tv_usec != 0)
  VAR_3->sbi_timeo = 1;
}
