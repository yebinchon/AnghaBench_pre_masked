
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int state; int q_lock; } ;
typedef enum ocrdma_qp_state { ____Placeholder_ocrdma_qp_state } ocrdma_qp_state ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ocrdma_qp *VAR_1, enum ib_qp_state VAR_2,
       enum ib_qp_state *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;
 enum ocrdma_qp_state VAR_6;
 VAR_6 = FUNC_1(VAR_2);


 FUNC_3(&VAR_1->q_lock, VAR_4);

 if (VAR_3)
  *VAR_3 = FUNC_0(VAR_1->state);
 if (VAR_6 == VAR_1->state) {
  FUNC_4(&VAR_1->q_lock, VAR_4);
  return 1;
 }

 switch (VAR_1->state) {
 case 132:
  switch (VAR_6) {
  case 132:
  case 133:
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 133:

  switch (VAR_6) {
  case 133:
  case 131:
   break;
  case 134:
   FUNC_2(VAR_1);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 131:

  switch (VAR_6) {
  case 130:
   break;
  case 134:
   FUNC_2(VAR_1);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 130:

  switch (VAR_6) {
  case 129:
  case 128:
   break;
  case 134:
   FUNC_2(VAR_1);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 129:

  switch (VAR_6) {
  case 130:
  case 128:
  case 134:
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 128:
  switch (VAR_6) {
  case 130:
  case 134:
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 case 134:

  switch (VAR_6) {
  case 132:
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  };
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 };
 if (!VAR_5)
  VAR_1->state = VAR_6;

 FUNC_4(&VAR_1->q_lock, VAR_4);
 return VAR_5;
}
