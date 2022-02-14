
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ath_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int * antCtrlChain; } ;


 TYPE_1__* FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct ath_hw *VAR_0, int VAR_1,
     bool VAR_2)
{
 __le16 VAR_3 = FUNC_0(VAR_0, VAR_2)->antCtrlChain[VAR_1];
 return FUNC_1(VAR_3);
}
