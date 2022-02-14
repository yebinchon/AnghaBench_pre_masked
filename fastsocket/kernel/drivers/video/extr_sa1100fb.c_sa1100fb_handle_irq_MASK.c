
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100fb_info {int ctrlr_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_5, void *VAR_6)
{
 struct sa1100fb_info *VAR_7 = VAR_6;
 unsigned int VAR_8 = VAR_3;

 if (VAR_8 & VAR_4) {
  VAR_1 |= VAR_2;
  FUNC_0(&VAR_7->ctrlr_wait);
 }

 VAR_3 = VAR_8;
 return VAR_0;
}
