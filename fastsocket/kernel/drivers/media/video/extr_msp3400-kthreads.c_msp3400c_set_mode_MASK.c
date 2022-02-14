
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int route_in; int mode; scalar_t__ has_nicam; int rxsubchans; } ;
struct msp3400c_init_data_dem {int ad_cv; int* fir1; int* fir2; int mode_reg; int dsp_matrix; int dsp_src; int cdo2; int cdo1; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 struct msp3400c_init_data_dem* VAR_1 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,struct i2c_client*,char*,int) ;

void FUNC_7(struct i2c_client *VAR_3, int VAR_4)
{
 struct msp_state *VAR_5 = FUNC_5(FUNC_0(VAR_3));
 struct msp3400c_init_data_dem *VAR_6 = &VAR_1[VAR_4];
 int VAR_7 = (VAR_5->route_in >> 3) & 1;
 int VAR_8;

 FUNC_6(1, VAR_2, VAR_3, "set_mode: %d\n", VAR_4);
 VAR_5->mode = VAR_4;
 VAR_5->rxsubchans = VAR_0;

 FUNC_3(VAR_3, 0x00bb, VAR_6->ad_cv | (VAR_7 ? 0x100 : 0));

 for (VAR_8 = 5; VAR_8 >= 0; VAR_8--)
  FUNC_3(VAR_3, 0x0001, VAR_6->fir1[VAR_8]);

 FUNC_3(VAR_3, 0x0005, 0x0004);
 FUNC_3(VAR_3, 0x0005, 0x0040);
 FUNC_3(VAR_3, 0x0005, 0x0000);
 for (VAR_8 = 5; VAR_8 >= 0; VAR_8--)
  FUNC_3(VAR_3, 0x0005, VAR_6->fir2[VAR_8]);

 FUNC_3(VAR_3, 0x0083, VAR_6->mode_reg);

 FUNC_1(VAR_3, VAR_6->cdo1, VAR_6->cdo2);

 FUNC_2(VAR_3, VAR_6->dsp_src);



 FUNC_4(VAR_3, 0x000d, 0x1900);
 FUNC_4(VAR_3, 0x000e, VAR_6->dsp_matrix);
 if (VAR_5->has_nicam)
  FUNC_4(VAR_3, 0x0010, 0x5a00);
}
