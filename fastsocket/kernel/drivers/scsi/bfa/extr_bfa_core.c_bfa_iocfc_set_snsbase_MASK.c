
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct bfa_iocfc_s {TYPE_1__* cfginfo; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;
struct TYPE_2__ {int * ioim_snsbase; scalar_t__ sense_buf_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct bfa_s *VAR_1, int VAR_2, u64 VAR_3)
{
 struct bfa_iocfc_s *VAR_4 = &VAR_1->iocfc;

 VAR_4->cfginfo->sense_buf_len = (VAR_0 - 1);
 FUNC_0(VAR_4->cfginfo->ioim_snsbase[VAR_2], VAR_3);
}
