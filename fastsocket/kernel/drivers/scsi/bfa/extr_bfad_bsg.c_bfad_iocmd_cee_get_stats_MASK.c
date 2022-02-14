
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cee; } ;
struct TYPE_4__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {int comp; scalar_t__ status; } ;
struct bfa_cee_stats_s {int dummy; } ;
struct bfa_bsg_cee_stats_s {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,void*,int ,struct bfad_hal_comp*) ;
 int FUNC_1 (struct bfad_s*,int) ;
 scalar_t__ FUNC_2 (unsigned int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct bfad_s *VAR_4, void *VAR_5,
   unsigned int VAR_6)
{
 struct bfa_bsg_cee_stats_s *VAR_7 =
    (struct bfa_bsg_cee_stats_s *)VAR_5;
 void *VAR_8;
 struct bfad_hal_comp VAR_9;
 unsigned long VAR_10;

 if (FUNC_2(VAR_6,
   sizeof(struct bfa_bsg_cee_stats_s),
   sizeof(struct bfa_cee_stats_s)) != VAR_0) {
  VAR_7->status = VAR_1;
  return 0;
 }

 VAR_8 = (char *)VAR_7 + sizeof(struct bfa_bsg_cee_stats_s);

 VAR_9.status = 0;
 FUNC_3(&VAR_9.comp);
 FUNC_4(&VAR_3);
 FUNC_6(&VAR_4->bfad_lock, VAR_10);
 VAR_7->status = FUNC_0(&VAR_4->bfa.modules.cee, VAR_8,
     VAR_2, &VAR_9);
 FUNC_7(&VAR_4->bfad_lock, VAR_10);
 if (VAR_7->status != VAR_0) {
  FUNC_5(&VAR_3);
  FUNC_1(VAR_4, 0x5555);
  goto out;
 }
 FUNC_8(&VAR_9.comp);
 FUNC_5(&VAR_3);
out:
 return 0;
}
