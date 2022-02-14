
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6i2c_if {int lock; int timeout_timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct s6i2c_if*,int ) ;
 int FUNC_2 (struct s6i2c_if*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_15, void *VAR_16)
{
 struct s6i2c_if *VAR_17 = VAR_16;
 if (!(FUNC_1(VAR_17, VAR_14) & ((1 << VAR_8)
           | (1 << VAR_7)
           | (1 << VAR_6)
           | (1 << VAR_13)
           | (1 << VAR_12)
           | (1 << VAR_4)
           | (1 << VAR_11)
           | (1 << VAR_5)
           | (1 << VAR_2)
           | (1 << VAR_10)
           | (1 << VAR_9)
           | (1 << VAR_3))))
  return VAR_1;

 FUNC_3(&VAR_17->lock);
 FUNC_0(&VAR_17->timeout_timer);
 FUNC_2(VAR_17);
 FUNC_4(&VAR_17->lock);
 return VAR_0;
}
