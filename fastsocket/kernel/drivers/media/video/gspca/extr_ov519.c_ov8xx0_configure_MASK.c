
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sd*,int ) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, "starting ov8xx0 configuration");


 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0, "Error detecting sensor type");
  return;
 }
 if ((VAR_5 & 3) == 1)
  VAR_4->sensor = VAR_3;
 else
  FUNC_1("Unknown image sensor version: %d", VAR_5 & 3);
}
