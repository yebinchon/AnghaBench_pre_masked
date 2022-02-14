
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath5k_hw {scalar_t__ ah_imr; scalar_t__ ah_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct ath5k_hw*,scalar_t__) ;

int
FUNC_5(struct ath5k_hw *VAR_8, bool VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12 = -VAR_7;




 VAR_11 = FUNC_4(VAR_8, VAR_8->ah_imr & ~VAR_1);

 VAR_10 = FUNC_0(FUNC_2(VAR_8, VAR_5),
   VAR_6);

 if (!VAR_9) {
  if (--VAR_10 < VAR_4)
   goto done;
 } else
  VAR_10 +=
   ((VAR_3 - VAR_10) / 2);




 if (VAR_8->ah_version == VAR_0)
  FUNC_3(VAR_8, VAR_10, VAR_2);
 else
  FUNC_1(VAR_8, VAR_5,
    VAR_6, VAR_10);

 VAR_12 = 0;

done:



 FUNC_4(VAR_8, VAR_11);

 return VAR_12;
}
