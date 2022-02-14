
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_qp_attr_mask { ____Placeholder_ib_qp_attr_mask } ib_qp_attr_mask ;
struct TYPE_2__ {int* req_param; int* opt_param; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;

int FUNC_0(enum ib_qp_state VAR_8, enum ib_qp_state VAR_9,
         enum ib_qp_type VAR_10, enum ib_qp_attr_mask VAR_11)
{
 enum ib_qp_attr_mask VAR_12, VAR_13;

 if (VAR_8 < 0 || VAR_8 > VAR_0 ||
     VAR_9 < 0 || VAR_9 > VAR_0)
  return 0;

 if (VAR_11 & VAR_5 &&
     VAR_8 != VAR_1 && VAR_8 != VAR_2 &&
     VAR_8 != VAR_3 && VAR_8 != VAR_4)
  return 0;

 if (!VAR_7[VAR_8][VAR_9].valid)
  return 0;

 VAR_12 = VAR_7[VAR_8][VAR_9].req_param[VAR_10];
 VAR_13 = VAR_7[VAR_8][VAR_9].opt_param[VAR_10];

 if ((VAR_11 & VAR_12) != VAR_12)
  return 0;

 if (VAR_11 & ~(VAR_12 | VAR_13 | VAR_6))
  return 0;

 return 1;
}
