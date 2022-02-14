
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_bbcr_enable_s {int status; int bb_scn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_5, unsigned int VAR_6, void *VAR_7)
{
 struct bfa_bsg_bbcr_enable_s *VAR_8 =
   (struct bfa_bsg_bbcr_enable_s *)VAR_7;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_1(&VAR_5->bfad_lock, VAR_9);
 if (VAR_6 == VAR_4)
  VAR_10 = FUNC_0(&VAR_5->bfa, VAR_1, VAR_8->bb_scn);
 else if (VAR_6 == VAR_3)
  VAR_10 = FUNC_0(&VAR_5->bfa, VAR_0, 0);
 else {
  FUNC_2(&VAR_5->bfad_lock, VAR_9);
  return -VAR_2;
 }
 FUNC_2(&VAR_5->bfad_lock, VAR_9);

 VAR_8->status = VAR_10;
 return 0;
}
