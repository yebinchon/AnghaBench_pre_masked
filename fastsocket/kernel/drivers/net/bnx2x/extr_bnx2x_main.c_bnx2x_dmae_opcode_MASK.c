
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int) ;

u32 FUNC_3(struct bnx2x *VAR_12, u8 VAR_13, u8 VAR_14,
        bool VAR_15, u8 VAR_16)
{
 u32 VAR_17 = 0;

 VAR_17 |= ((VAR_13 << VAR_10) |
     (VAR_14 << VAR_7));

 VAR_17 |= (VAR_6 | VAR_0);

 VAR_17 |= (FUNC_0(VAR_12) ? VAR_5 : VAR_4);
 VAR_17 |= ((FUNC_1(VAR_12) << VAR_1) |
     (FUNC_1(VAR_12) << VAR_8));
 VAR_17 |= (VAR_11 << VAR_9);




 VAR_17 |= VAR_3;

 if (VAR_15)
  VAR_17 = FUNC_2(VAR_17, VAR_16);
 return VAR_17;
}
