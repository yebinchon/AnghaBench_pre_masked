
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_dev {scalar_t__ regs; int netdev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c2_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0;
 struct c2_dev *VAR_9 = (struct c2_dev *) VAR_5;


 VAR_6 = FUNC_3(VAR_9->regs + VAR_1);
 if (VAR_6) {






  FUNC_1(VAR_9->netdev);
  FUNC_2(VAR_9->netdev);


  FUNC_4(VAR_6, VAR_9->regs + VAR_1);
  VAR_8++;
 }


 VAR_7 = FUNC_3(VAR_9->regs + VAR_0);
 if (VAR_7) {
  FUNC_4(VAR_7, VAR_9->regs + VAR_0);
  FUNC_0(VAR_9);
  VAR_8++;
 }

 if (VAR_8) {
  return VAR_2;
 } else {
  return VAR_3;
 }
}
