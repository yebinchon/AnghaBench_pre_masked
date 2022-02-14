
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_fw_stats_s {int dummy; } ;
struct bfa_bsg_ioc_fwstats_s {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,void*) ;
 int FUNC_1 (struct bfad_s*,int) ;
 scalar_t__ FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct bfad_s *VAR_2, void *VAR_3,
   unsigned int VAR_4)
{
 struct bfa_bsg_ioc_fwstats_s *VAR_5 =
   (struct bfa_bsg_ioc_fwstats_s *)VAR_3;
 void *VAR_6;
 unsigned long VAR_7;

 if (FUNC_2(VAR_4,
   sizeof(struct bfa_bsg_ioc_fwstats_s),
   sizeof(struct bfa_fw_stats_s)) != VAR_0) {
  VAR_5->status = VAR_1;
  goto out;
 }

 VAR_6 = (char *)VAR_5 + sizeof(struct bfa_bsg_ioc_fwstats_s);
 FUNC_3(&VAR_2->bfad_lock, VAR_7);
 VAR_5->status = FUNC_0(&VAR_2->bfa.ioc, VAR_6);
 FUNC_4(&VAR_2->bfad_lock, VAR_7);

 if (VAR_5->status != VAR_0) {
  FUNC_1(VAR_2, VAR_5->status);
  goto out;
 }
out:
 FUNC_1(VAR_2, 0x6666);
 return 0;
}
