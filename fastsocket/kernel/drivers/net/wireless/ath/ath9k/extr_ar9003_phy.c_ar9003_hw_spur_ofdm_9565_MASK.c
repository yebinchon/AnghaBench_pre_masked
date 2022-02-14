
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_9,
         int VAR_10)
{
 int VAR_11 = 0;

 VAR_11 = (VAR_10 << 4) / 5;
 if (VAR_11 < 0)
  VAR_11 = VAR_11 - 1;

 VAR_11 = VAR_11 & 0x7f;

 FUNC_0(VAR_9, VAR_3,
        VAR_5,
        VAR_11);


 FUNC_0(VAR_9, VAR_8,
        VAR_7,
        VAR_11);

 FUNC_0(VAR_9, VAR_0,
        VAR_2,
        VAR_11);
 FUNC_0(VAR_9, VAR_3,
        VAR_4, 0xe);
 FUNC_0(VAR_9, VAR_0,
        VAR_1, 0xe);


 FUNC_0(VAR_9, VAR_8,
        VAR_6, 0xa0);
}
