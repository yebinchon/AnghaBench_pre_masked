
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int roles; int im_port; } ;
struct bfad_s {int bfad_flags; TYPE_1__ pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

void
FUNC_3(struct bfad_s *VAR_3)
{
 if ((VAR_2 & VAR_1) &&
     (VAR_3->pport.roles & VAR_1)) {
  FUNC_1(VAR_3, VAR_3->pport.im_port);
  FUNC_0(VAR_3->pport.im_port);
  FUNC_2(VAR_3->pport.im_port);
  VAR_3->pport.roles &= ~VAR_1;
 }

 VAR_3->bfad_flags &= ~VAR_0;
}
