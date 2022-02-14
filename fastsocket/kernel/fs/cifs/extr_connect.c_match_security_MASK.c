
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int secFlg; } ;
struct TCP_Server_Info {int secType; int sec_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;

__attribute__((used)) static bool
FUNC_0(struct TCP_Server_Info *VAR_12, struct smb_vol *VAR_13)
{
 unsigned int VAR_14;

 if (VAR_13->secFlg & (~(VAR_8 | VAR_7)))
  VAR_14 = VAR_13->secFlg;
 else
  VAR_14 = VAR_11 | VAR_13->secFlg;

 switch (VAR_12->secType) {
 case 131:
  if (!(VAR_14 & (VAR_1|VAR_5)))
   return 0;
  break;
 case 129:
  if (!(VAR_14 & VAR_4))
   return 0;
  break;
 case 130:
  if (!(VAR_14 & VAR_2))
   return 0;
  break;
 case 132:
  if (!(VAR_14 & VAR_0))
   return 0;
  break;
 case 128:
  if (!(VAR_14 & VAR_3))
   return 0;
  break;
 default:

  return 0;
 }


 if ((VAR_14 & VAR_6) == 0 &&
     (VAR_12->sec_mode & VAR_10))
   return 0;
 else if (((VAR_14 & VAR_8) == VAR_8) &&
   (VAR_12->sec_mode &
    (VAR_9|VAR_10)) == 0)
   return 0;

 return 1;
}
