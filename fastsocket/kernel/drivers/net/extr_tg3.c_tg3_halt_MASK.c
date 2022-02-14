
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_hw_stats {int dummy; } ;
struct tg3 {scalar_t__ hw_stats; int estats_prev; } ;


 int FUNC_0 (struct tg3*,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct tg3*,int) ;
 int FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*,int *) ;
 int FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*,int) ;
 int FUNC_8 (struct tg3*,int) ;
 int FUNC_9 (struct tg3*,int) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_6(VAR_0);

 FUNC_9(VAR_0, VAR_1);

 FUNC_2(VAR_0, VAR_2);
 VAR_3 = FUNC_3(VAR_0);

 FUNC_0(VAR_0, 0);

 FUNC_7(VAR_0, VAR_1);
 FUNC_8(VAR_0, VAR_1);

 if (VAR_0->hw_stats) {

  FUNC_5(VAR_0);
  FUNC_4(VAR_0, &VAR_0->estats_prev);


  FUNC_1(VAR_0->hw_stats, 0, sizeof(struct tg3_hw_stats));
 }

 if (VAR_3)
  return VAR_3;

 return 0;
}
