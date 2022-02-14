
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvecs; } ;
struct bfa_s {TYPE_1__ msix; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_s*,int) ;

void
FUNC_3(struct bfa_s *VAR_1, int VAR_2)
{
 FUNC_0((VAR_2 != 1) && (VAR_2 != VAR_0));
 FUNC_2(VAR_1, VAR_2);

 VAR_1->msix.nvecs = VAR_2;
 FUNC_1(VAR_1);
}
