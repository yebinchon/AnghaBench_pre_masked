
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioim_s {int bfa; int reqq; int fcpim; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*,int ) ;

void
FUNC_4(struct bfa_ioim_s *VAR_2)
{
 FUNC_1(VAR_2->fcpim, VAR_2);




 VAR_2->reqq = FUNC_0(VAR_2->bfa) ?
   VAR_0 : FUNC_2(VAR_2);

 FUNC_3(VAR_2, VAR_1);
}
