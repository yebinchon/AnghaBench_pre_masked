
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct link_params {scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct link_params *VAR_11,
        u32 VAR_12[2],
        u32 VAR_13[2])
{

 struct bnx2x *VAR_14 = VAR_11->bp;
 u32 VAR_15 = VAR_11->port ? VAR_9 : VAR_8;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;

 FUNC_0(VAR_10, "pfc statistic read from EMAC\n");


 VAR_17 = FUNC_1(VAR_14, VAR_15 +
    VAR_0);
 VAR_17 &= VAR_1;
 VAR_16 = FUNC_1(VAR_14, VAR_15 + VAR_4);
 VAR_16 &= VAR_5;

 VAR_13[0] = VAR_16 + VAR_17;


 VAR_17 = FUNC_1(VAR_14, VAR_15 +
    VAR_2);
 VAR_17 &= VAR_3;
 VAR_16 = FUNC_1(VAR_14, VAR_15 + VAR_6);
 VAR_16 &= VAR_7;

 VAR_12[0] = VAR_16 + VAR_17;
}
