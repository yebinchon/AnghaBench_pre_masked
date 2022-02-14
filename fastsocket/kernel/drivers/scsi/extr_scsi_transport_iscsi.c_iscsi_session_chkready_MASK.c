
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int state; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct iscsi_cls_session *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3->lock, VAR_4);
 switch (VAR_3->state) {
 case 128:
  VAR_5 = 0;
  break;
 case 130:
  VAR_5 = VAR_0 << 16;
  break;
 case 129:
  VAR_5 = VAR_2 << 16;
  break;
 default:
  VAR_5 = VAR_1 << 16;
  break;
 }
 FUNC_1(&VAR_3->lock, VAR_4);
 return VAR_5;
}
