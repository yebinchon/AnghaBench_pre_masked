
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx_status {int frame_status; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;

u8 FUNC_2(const void *VAR_5, const struct rx_status *VAR_6)
{
 u8 VAR_7;
 if (VAR_6->frame_status & VAR_4) {
  VAR_7 = FUNC_1(VAR_5);
 } else {
  switch (FUNC_0(VAR_5)) {
  case 130:
   VAR_7 = VAR_1;
   break;
  case 129:
   VAR_7 = VAR_2;
   break;
  case 128:
   VAR_7 = VAR_3;
   break;
  case 131:
   VAR_7 = VAR_0;
   break;
  default:
   VAR_7 = 0;
  }
 }

 return VAR_7;
}
