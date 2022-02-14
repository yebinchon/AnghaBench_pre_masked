
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_bsg_port_cfg_s {int status; int param; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct bfad_s *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct bfa_bsg_port_cfg_s *VAR_7 = (struct bfa_bsg_port_cfg_s *)VAR_5;
 unsigned long VAR_8;

 FUNC_4(&VAR_4->bfad_lock, VAR_8);
 if (VAR_6 == VAR_2)
  VAR_7->status = FUNC_2(&VAR_4->bfa, VAR_7->param);
 else if (VAR_6 == VAR_1)
  VAR_7->status = FUNC_1(&VAR_4->bfa, VAR_7->param);
 else if (VAR_6 == VAR_0)
  VAR_7->status = FUNC_0(&VAR_4->bfa, VAR_7->param);
 else if (VAR_6 == VAR_3)
  VAR_7->status = FUNC_3(&VAR_4->bfa);
 FUNC_5(&VAR_4->bfad_lock, VAR_8);

 return 0;
}
