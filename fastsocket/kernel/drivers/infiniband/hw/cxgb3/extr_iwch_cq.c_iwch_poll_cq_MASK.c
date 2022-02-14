
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwch_dev {int dummy; } ;
struct iwch_cq {int lock; struct iwch_dev* rhp; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwch_dev*,struct iwch_cq*,struct ib_wc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct iwch_cq* FUNC_4 (struct ib_cq*) ;

int FUNC_5(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct iwch_dev *VAR_4;
 struct iwch_cq *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_4(VAR_1);
 VAR_4 = VAR_5->rhp;

 FUNC_2(&VAR_5->lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  do {
   VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3 + VAR_7);



  } while (VAR_8 == -VAR_0);
  if (VAR_8 <= 0)
   break;
 }
 FUNC_3(&VAR_5->lock, VAR_6);

 if (VAR_8 < 0)
  return VAR_8;
 else {
  return VAR_7;
 }
}
