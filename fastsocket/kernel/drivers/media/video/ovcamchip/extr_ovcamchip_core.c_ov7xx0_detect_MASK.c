
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip {scalar_t__ subtype; int * sops; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 struct ovcamchip* FUNC_3 (struct i2c_client*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct i2c_client*,int,unsigned char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8)
{
 struct ovcamchip *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;
 unsigned char VAR_11;

 FUNC_0(4, "");


 VAR_10 = FUNC_4(VAR_8, VAR_4, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_1("Error detecting ov7xx0 type");
  return VAR_10;
 }

 if ((VAR_11 & 3) == 3) {
  FUNC_2("Camera chip is an OV7610");
  VAR_9->subtype = VAR_0;
 } else if ((VAR_11 & 3) == 1) {
  VAR_10 = FUNC_4(VAR_8, 0x15, &VAR_11);
  if (VAR_10 < 0) {
   FUNC_1("Error detecting ov7xx0 type");
   return VAR_10;
  }

  if (VAR_11 & 1) {
   FUNC_2("Camera chip is an OV7620AE");



   VAR_9->subtype = VAR_1;
  } else {
   FUNC_2("Camera chip is an OV76BE");
   VAR_9->subtype = VAR_2;
  }
 } else if ((VAR_11 & 3) == 0) {
  FUNC_2("Camera chip is an OV7620");
  VAR_9->subtype = VAR_1;
 } else {
  FUNC_1("Unknown camera chip version: %d", VAR_11 & 3);
  return -VAR_3;
 }

 if (VAR_9->subtype == VAR_2)
  VAR_9->sops = &VAR_5;
 else if (VAR_9->subtype == VAR_1)
  VAR_9->sops = &VAR_7;
 else
  VAR_9->sops = &VAR_6;

 return 0;
}
