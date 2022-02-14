
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int plog_enabled; } ;
struct bfad_s {TYPE_1__ plog_buf; } ;
struct bfa_bsg_portlogctl_s {scalar_t__ ctl; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_portlogctl_s *VAR_4 = (struct bfa_bsg_portlogctl_s *)VAR_3;

 if (VAR_4->ctl == VAR_1)
  VAR_2->plog_buf.plog_enabled = 1;
 else
  VAR_2->plog_buf.plog_enabled = 0;

 VAR_4->status = VAR_0;
 return 0;
}
