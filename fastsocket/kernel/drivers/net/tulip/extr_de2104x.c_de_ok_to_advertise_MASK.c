
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int media_advertise; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






__attribute__((used)) static unsigned int FUNC_0 (struct de_private *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 129:
  if (!(VAR_5->media_advertise & VAR_3))
   return 0;
  if (!(VAR_5->media_advertise & (VAR_1 | VAR_0)))
   return 0;
  break;
 case 131:
  if (!(VAR_5->media_advertise & VAR_4))
   return 0;
  break;
 case 132:
  if (!(VAR_5->media_advertise & VAR_2))
   return 0;
  break;
 case 130:
  if (!(VAR_5->media_advertise & VAR_1))
   return 0;
  break;
 case 128:
  if (!(VAR_5->media_advertise & VAR_0))
   return 0;
  break;
 }

 return 1;
}
