
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ ptp_adjust; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_1)
{
 if (!FUNC_2(VAR_1, VAR_0))
  return;

 FUNC_3(VAR_1, FUNC_1(FUNC_0()) + VAR_1->ptp_adjust);
 VAR_1->ptp_adjust = 0;
}
