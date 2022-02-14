
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bport; } ;
struct TYPE_8__ {TYPE_1__ fabric; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa_fcs; int bfa; } ;
struct TYPE_10__ {int symname; } ;
struct TYPE_11__ {TYPE_4__ sym_name; } ;
struct bfa_lport_attr_s {TYPE_5__ port_cfg; int authfail; int loopback; int port_type; scalar_t__ pid; } ;
struct TYPE_9__ {int symname; } ;
struct TYPE_12__ {scalar_t__ topology; TYPE_3__ port_symname; int authfail; int loopback; int port_type; scalar_t__ pid; } ;
struct bfa_bsg_port_attr_s {int status; TYPE_6__ attr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (int *,struct bfa_lport_attr_s*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_port_attr_s *VAR_4 = (struct bfa_bsg_port_attr_s *)VAR_3;
 struct bfa_lport_attr_s VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->bfad_lock, VAR_6);
 FUNC_0(&VAR_2->bfa, &VAR_4->attr);
 FUNC_1(&VAR_2->bfa_fcs.fabric.bport, &VAR_5);
 FUNC_3(&VAR_2->bfad_lock, VAR_6);

 if (VAR_4->attr.topology != VAR_0)
  VAR_4->attr.pid = VAR_5.pid;
 else
  VAR_4->attr.pid = 0;

 VAR_4->attr.port_type = VAR_5.port_type;
 VAR_4->attr.loopback = VAR_5.loopback;
 VAR_4->attr.authfail = VAR_5.authfail;
 FUNC_4(VAR_4->attr.port_symname.symname,
  VAR_5.port_cfg.sym_name.symname,
  sizeof(VAR_5.port_cfg.sym_name.symname));

 VAR_4->status = VAR_1;
 return 0;
}
