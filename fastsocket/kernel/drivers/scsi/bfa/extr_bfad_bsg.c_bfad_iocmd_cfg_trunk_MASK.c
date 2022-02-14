
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct TYPE_3__ {int state; } ;
struct bfa_fcport_trunk_s {TYPE_1__ attr; } ;
struct TYPE_4__ {scalar_t__ topology; int trunked; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_2__ cfg; struct bfa_fcport_trunk_s trunk; } ;
struct bfa_bsg_gen_s {int status; } ;


 int VAR_0 ;
 struct bfa_fcport_s* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct bfad_s *VAR_10, void *VAR_11, unsigned int VAR_12)
{
 struct bfa_bsg_gen_s *VAR_13 = (struct bfa_bsg_gen_s *)VAR_11;
 struct bfa_fcport_s *VAR_14 = FUNC_0(&VAR_10->bfa);
 struct bfa_fcport_trunk_s *VAR_15 = &VAR_14->trunk;
 unsigned long VAR_16;

 FUNC_5(&VAR_10->bfad_lock, VAR_16);

 if (FUNC_4(&VAR_10->bfa))
  return VAR_2;

 if ((VAR_14->cfg.topology == VAR_1) ||
  (VAR_14->topology == VAR_1))
  VAR_13->status = VAR_4;
 else {
  if (VAR_12 == VAR_9) {
   VAR_15->attr.state = VAR_7;
   FUNC_1(&VAR_10->bfa);
   VAR_14->cfg.trunked = VAR_5;
  } else if (VAR_12 == VAR_8) {
   VAR_15->attr.state = VAR_6;
   FUNC_1(&VAR_10->bfa);
   VAR_14->cfg.trunked = VAR_0;
  }

  if (!FUNC_3(&VAR_10->bfa))
   FUNC_2(&VAR_10->bfa);

  VAR_13->status = VAR_3;
 }

 FUNC_6(&VAR_10->bfad_lock, VAR_16);

 return 0;
}
