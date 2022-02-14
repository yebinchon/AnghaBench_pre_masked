
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bfa_plog_s {scalar_t__ plog_enabled; } ;
struct TYPE_2__ {char* string_log; } ;
struct bfa_plog_rec_s {int mid; int eid; TYPE_1__ log_entry; int misc; int log_type; } ;
typedef enum bfa_plog_mid { ____Placeholder_bfa_plog_mid } bfa_plog_mid ;
typedef enum bfa_plog_eid { ____Placeholder_bfa_plog_eid } bfa_plog_eid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_plog_s*,struct bfa_plog_rec_s*) ;
 int FUNC_1 (struct bfa_plog_rec_s*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(struct bfa_plog_s *VAR_2, enum bfa_plog_mid VAR_3,
  enum bfa_plog_eid VAR_4,
  u16 VAR_5, char *VAR_6)
{
 struct bfa_plog_rec_s VAR_7;

 if (VAR_2->plog_enabled) {
  FUNC_1(&VAR_7, 0, sizeof(struct bfa_plog_rec_s));
  VAR_7.mid = VAR_3;
  VAR_7.eid = VAR_4;
  VAR_7.log_type = VAR_0;
  VAR_7.misc = VAR_5;
  FUNC_2(VAR_7.log_entry.string_log, VAR_6,
   VAR_1 - 1);
  VAR_7.log_entry.string_log[VAR_1 - 1] = '\0';
  FUNC_0(VAR_2, &VAR_7);
 }
}
