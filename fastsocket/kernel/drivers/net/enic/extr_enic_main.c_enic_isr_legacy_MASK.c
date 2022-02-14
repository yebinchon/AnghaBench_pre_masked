
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct enic {int * intr; int * napi; int reset; int legacy_pba; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (struct enic*) ;
 int FUNC_6 (struct enic*) ;
 scalar_t__ FUNC_7 (int *) ;
 struct enic* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct enic *VAR_5 = FUNC_8(VAR_4);
 unsigned int VAR_6 = FUNC_3();
 unsigned int VAR_7 = FUNC_2();
 unsigned int VAR_8 = FUNC_4();
 u32 VAR_9;

 FUNC_11(&VAR_5->intr[VAR_6]);

 VAR_9 = FUNC_10(VAR_5->legacy_pba);
 if (!VAR_9) {
  FUNC_13(&VAR_5->intr[VAR_6]);
  return VAR_1;
 }

 if (FUNC_0(VAR_9, VAR_8)) {
  FUNC_12(&VAR_5->intr[VAR_8]);
  FUNC_6(VAR_5);
 }

 if (FUNC_0(VAR_9, VAR_7)) {
  FUNC_12(&VAR_5->intr[VAR_7]);
  FUNC_5(VAR_5);

  FUNC_9(&VAR_5->reset);
  return VAR_0;
 }

 if (FUNC_0(VAR_9, VAR_6)) {
  if (FUNC_7(&VAR_5->napi[0]))
   FUNC_1(&VAR_5->napi[0]);
 } else {
  FUNC_13(&VAR_5->intr[VAR_6]);
 }

 return VAR_0;
}
