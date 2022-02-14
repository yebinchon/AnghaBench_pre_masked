
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status; int duplex; int speed; } ;
union cvmx_gmxx_rxx_rx_inbnd {TYPE_1__ s; int u64; } ;
struct TYPE_8__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_9__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;
struct TYPE_10__ {int board_type; } ;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 TYPE_3__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 () ;

cvmx_helper_link_info_t FUNC_9(int VAR_3)
{
 cvmx_helper_link_info_t VAR_4;
 int VAR_5;
 int VAR_6 = 0;


 if (&FUNC_6)
  return FUNC_6(VAR_3);


 VAR_4.u64 = 0;





 switch (FUNC_8()->board_type) {
 case 128:

  VAR_4.s.link_up = 1;
  VAR_4.s.full_duplex = 1;
  VAR_4.s.speed = 1000;
  return VAR_4;
 case 129:
 case 132:
 case 133:
 case 131:

  if (VAR_3 == 1) {
   VAR_4.s.link_up = 1;
   VAR_4.s.full_duplex = 1;
   VAR_4.s.speed = 1000;
   return VAR_4;
  }

  break;
 case 130:

  if (VAR_3 == 1) {
   VAR_4.s.link_up = 1;
   VAR_4.s.full_duplex = 1;
   VAR_4.s.speed = 1000;
   return VAR_4;
  } else
   VAR_6 = 1;
  break;
 case 134:

  if (VAR_3 == 2) {

   VAR_4.u64 = 0;
   return VAR_4;
  } else {

   VAR_4.s.link_up = 1;
   VAR_4.s.full_duplex = 1;
   VAR_4.s.speed = 1000;
   return VAR_4;
  }
  break;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != -1) {
  if (VAR_6) {





   int VAR_7 =
       FUNC_5(VAR_5 >> 8, VAR_5 & 0xff,
        0x19);
   switch ((VAR_7 >> 8) & 0x7) {
   case 0:
    VAR_4.u64 = 0;
    break;
   case 1:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 0;
    VAR_4.s.speed = 10;
    break;
   case 2:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 1;
    VAR_4.s.speed = 10;
    break;
   case 3:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 0;
    VAR_4.s.speed = 100;
    break;
   case 4:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 1;
    VAR_4.s.speed = 100;
    break;
   case 5:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 1;
    VAR_4.s.speed = 100;
    break;
   case 6:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 0;
    VAR_4.s.speed = 1000;
    break;
   case 7:
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = 1;
    VAR_4.s.speed = 1000;
    break;
   }
  } else {
   int VAR_8 =
       FUNC_5(VAR_5 >> 8, VAR_5 & 0xff, 17);







   if ((VAR_8 & (1 << 11)) == 0) {
    int VAR_9 =
        FUNC_5(VAR_5 >> 8,
         VAR_5 & 0xff, 0);
    if ((VAR_9 & (1 << 12)) == 0)
     VAR_8 |= 1 << 11;
   }






   if (VAR_8 & (1 << 11)) {
    VAR_4.s.link_up = 1;
    VAR_4.s.full_duplex = ((VAR_8 >> 13) & 1);
    switch ((VAR_8 >> 14) & 3) {
    case 0:
     VAR_4.s.speed = 10;
     break;
    case 1:
     VAR_4.s.speed = 100;
     break;
    case 2:
     VAR_4.s.speed = 1000;
     break;
    case 3:
     VAR_4.u64 = 0;
     break;
    }
   }
  }
 } else if (FUNC_1(VAR_0)
     || FUNC_1(VAR_2)
     || FUNC_1(VAR_1)) {







  union cvmx_gmxx_rxx_rx_inbnd VAR_10;
  int VAR_11 = FUNC_4(VAR_3);
  int VAR_12 = FUNC_3(VAR_3);
  VAR_10.u64 =
      FUNC_7(FUNC_0(VAR_12, VAR_11));

  VAR_4.s.link_up = VAR_10.s.status;
  VAR_4.s.full_duplex = VAR_10.s.duplex;
  switch (VAR_10.s.speed) {
  case 0:
   VAR_4.s.speed = 10;
   break;
  case 1:
   VAR_4.s.speed = 100;
   break;
  case 2:
   VAR_4.s.speed = 1000;
   break;
  case 3:
   VAR_4.u64 = 0;
   break;
  }
 } else {






  VAR_4.u64 = 0;
 }


 if (!VAR_4.s.link_up)
  VAR_4.u64 = 0;

 return VAR_4;
}
