
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int tvnorm; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct cx25821_dev*) ;
 int FUNC_3 (struct cx25821_dev*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct cx25821_dev *VAR_5)
{
 int VAR_6 = VAR_2;
 u32 VAR_7 = 0, VAR_8 = 0;

 if (VAR_5->tvnorm & VAR_3 || VAR_5->tvnorm & VAR_4) {
  VAR_6 = FUNC_3(VAR_5);
 } else {
  VAR_6 = FUNC_2(VAR_5);
 }


 VAR_7 = FUNC_0(&VAR_5->i2c_bus[0], VAR_0, &VAR_8);
 VAR_7 = FUNC_4(VAR_7, 4);
 VAR_6 = FUNC_1(&VAR_5->i2c_bus[0], VAR_0, VAR_7);


 VAR_7 = FUNC_0(&VAR_5->i2c_bus[0], VAR_1, &VAR_8);
 VAR_7 = FUNC_4(VAR_7, 4);
 VAR_6 = FUNC_1(&VAR_5->i2c_bus[0], VAR_1, VAR_7);

 return VAR_6;
}
