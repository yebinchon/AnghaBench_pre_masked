
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_timing {unsigned int cyc8b; unsigned int setup; unsigned int act8b; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 struct clk* FUNC_3 (int *,char*) ;
 unsigned int FUNC_4 (struct clk*) ;
 int FUNC_5 (char*,unsigned int,...) ;
 int FUNC_6 (int const,unsigned int,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_7(const u8 VAR_0, const u8 VAR_1,
     const struct ide_timing *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;
 struct clk *VAR_13;




 VAR_4 = VAR_2->cyc8b;
 VAR_5 = VAR_2->setup;
 VAR_6 = VAR_2->act8b;
 VAR_7 = (VAR_1 < 5) ? 30 : 20;

 FUNC_5("t0=%u t1=%u t2=%u t6z=%u\n", VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_13 = FUNC_3(((void*)0), "mck");
 FUNC_0(FUNC_1(VAR_13));
 VAR_12 = FUNC_4(VAR_13);
 FUNC_5("mck_hz=%u\n", VAR_12);

 VAR_8 = FUNC_2(VAR_4, VAR_12);
 VAR_9 = FUNC_2(VAR_5, VAR_12);
 VAR_10 = FUNC_2(VAR_6, VAR_12);
 VAR_11 = FUNC_2(VAR_7, VAR_12);

 FUNC_5("cycle=%u setup=%u pulse=%u data_float=%u\n",
      VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_6(VAR_0, VAR_8, VAR_9, VAR_10, VAR_11, VAR_3);
}
