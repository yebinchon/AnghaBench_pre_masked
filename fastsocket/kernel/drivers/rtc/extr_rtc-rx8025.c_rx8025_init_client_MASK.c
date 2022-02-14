
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx8025_data {int ctrl1; int client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 struct rx8025_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9, int *VAR_10)
{
 struct rx8025_data *VAR_11 = FUNC_1(VAR_9);
 u8 VAR_12[2], VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_11->client, VAR_7, 2, VAR_12);
 if (VAR_15)
  goto out;


 VAR_11->ctrl1 = VAR_12[0] & ~VAR_0;

 if (VAR_12[1] & VAR_3) {
  FUNC_0(&VAR_9->dev, "power-on reset was detected, "
    "you may have to readjust the clock\n");
  *VAR_10 = 1;
 }

 if (VAR_12[1] & VAR_4) {
  FUNC_0(&VAR_9->dev, "a power voltage drop was detected, "
    "you may have to readjust the clock\n");
  *VAR_10 = 1;
 }

 if (!(VAR_12[1] & VAR_6)) {
  FUNC_0(&VAR_9->dev, "Oscillation stop was detected,"
    "you may have to readjust the clock\n");
  *VAR_10 = 1;
 }

 if (VAR_12[1] & (VAR_2 | VAR_5)) {
  FUNC_0(&VAR_9->dev, "Alarm was detected\n");
  VAR_14 = 1;
 }

 if (!(VAR_12[1] & VAR_1))
  VAR_14 = 1;

 if (*VAR_10 || VAR_14) {
  VAR_13 = VAR_12[0];
  VAR_13 &= ~(VAR_3 | VAR_4 |
      VAR_1 | VAR_5 |
      VAR_2);
  VAR_13 |= VAR_6;

  VAR_15 = FUNC_3(VAR_9, VAR_8, VAR_13);
 }
out:
 return VAR_15;
}
