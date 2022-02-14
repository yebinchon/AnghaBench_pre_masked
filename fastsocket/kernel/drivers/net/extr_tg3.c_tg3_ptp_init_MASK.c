
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int ptp_info; scalar_t__ ptp_adjust; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tg3*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct tg3*,int ) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_2)
{
 if (!FUNC_2(VAR_2, VAR_0))
  return;


 FUNC_3(VAR_2, FUNC_1(FUNC_0()));
 VAR_2->ptp_adjust = 0;
 VAR_2->ptp_info = VAR_1;
}
