
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_pcb {int ipsec_pcb_lock; int ipsec_input_chain_lock; int ipsec_input_chain; } ;


 int FUNC_0 (int *,struct ipsec_pcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ipsec_pcb*) ;

__attribute__((used)) static inline void
FUNC_7(struct ipsec_pcb *VAR_5, bool VAR_6)
{




 FUNC_4(&VAR_5->ipsec_pcb_lock, VAR_2);
 if (VAR_6) {
  FUNC_2(&VAR_3);
  FUNC_0(&VAR_1, VAR_5, VAR_0);
  FUNC_3(&VAR_3);
 }
 FUNC_6(VAR_4, VAR_5);
}
