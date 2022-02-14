
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iucv_tx_notify { ____Placeholder_iucv_tx_notify } iucv_tx_notify ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline enum iucv_tx_notify FUNC_0(int VAR_6,
 int VAR_7) {
 enum iucv_tx_notify VAR_8;

 switch (VAR_6) {
 case 0:
  VAR_8 = VAR_7 ? VAR_1 : VAR_4;
  break;
 case 4:
 case 16:
 case 17:
 case 18:
  VAR_8 = VAR_7 ? VAR_2 :
   VAR_5;
  break;
 default:
  VAR_8 = VAR_7 ? VAR_0 :
   VAR_3;
  break;
 }

 return VAR_8;
}
