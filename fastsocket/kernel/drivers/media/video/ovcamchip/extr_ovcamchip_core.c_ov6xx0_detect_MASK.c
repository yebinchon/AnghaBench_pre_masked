
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip {scalar_t__ subtype; int * sops; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct ovcamchip* FUNC_3 (struct i2c_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct i2c_client*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct ovcamchip *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;
 unsigned char VAR_8;

 FUNC_0(4, "");


 VAR_7 = FUNC_4(VAR_5, VAR_2, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_1("Error detecting ov6xx0 type");
  return -1;
 }

 if ((VAR_8 & 3) == 0) {
  VAR_6->subtype = VAR_1;
  FUNC_2("Camera chip is an OV6630");
 } else if ((VAR_8 & 3) == 1) {
  VAR_6->subtype = VAR_0;
  FUNC_2("Camera chip is an OV6620");
 } else if ((VAR_8 & 3) == 2) {
  VAR_6->subtype = VAR_1;
  FUNC_2("Camera chip is an OV6630AE");
 } else if ((VAR_8 & 3) == 3) {
  VAR_6->subtype = VAR_1;
  FUNC_2("Camera chip is an OV6630AF");
 }

 if (VAR_6->subtype == VAR_0)
  VAR_6->sops = &VAR_3;
 else
  VAR_6->sops = &VAR_4;

 return 0;
}
