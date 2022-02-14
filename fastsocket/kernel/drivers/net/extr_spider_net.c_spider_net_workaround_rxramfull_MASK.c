
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct spider_net_card*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct spider_net_card *VAR_8)
{
 int VAR_9, VAR_10 = 0;


 FUNC_0(VAR_8, VAR_0,
        VAR_1);


 for (VAR_10 = 0; VAR_10 < VAR_3;
      VAR_10++) {
  FUNC_0(VAR_8, VAR_6 +
         VAR_10 * 8, 0x0);
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   FUNC_0(VAR_8, VAR_7 +
          VAR_10 * 8, 0x0);
  }
 }


 FUNC_0(VAR_8, VAR_5, 0x000000fe);


 FUNC_0(VAR_8, VAR_0,
        VAR_2);
}
