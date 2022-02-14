
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {scalar_t__ inp_last_outifp; } ;
struct flow_divert_pcb {int so; } ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct inpcb*) ;
 struct inpcb* FUNC_2 (int ) ;

__attribute__((used)) static errno_t
FUNC_3(struct flow_divert_pcb *VAR_1)
{
 struct inpcb *VAR_2 = ((void*)0);

 VAR_2 = FUNC_2(VAR_1->so);
 if (VAR_2 && FUNC_1(VAR_2) && VAR_2->inp_last_outifp &&
     FUNC_0(VAR_2->inp_last_outifp))
  return VAR_0;

 return 0;
}
