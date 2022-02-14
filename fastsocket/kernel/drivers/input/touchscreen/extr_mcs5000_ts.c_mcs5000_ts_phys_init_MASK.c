
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs5000_ts_platform_data {int x_size; int y_size; } ;
struct mcs5000_ts_data {struct i2c_client* client; struct mcs5000_ts_platform_data* platform_data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mcs5000_ts_data *VAR_9)
{
 const struct mcs5000_ts_platform_data *VAR_10 =
  VAR_9->platform_data;
 struct i2c_client *VAR_11 = VAR_9->client;


 FUNC_0(VAR_11, VAR_0,
   VAR_8 | VAR_6);


 FUNC_0(VAR_11, VAR_2,
   VAR_10->x_size >> 8);
 FUNC_0(VAR_11, VAR_1,
   VAR_10->x_size & 0xff);
 FUNC_0(VAR_11, VAR_4,
   VAR_10->y_size >> 8);
 FUNC_0(VAR_11, VAR_3,
   VAR_10->y_size & 0xff);


 FUNC_0(VAR_9->client, VAR_0,
   VAR_5 | VAR_7);
}
