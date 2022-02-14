
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;






 int VAR_12 ;

__attribute__((used)) static const char *FUNC_0(unsigned int VAR_13,
        const u8 *VAR_14, int VAR_15)
{
 switch (VAR_13) {
 case 134:
  break;
 case 135:
  return VAR_12 & VAR_5 ?
    "ReadDescriptor" : ((void*)0);
 case 136:
  return VAR_12 & VAR_2 ?
    "DirectSelectInfo.Type" : ((void*)0);
 case 137:
  return VAR_12 & VAR_1 ? "DirectSelectData" : ((void*)0);
 default:
  return "Unknown";
 }

 if (VAR_15 < 7 ||
     VAR_14[3] != VAR_9 ||
     VAR_14[4] != VAR_10 ||
     VAR_14[5] != VAR_11)
  return "Vendor/Unknown";

 switch (VAR_14[6]) {
 case 130:
  return VAR_12 & VAR_6 ?
    "RegisterRC" : ((void*)0);
 case 131:
  return VAR_12 & VAR_4 ? "LNBControl" : ((void*)0);
 case 129:
  return VAR_12 & VAR_7 ? "TuneQPSK" : ((void*)0);
 case 128:
  return VAR_12 & VAR_8 ? "TuneQPSK2" : ((void*)0);
 case 132:
  return VAR_12 & VAR_3 ? "Host2CA" : ((void*)0);
 case 133:
  return VAR_12 & VAR_0 ? "CA2Host" : ((void*)0);
 }
 return "Vendor/Unknown";
}
