
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int irqmask_lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_8)
{
 struct rt2x00_dev *VAR_9 = (struct rt2x00_dev *)VAR_8;
 u32 VAR_10;




 FUNC_0(VAR_9, VAR_7);
 FUNC_0(VAR_9, VAR_6);
 FUNC_0(VAR_9, VAR_5);




 if (FUNC_6(VAR_4, &VAR_9->flags)) {
  FUNC_4(&VAR_9->irqmask_lock);

  FUNC_2(VAR_9, VAR_0, &VAR_10);
  FUNC_1(&VAR_10, VAR_3, 0);
  FUNC_1(&VAR_10, VAR_1, 0);
  FUNC_1(&VAR_10, VAR_2, 0);
  FUNC_3(VAR_9, VAR_0, VAR_10);

  FUNC_5(&VAR_9->irqmask_lock);
 }
}
