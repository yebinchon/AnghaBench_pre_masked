
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dw_i2c_dev {int status; scalar_t__ base; int adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_5)
{
 struct dw_i2c_dev *VAR_6 = (struct dw_i2c_dev *) VAR_5;
 u16 VAR_7;

 FUNC_0(&VAR_6->adapter);
 FUNC_1(&VAR_6->adapter);

 VAR_7 = VAR_1 | VAR_2;
 if (VAR_6->status & VAR_4)
  VAR_7 |= VAR_3;
 FUNC_2(VAR_7, VAR_6->base + VAR_0);
}
