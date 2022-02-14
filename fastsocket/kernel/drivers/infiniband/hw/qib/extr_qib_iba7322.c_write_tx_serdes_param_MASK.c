
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct txdds_ent {int amp; int main; int post; int pre; } ;
struct qib_pportdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct qib_pportdata*,int ) ;
 int FUNC_4 (struct qib_pportdata*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct qib_pportdata *VAR_7,
      struct txdds_ent *VAR_8)
{
 u64 VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_1);

 VAR_9 &= ~(FUNC_1(VAR_0, VAR_3) |
      FUNC_1(VAR_0, VAR_4) |
      FUNC_1(VAR_0, VAR_6) |
      FUNC_1(VAR_0, VAR_5));

 VAR_9 |= FUNC_1(VAR_0,
      VAR_2);
 VAR_9 |= (VAR_8->amp & FUNC_2(VAR_0,
      VAR_3)) << FUNC_0(VAR_0,
           VAR_3);
 VAR_9 |= (VAR_8->main & FUNC_2(VAR_0,
       VAR_4)) << FUNC_0(VAR_0,
       VAR_4);
 VAR_9 |= (VAR_8->post & FUNC_2(VAR_0,
       VAR_6)) << FUNC_0(VAR_0,
        VAR_6);
 VAR_9 |= (VAR_8->pre & FUNC_2(VAR_0,
       VAR_5)) << FUNC_0(VAR_0,
        VAR_5);
 FUNC_4(VAR_7, VAR_1, VAR_9);
}
