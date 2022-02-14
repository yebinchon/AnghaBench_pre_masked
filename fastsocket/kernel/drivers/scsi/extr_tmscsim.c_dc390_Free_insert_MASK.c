
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_srb {struct dc390_srb* pNextSRB; } ;
struct dc390_acb {struct dc390_srb* pFreeSRB; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct dc390_srb*) ;

__attribute__((used)) static __inline__ void FUNC_2 (struct dc390_acb* VAR_0, struct dc390_srb* VAR_1)
{
    FUNC_0(FUNC_1 ("DC390: Free SRB %p\n", VAR_1));
    VAR_1->pNextSRB = VAR_0->pFreeSRB;
    VAR_0->pFreeSRB = VAR_1;
}
