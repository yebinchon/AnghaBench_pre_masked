
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {int ah_imr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ath5k_hw*,int ,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*,int,int ) ;

void
FUNC_5(struct ath5k_hw *VAR_6, unsigned int VAR_7,
  u32 VAR_8)
{
 u32 VAR_9;

 if (VAR_7 >= VAR_4)
  return;




 VAR_9 = (FUNC_3(VAR_6, VAR_0) &
  ~(FUNC_0(VAR_7) | VAR_2 |
  VAR_1 | FUNC_1(VAR_7))) |
  (FUNC_0(VAR_7) | VAR_1);

 FUNC_4(VAR_6, VAR_8 ? VAR_9 :
  (VAR_9 | VAR_2), VAR_0);

 VAR_6->ah_imr |= VAR_3;


 FUNC_2(VAR_6, VAR_5, VAR_3);
}
