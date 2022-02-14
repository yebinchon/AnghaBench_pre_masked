
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_srb {struct dc390_srb* pNextSRB; } ;
struct dc390_dcb {struct dc390_srb* pGoingLast; struct dc390_srb* pGoingSRB; int GoingSRBCnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct dc390_srb*) ;

__attribute__((used)) static __inline__ void FUNC_2 (struct dc390_dcb* VAR_0, struct dc390_srb* VAR_1)
{
    VAR_0->GoingSRBCnt++;
    FUNC_0(FUNC_1("DC390: Append SRB %p to Going\n", VAR_1));

    if( VAR_0->pGoingSRB )
 VAR_0->pGoingLast->pNextSRB = VAR_1;
    else
 VAR_0->pGoingSRB = VAR_1;

    VAR_0->pGoingLast = VAR_1;

    VAR_1->pNextSRB = ((void*)0);
}
