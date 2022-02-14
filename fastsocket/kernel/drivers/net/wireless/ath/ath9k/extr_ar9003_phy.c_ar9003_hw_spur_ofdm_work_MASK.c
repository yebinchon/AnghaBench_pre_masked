
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2,
         struct ath9k_channel *VAR_3,
         int VAR_4,
         int VAR_5,
         int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (FUNC_0(VAR_3)) {
  if (VAR_4 < 0) {
   if (FUNC_1(VAR_2, VAR_1,
        VAR_0) == 0x0)
    VAR_8 = 1;
   else
    VAR_8 = 0;

   VAR_7 = ((VAR_4 + 10) << 9) / 11;

  } else {
   if (FUNC_1(VAR_2, VAR_1,
       VAR_0) == 0x0)
    VAR_8 = 0;
   else
    VAR_8 = 1;

   VAR_7 = ((VAR_4 - 10) << 9) / 11;

  }

  VAR_9 = (VAR_4 << 17) / 5;

 } else {
  VAR_8 = 0;
  VAR_7 = (VAR_4 << 9) /11;
  VAR_9 = (VAR_4 << 18) / 5;
 }

 VAR_7 = VAR_7 & 0x3ff;
 VAR_9 = VAR_9 & 0xfffff;

 FUNC_2(VAR_2,
       VAR_4,
       VAR_7,
       VAR_9,
       VAR_8,
       VAR_5, VAR_6);
}
