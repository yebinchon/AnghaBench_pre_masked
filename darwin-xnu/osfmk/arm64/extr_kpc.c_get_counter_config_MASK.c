
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int kpc_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint64_t
FUNC_6(uint32_t VAR_7)
{
 uint64_t VAR_8;

 switch (VAR_7) {
  case 2:
  case 3:
  case 4:
  case 5:
   VAR_8 = FUNC_4(FUNC_5(VAR_5), VAR_7, 2);
   break;
  case 6:
  case 7:





   VAR_8 = FUNC_4(FUNC_5(VAR_6), VAR_7, 6);
   break;
  default:
   VAR_8 = 0;
   break;
 }

 kpc_config_t VAR_9 = VAR_8;

 uint64_t VAR_10 = FUNC_5(VAR_4);

 if (VAR_10 & FUNC_0(VAR_7)) {
  VAR_9 |= VAR_0;
 }
 if (VAR_10 & FUNC_1(VAR_7)) {
  VAR_9 |= VAR_1;
 }
 if (VAR_10 & FUNC_2(VAR_7)) {
  VAR_9 |= VAR_2;



 }

 if (VAR_10 & FUNC_3(VAR_7)) {
  VAR_9 |= VAR_3;
 }


 return VAR_9;
}
