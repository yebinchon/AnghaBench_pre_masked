
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
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

__attribute__((used)) static u32
FUNC_1(struct il_priv *VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;

 if ((VAR_13 & VAR_11) ==
     VAR_11)
  VAR_14 |=
      (VAR_11 |
       VAR_7);

 VAR_14 |= (VAR_13 & VAR_9);


 if ((VAR_13 & VAR_9) ==
     VAR_10)
  return VAR_14;


 if ((VAR_13 & VAR_9) ==
     VAR_8)
  return VAR_14;


 if ((VAR_13 & VAR_0) !=
     VAR_0)
  return VAR_14;

 switch (VAR_13 & VAR_9) {

 case 129:

  if (!(VAR_13 & VAR_2))

   VAR_14 |= VAR_4;
  else
   VAR_14 |= VAR_6;

  break;

 case 128:
  if (!(VAR_13 & VAR_3)) {

   VAR_14 |= VAR_5;
   break;
  }

 default:
  if (!(VAR_13 & VAR_1))
   VAR_14 |= VAR_4;
  else
   VAR_14 |= VAR_6;
  break;
 }

 FUNC_0("decrypt_in:0x%x  decrypt_out = 0x%x\n", VAR_13, VAR_14);

 return VAR_14;
}
