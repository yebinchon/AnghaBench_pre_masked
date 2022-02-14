
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwcm_id_private {int state; int lock; } ;
struct ib_qp_attr {int qp_access_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct iwcm_id_private *VAR_5,
      struct ib_qp_attr *VAR_6,
      int *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(&VAR_5->lock, VAR_8);
 switch (VAR_5->state) {
 case 128:
 case 130:
 case 131:
 case 129:
  *VAR_7 = VAR_4 | VAR_3;
  VAR_6->qp_access_flags = VAR_2|
        VAR_1;
  VAR_9 = 0;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_5->lock, VAR_8);
 return VAR_9;
}
