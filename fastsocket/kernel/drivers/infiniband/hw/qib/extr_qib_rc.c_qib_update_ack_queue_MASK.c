
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qp {unsigned int s_tail_ack_queue; int s_ack_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct qib_qp *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 VAR_4 = VAR_3 + 1;
 if (VAR_4 > VAR_1)
  VAR_4 = 0;
 VAR_2->s_tail_ack_queue = VAR_4;
 VAR_2->s_ack_state = FUNC_0(VAR_0);
}
