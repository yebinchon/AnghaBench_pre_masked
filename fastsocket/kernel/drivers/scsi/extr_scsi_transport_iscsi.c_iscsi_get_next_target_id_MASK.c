
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {unsigned int target_id; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iscsi_cls_session* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct iscsi_cls_session *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(&VAR_3->lock, VAR_4);
 if (*((unsigned int *) VAR_2) == VAR_3->target_id)
  VAR_5 = -VAR_0;
 FUNC_3(&VAR_3->lock, VAR_4);
 return VAR_5;
}
