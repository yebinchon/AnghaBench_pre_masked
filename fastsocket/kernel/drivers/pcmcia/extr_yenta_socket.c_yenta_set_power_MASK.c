
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct yenta_socket {int flags; } ;
struct TYPE_3__ {int Vcc; int Vpp; } ;
typedef TYPE_1__ socket_state_t ;


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
 int FUNC_0 (struct yenta_socket*,int ) ;
 int FUNC_1 (struct yenta_socket*,int ,int) ;
 int FUNC_2 (struct yenta_socket*,int ) ;
 int FUNC_3 (struct yenta_socket*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct yenta_socket *VAR_20, socket_state_t *VAR_21)
{

 if (!(FUNC_0(VAR_20, VAR_7) & VAR_0) &&
     (VAR_20->flags & VAR_19)) {
  u8 VAR_22, VAR_23;
  VAR_22 = VAR_23 = FUNC_2(VAR_20, VAR_8);
  VAR_22 &= ~(VAR_11 | VAR_14 | VAR_17);


  if (VAR_20->flags & VAR_18) {
   switch (VAR_21->Vcc) {
   case 33: VAR_22 |= VAR_9; break;
   case 50: VAR_22 |= VAR_10; break;
   default: VAR_22 = 0; break;
   }
   switch (VAR_21->Vpp) {
   case 33:
   case 50: VAR_22 |= VAR_13; break;
   case 120: VAR_22 |= VAR_12; break;
   }
  } else {

   switch (VAR_21->Vcc) {
   case 50: VAR_22 |= VAR_10; break;
   default: VAR_22 = 0; break;
   }
   switch (VAR_21->Vpp) {
   case 50: VAR_22 |= VAR_13 | VAR_16; break;
   case 120: VAR_22 |= VAR_12 | VAR_15; break;
   }
  }

  if (VAR_22 != VAR_23)
   FUNC_3(VAR_20, VAR_8, VAR_22);
 } else {
  u32 VAR_24 = 0;
  switch (VAR_21->Vcc) {
  case 33: VAR_24 = VAR_1; break;
  case 50: VAR_24 = VAR_2; break;
  default: VAR_24 = 0; break;
  }
  switch (VAR_21->Vpp) {
  case 33: VAR_24 |= VAR_4; break;
  case 50: VAR_24 |= VAR_5; break;
  case 120: VAR_24 |= VAR_3; break;
  }
  if (VAR_24 != FUNC_0(VAR_20, VAR_6))
   FUNC_1(VAR_20, VAR_6, VAR_24);
 }
}
