
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int port_t ;
struct TYPE_2__ {unsigned short encoding; unsigned short parity; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int * FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8, unsigned short VAR_9,
   unsigned short VAR_10)
{
 port_t *VAR_11 = FUNC_0(VAR_8);

 if (VAR_9 != VAR_1 &&
     VAR_9 != VAR_2)
  return -VAR_0;

 if (VAR_10 != VAR_7 &&
     VAR_10 != VAR_6 &&
     VAR_10 != VAR_4 &&
     VAR_10 != VAR_5 &&
     VAR_10 != VAR_3)
  return -VAR_0;

 FUNC_1(VAR_11)->encoding = VAR_9;
 FUNC_1(VAR_11)->parity = VAR_10;
 return 0;
}
