
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {scalar_t__ ci_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct connection*) ;
 struct connection* FUNC_2 (int,int ) ;

int FUNC_3(int VAR_3)
{
 struct connection *VAR_4;


 if (VAR_2.ci_protocol != 0)
  return 0;

 if (VAR_3 == FUNC_0())
  return 0;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_1(VAR_4);
 return 0;
}
