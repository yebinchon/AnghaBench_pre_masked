
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int host_flavor_t ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_0(bool VAR_22, host_flavor_t VAR_23, mach_msg_type_number_t* VAR_24, kern_return_t* VAR_25)
{
 switch (VAR_23) {

        case 128:
 if (!VAR_22){
  *VAR_25 = VAR_19;
  return -1;
 }
 if (*VAR_24 < VAR_9) {
  *VAR_25 = VAR_18;
  return -1;
 }
 if (*VAR_24 >= VAR_11) {
  return VAR_10;
 }
 return VAR_8;

 case 131:
 if (!VAR_22){
  *VAR_25 = VAR_19;
  return -1;
 }
 if (*VAR_24 < VAR_4) {
  *VAR_25 = VAR_18;
  return -1;
 }
 return VAR_5;

 case 130:
 if (*VAR_24 < VAR_6) {
  *VAR_25 = VAR_18;
  return -1;
 }
 return VAR_7;

 case 129:
 if (*VAR_24 < VAR_13) {
  *VAR_25 = VAR_18;
  return -1;
 }
 if (*VAR_24 >= VAR_17) {
  return VAR_16;
 }
 if (*VAR_24 >= VAR_15) {
  return VAR_14;
 }
 return VAR_12;

 case 133:
 if (*VAR_24 < VAR_0) {
  *VAR_25 = VAR_18;
  return -1;
 }
 return VAR_1;

 case 132:
 if (*VAR_24 < VAR_20){
  *VAR_25 = VAR_18;
  return -1;
 }
 if (*VAR_24 >= VAR_21){
  return VAR_3;
 }
 return VAR_2;

 default:
 *VAR_25 = VAR_19;
 return -1;

 }

}
