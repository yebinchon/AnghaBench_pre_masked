
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sif; void* sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sd*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_6)
{
 int VAR_7;
 FUNC_0(VAR_1, "starting OV6xx0 configuration");


 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(VAR_0, "Error detecting sensor type");
  return;
 }




 switch (VAR_7) {
 case 0x00:
  VAR_6->sensor = VAR_4;
  FUNC_3("WARNING: Sensor is an OV66308. Your camera may have");
  FUNC_3("been misdetected in previous driver versions.");
  break;
 case 0x01:
  VAR_6->sensor = VAR_3;
  FUNC_0(VAR_1, "Sensor is an OV6620");
  break;
 case 0x02:
  VAR_6->sensor = VAR_4;
  FUNC_0(VAR_1, "Sensor is an OV66308AE");
  break;
 case 0x03:
  VAR_6->sensor = VAR_5;
  FUNC_0(VAR_1, "Sensor is an OV66308AF");
  break;
 case 0x90:
  VAR_6->sensor = VAR_4;
  FUNC_3("WARNING: Sensor is an OV66307. Your camera may have");
  FUNC_3("been misdetected in previous driver versions.");
  break;
 default:
  FUNC_1("FATAL: Unknown sensor version: 0x%02x", VAR_7);
  return;
 }


 VAR_6->sif = 1;
}
