
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct clk {unsigned long rate; } ;
struct TYPE_12__ {int* pccr; } ;
struct TYPE_11__ {unsigned long rate; } ;
struct TYPE_10__ {unsigned long rate; } ;
struct TYPE_9__ {unsigned long rate; } ;
struct TYPE_8__ {unsigned long rate; } ;
struct TYPE_7__ {unsigned long rate; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int*,int) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_6, int VAR_7, struct device_node *VAR_8)
{
 unsigned long VAR_9 = VAR_5.rate;
 unsigned long VAR_10;
 FUNC_0(&VAR_0->pccr[VAR_7], 0);
 FUNC_0(&VAR_0->pccr[VAR_7], 0x00020000);
 FUNC_0(&VAR_0->pccr[VAR_7], 0x00030000);

 if (VAR_0->pccr[VAR_7] & 0x80) {
  VAR_6->rate = VAR_3.rate;
  return;
 }

 switch ((VAR_0->pccr[VAR_7] >> 14) & 0x3) {
 case 0:
  VAR_9 = VAR_5.rate;
  break;
 case 1:
  VAR_9 = VAR_2.rate;
  break;
 case 2:
  VAR_9 = VAR_1.rate;
  break;
 case 3:
  VAR_9 = VAR_4.rate;
  break;
 }

 VAR_10 = ((VAR_0->pccr[VAR_7] >> 17) & 0x7fff) + 1;
 VAR_6->rate = VAR_9 / VAR_10;
}
