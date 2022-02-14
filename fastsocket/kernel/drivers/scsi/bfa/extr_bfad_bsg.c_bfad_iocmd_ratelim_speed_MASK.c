
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct TYPE_2__ {scalar_t__ topology; scalar_t__ trl_def_speed; } ;
struct bfa_fcport_s {scalar_t__ speed_sup; scalar_t__ topology; TYPE_1__ cfg; } ;
struct bfa_bsg_trl_speed_s {scalar_t__ speed; int status; } ;


 struct bfa_fcport_s* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_5, unsigned int VAR_6, void *VAR_7)
{
 struct bfa_bsg_trl_speed_s *VAR_8 = (struct bfa_bsg_trl_speed_s *)VAR_7;
 struct bfa_fcport_s *VAR_9 = FUNC_0(&VAR_5->bfa);
 unsigned long VAR_10;

 FUNC_1(&VAR_5->bfad_lock, VAR_10);


 if ((VAR_8->speed == VAR_0) ||
     (VAR_8->speed > VAR_9->speed_sup)) {
  VAR_8->status = VAR_4;
  FUNC_2(&VAR_5->bfad_lock, VAR_10);
  return 0;
 }

 if ((VAR_9->cfg.topology == VAR_1) &&
  (VAR_9->topology == VAR_1))
  VAR_8->status = VAR_3;
 else {
  VAR_9->cfg.trl_def_speed = VAR_8->speed;
  VAR_8->status = VAR_2;
 }
 FUNC_2(&VAR_5->bfad_lock, VAR_10);

 return 0;
}
