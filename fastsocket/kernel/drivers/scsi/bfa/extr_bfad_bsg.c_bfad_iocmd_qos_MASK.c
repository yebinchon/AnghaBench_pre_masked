
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_3__ bfa; } ;
struct TYPE_4__ {int low; int med; int high; } ;
struct TYPE_5__ {scalar_t__ topology; TYPE_1__ qos_bw; int qos_enabled; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_2__ cfg; } ;
struct bfa_bsg_gen_s {int status; } ;


 int VAR_0 ;
 struct bfa_fcport_s* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_10, void *VAR_11, unsigned int VAR_12)
{
 struct bfa_bsg_gen_s *VAR_13 = (struct bfa_bsg_gen_s *)VAR_11;
 struct bfa_fcport_s *VAR_14 = FUNC_0(&VAR_10->bfa);
 unsigned long VAR_15;

 FUNC_2(&VAR_10->bfad_lock, VAR_15);
 if (FUNC_1(&VAR_10->bfa.ioc) == VAR_1) {
  if ((VAR_14->cfg.topology == VAR_2) &&
  (VAR_14->topology == VAR_2))
   VAR_13->status = VAR_6;
  else {
   if (VAR_12 == VAR_9)
    VAR_14->cfg.qos_enabled = VAR_7;
   else if (VAR_12 == VAR_8) {
    VAR_14->cfg.qos_enabled = VAR_0;
    VAR_14->cfg.qos_bw.high = VAR_3;
    VAR_14->cfg.qos_bw.med = VAR_5;
    VAR_14->cfg.qos_bw.low = VAR_4;
   }
  }
 }
 FUNC_3(&VAR_10->bfad_lock, VAR_15);

 return 0;
}
