
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_dev {int ubr; int free_shapers; int lock; scalar_t__ ubr_ref_cnt; } ;
struct atm_dev {int dummy; } ;


 struct zatm_dev* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct zatm_dev*,int ) ;
 int FUNC_5 (struct zatm_dev*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct atm_dev *VAR_1,int VAR_2)
{
 struct zatm_dev *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 == VAR_3->ubr) {
  if (--VAR_3->ubr_ref_cnt) return;
  VAR_3->ubr = -1;
 }
 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_5(VAR_3,FUNC_4(VAR_3,FUNC_3(VAR_2)) & ~VAR_0,
     FUNC_3(VAR_2));
 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_3->free_shapers |= 1 << VAR_2;
}
