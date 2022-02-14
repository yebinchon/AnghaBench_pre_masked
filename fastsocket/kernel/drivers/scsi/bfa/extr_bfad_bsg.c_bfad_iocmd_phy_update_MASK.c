
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_phy_s {scalar_t__ status; int bufsz; int instance; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,void*,int ,int ,int ,struct bfad_hal_comp*) ;
 scalar_t__ FUNC_2 (unsigned int,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct bfa_bsg_phy_s *VAR_6 = (struct bfa_bsg_phy_s *)VAR_4;
 void *VAR_7;
 struct bfad_hal_comp VAR_8;
 unsigned long VAR_9;

 if (FUNC_2(VAR_5,
   sizeof(struct bfa_bsg_phy_s),
   VAR_6->bufsz) != VAR_0) {
  VAR_6->status = VAR_1;
  return 0;
 }

 VAR_7 = (char *)VAR_6 + sizeof(struct bfa_bsg_phy_s);
 FUNC_3(&VAR_8.comp);
 FUNC_4(&VAR_3->bfad_lock, VAR_9);
 VAR_6->status = FUNC_1(FUNC_0(&VAR_3->bfa),
    VAR_6->instance, VAR_7, VAR_6->bufsz,
    0, VAR_2, &VAR_8);
 FUNC_5(&VAR_3->bfad_lock, VAR_9);
 if (VAR_6->status != VAR_0)
  goto out;
 FUNC_6(&VAR_8.comp);
 VAR_6->status = VAR_8.status;
out:
 return 0;
}
