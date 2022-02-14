
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_config {int rf_lsflags; int rf_lvblen; } ;
struct TYPE_2__ {int h_version; size_t h_length; } ;
struct dlm_rcom {TYPE_1__ rc_header; scalar_t__ rc_buf; } ;
struct dlm_ls {scalar_t__ ls_lvblen; scalar_t__ ls_exflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_3, struct dlm_rcom *VAR_4, int VAR_5)
{
 struct rcom_config *VAR_6 = (struct rcom_config *) VAR_4->rc_buf;
 size_t VAR_7 = sizeof(struct dlm_rcom) + sizeof(struct rcom_config);

 if ((VAR_4->rc_header.h_version & 0xFFFF0000) != VAR_0) {
  FUNC_1(VAR_3, "version mismatch: %x nodeid %d: %x",
     VAR_0 | VAR_1, VAR_5,
     VAR_4->rc_header.h_version);
  return -VAR_2;
 }

 if (VAR_4->rc_header.h_length < VAR_7) {
  FUNC_1(VAR_3, "config too short: %d nodeid %d",
     VAR_4->rc_header.h_length, VAR_5);
  return -VAR_2;
 }

 if (FUNC_0(VAR_6->rf_lvblen) != VAR_3->ls_lvblen ||
     FUNC_0(VAR_6->rf_lsflags) != VAR_3->ls_exflags) {
  FUNC_1(VAR_3, "config mismatch: %d,%x nodeid %d: %d,%x",
     VAR_3->ls_lvblen, VAR_3->ls_exflags, VAR_5,
     FUNC_0(VAR_6->rf_lvblen),
     FUNC_0(VAR_6->rf_lsflags));
  return -VAR_2;
 }
 return 0;
}
