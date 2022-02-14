
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u16 FUNC_1(struct bnx2x *VAR_4, u32 VAR_5)
{
 u16 VAR_6 = (VAR_5 & VAR_1) >>
         VAR_2;
 if (!VAR_6) {
  FUNC_0(VAR_3 | VAR_0,
     "Max BW configured to 0 - using 100 instead\n");
  VAR_6 = 100;
 }
 return VAR_6;
}
