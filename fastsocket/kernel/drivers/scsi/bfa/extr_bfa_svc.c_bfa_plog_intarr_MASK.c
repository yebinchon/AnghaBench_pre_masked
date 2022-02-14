
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct bfa_plog_s {scalar_t__ plog_enabled; } ;
struct TYPE_2__ {scalar_t__* int_log; } ;
struct bfa_plog_rec_s {int mid; int eid; scalar_t__ log_num_ints; TYPE_1__ log_entry; int misc; int log_type; } ;
typedef enum bfa_plog_mid { ____Placeholder_bfa_plog_mid } bfa_plog_mid ;
typedef enum bfa_plog_eid { ____Placeholder_bfa_plog_eid } bfa_plog_eid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_plog_s*,struct bfa_plog_rec_s*) ;
 int FUNC_1 (struct bfa_plog_rec_s*,int ,int) ;

void
FUNC_2(struct bfa_plog_s *VAR_2, enum bfa_plog_mid VAR_3,
  enum bfa_plog_eid VAR_4,
  u16 VAR_5, u32 *VAR_6, u32 VAR_7)
{
 struct bfa_plog_rec_s VAR_8;
 u32 VAR_9;

 if (VAR_7 > VAR_0)
  VAR_7 = VAR_0;

 if (VAR_2->plog_enabled) {
  FUNC_1(&VAR_8, 0, sizeof(struct bfa_plog_rec_s));
  VAR_8.mid = VAR_3;
  VAR_8.eid = VAR_4;
  VAR_8.log_type = VAR_1;
  VAR_8.misc = VAR_5;

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   VAR_8.log_entry.int_log[VAR_9] = VAR_6[VAR_9];

  VAR_8.log_num_ints = (u8) VAR_7;

  FUNC_0(VAR_2, &VAR_8);
 }
}
