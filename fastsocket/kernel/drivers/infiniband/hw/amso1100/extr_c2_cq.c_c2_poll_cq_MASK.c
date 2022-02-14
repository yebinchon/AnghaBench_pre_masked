
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_cq {int device; } ;
struct c2_dev {int dummy; } ;
struct c2_cq {int lock; } ;


 int FUNC_0 (struct c2_dev*,struct c2_cq*,struct ib_wc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct c2_cq* FUNC_3 (struct ib_cq*) ;
 struct c2_dev* FUNC_4 (int ) ;

int FUNC_5(struct ib_cq *VAR_0, int VAR_1, struct ib_wc *VAR_2)
{
 struct c2_dev *VAR_3 = FUNC_4(VAR_0->device);
 struct c2_cq *VAR_4 = FUNC_3(VAR_0);
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(&VAR_4->lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {

  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_2 + VAR_6);
  if (VAR_7)
   break;
 }

 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
