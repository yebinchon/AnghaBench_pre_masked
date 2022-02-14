
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ar9170 {int cur_mc_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct ar9170 *VAR_2, const u64 VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_3 >> 32);
 FUNC_0(VAR_1, VAR_3);
 FUNC_2();
 VAR_4 = FUNC_3();
 if (VAR_4)
  return VAR_4;

 VAR_2->cur_mc_hash = VAR_3;
 return 0;
}
