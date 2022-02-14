
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_sgi_data {int xfer_timeout; int (* getctrl ) (int ) ;int data; int (* setctrl ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct i2c_algo_sgi_data *VAR_5)
{
 int VAR_6;

 VAR_5->setctrl(VAR_5->data, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_5->xfer_timeout; VAR_6++) {
  if ((VAR_5->getctrl(VAR_5->data) & VAR_4) == 0)
   goto out;
  FUNC_3(1);
 }
 return -VAR_1;
out:
 if (VAR_5->getctrl(VAR_5->data) & VAR_2)
  return -VAR_0;
 return 0;
}
