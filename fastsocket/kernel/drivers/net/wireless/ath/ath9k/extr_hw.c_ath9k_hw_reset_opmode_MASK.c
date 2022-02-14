
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ack_6mb; } ;
struct ath_hw {int sta_id1_defaults; int opmode; TYPE_1__ config; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_7 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_8,
      u32 VAR_9, u32 VAR_10)
{
 struct ath_common *VAR_11 = FUNC_4(VAR_8);

 FUNC_0(VAR_8);

 FUNC_2(VAR_8, VAR_3, VAR_9
    | VAR_5
    | (VAR_8->config.ack_6mb ? VAR_4 : 0)
    | VAR_8->sta_id1_defaults,
    ~VAR_6);
 FUNC_7(VAR_11);
 FUNC_3(VAR_8, VAR_0, VAR_10);
 FUNC_6(VAR_8);
 FUNC_3(VAR_8, VAR_1, ~0);
 FUNC_3(VAR_8, VAR_2, VAR_7);

 FUNC_1(VAR_8);

 FUNC_5(VAR_8, VAR_8->opmode);
}
