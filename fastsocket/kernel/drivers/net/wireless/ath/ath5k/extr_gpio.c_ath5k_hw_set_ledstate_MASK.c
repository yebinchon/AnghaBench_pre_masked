
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;

void
FUNC_2(struct ath5k_hw *VAR_10, unsigned int VAR_11)
{
 u32 VAR_12;

 u32 VAR_13;


 if (VAR_10->ah_version != VAR_0)
  FUNC_0(VAR_10, VAR_1,
   VAR_3 | VAR_2);
 else
  FUNC_0(VAR_10, VAR_1, VAR_2);




 switch (VAR_11) {
 case 128:
 case 131:
  VAR_12 = VAR_5 | VAR_9;
  VAR_13 = VAR_9 | VAR_7;
  break;

 case 130:
  VAR_12 = VAR_5 | VAR_8;
  VAR_13 = VAR_9;
  break;

 case 132:
 case 129:
  VAR_12 = VAR_5 | VAR_6;
  VAR_13 = VAR_6;
  break;

 default:
  VAR_12 = VAR_4 | VAR_8;
  VAR_13 = VAR_9;
  break;
 }


 if (VAR_10->ah_version != VAR_0)
  FUNC_1(VAR_10, VAR_1, VAR_12);
 else
  FUNC_1(VAR_10, VAR_1, VAR_13);
}
