
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_5 (struct bnx2x*,int,int*,int) ;

void FUNC_6(struct bnx2x *VAR_6,
     bool VAR_7, unsigned char *VAR_8, int VAR_9)
{
 u32 VAR_10[2];
 u32 VAR_11 = FUNC_0(VAR_6) ? VAR_4 :
    VAR_2;

 if (!FUNC_3(VAR_6) && !FUNC_2(VAR_6))
  return;

 if (VAR_9 > VAR_0)
  return;

 FUNC_1(VAR_1, "Going to %s LLH configuration at entry %d\n",
    (VAR_7 ? "ADD" : "DELETE"), VAR_9);

 if (VAR_7) {

  VAR_11 += 8*VAR_9;

  VAR_10[0] = ((VAR_8[2] << 24) | (VAR_8[3] << 16) |
         (VAR_8[4] << 8) | VAR_8[5]);
  VAR_10[1] = ((VAR_8[0] << 8) | VAR_8[1]);

  FUNC_5(VAR_6, VAR_11, VAR_10, 2);
 }

 FUNC_4(VAR_6, (FUNC_0(VAR_6) ? VAR_5 :
      VAR_3) + 4*VAR_9, VAR_7);
}
