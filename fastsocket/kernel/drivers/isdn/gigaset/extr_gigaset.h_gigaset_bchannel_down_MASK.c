
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_state {int cs; int at_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ,int *,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct bc_state *VAR_2)
{
 FUNC_1(VAR_2->cs, &VAR_2->at_state, VAR_1, ((void*)0), 0, ((void*)0));

 FUNC_0(VAR_0, "scheduling BC_CLOSED");
 FUNC_2(VAR_2->cs);
}
