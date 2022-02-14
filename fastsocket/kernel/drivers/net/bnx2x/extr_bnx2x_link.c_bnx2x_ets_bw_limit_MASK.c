
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int FUNC_2 (struct link_params const*) ;

void FUNC_3(const struct link_params *VAR_6, const u32 VAR_7,
   const u32 VAR_8)
{

 struct bnx2x *VAR_9 = VAR_6->bp;
 const u32 VAR_10 = VAR_7 + VAR_8;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;

 FUNC_0(VAR_1, "ETS enabled BW limit configuration\n");

 if ((!VAR_10) ||
     (!VAR_7) ||
     (!VAR_8)) {
  FUNC_0(VAR_1, "Total BW can't be zero\n");
  return;
 }

 VAR_11 = (VAR_7 * VAR_0)/
  VAR_10;
 VAR_12 = (VAR_8 * VAR_0)/
  VAR_10;

 FUNC_2(VAR_6);

 FUNC_1(VAR_9, VAR_2, VAR_11);
 FUNC_1(VAR_9, VAR_3, VAR_12);

 FUNC_1(VAR_9, VAR_4, VAR_11);
 FUNC_1(VAR_9, VAR_5, VAR_12);
}
