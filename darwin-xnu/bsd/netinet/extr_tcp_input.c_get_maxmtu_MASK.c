
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 TYPE_1__* FUNC_3 (struct rtentry*) ;
 unsigned int FUNC_4 (struct rtentry*) ;
 unsigned int FUNC_5 (struct rtentry*) ;

unsigned int
FUNC_6(struct rtentry *VAR_1)
{
 unsigned int VAR_2 = 0;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 if (FUNC_3(VAR_1)->sa_family == VAR_0) {
  VAR_2 = FUNC_5(VAR_1);
 } else {
  VAR_2 = FUNC_4(VAR_1);
 }

 FUNC_2(VAR_1);

 return (VAR_2);
}
