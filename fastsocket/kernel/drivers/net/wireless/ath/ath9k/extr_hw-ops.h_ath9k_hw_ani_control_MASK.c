
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
typedef enum ath9k_ani_cmd { ____Placeholder_ath9k_ani_cmd } ath9k_ani_cmd ;
struct TYPE_2__ {int (* ani_control ) (struct ath_hw*,int,int) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,int) ;

__attribute__((used)) static inline bool FUNC_2(struct ath_hw *VAR_0,
     enum ath9k_ani_cmd VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0)->ani_control(VAR_0, VAR_1, VAR_2);
}
