
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dib3000mc_state {int i2c_addr; struct dib3000mc_config* cfg; struct i2c_adapter* i2c_adap; } ;
struct dib3000mc_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dib3000mc_state*) ;
 int FUNC_1 (struct dib3000mc_state*,int ) ;
 int FUNC_2 (struct dib3000mc_state*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct dib3000mc_state*) ;
 struct dib3000mc_state* FUNC_5 (int,int ) ;

int FUNC_6(struct i2c_adapter *VAR_5, int VAR_6, u8 VAR_7, struct dib3000mc_config VAR_8[])
{
 struct dib3000mc_state *VAR_9;
 int VAR_10;
 u8 VAR_11;

 static u8 VAR_12[] = {20,22,24,26};

 VAR_9 = FUNC_5(sizeof(struct dib3000mc_state), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_9->i2c_adap = VAR_5;

 for (VAR_10 = VAR_6-1; VAR_10 >= 0; VAR_10--) {
  VAR_9->cfg = &VAR_8[VAR_10];


  VAR_11 = VAR_12[VAR_10];
  VAR_9->i2c_addr = VAR_11;
  if (FUNC_0(VAR_9) != 0) {
   VAR_9->i2c_addr = VAR_7;
   if (FUNC_0(VAR_9) != 0) {
    FUNC_3("-E-  DiB3000P/MC #%d: not identified\n", VAR_10);
    FUNC_4(VAR_9);
    return -VAR_0;
   }
  }

  FUNC_1(VAR_9, VAR_4);


  FUNC_2(VAR_9, 1024, (VAR_11 << 3) | 0x1);
  VAR_9->i2c_addr = VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9->cfg = &VAR_8[VAR_10];
  VAR_9->i2c_addr = VAR_12[VAR_10];

  FUNC_2(VAR_9, 1024, VAR_9->i2c_addr << 3);


  FUNC_1(VAR_9, VAR_3);
 }

 FUNC_4(VAR_9);
 return 0;
}
