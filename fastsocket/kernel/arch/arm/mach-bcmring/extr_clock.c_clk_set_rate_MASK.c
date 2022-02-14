
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {unsigned long rate_hz; int csp_id; TYPE_1__* parent; scalar_t__ use_cnt; } ;
struct TYPE_2__ {unsigned long rate_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct clk*) ;
 int VAR_2 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct clk *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if (!VAR_3)
  return -VAR_1;

 if (!FUNC_1(VAR_3))
  return -VAR_1;

 if (VAR_3->use_cnt)
  return -VAR_0;

 FUNC_3(&VAR_2, VAR_5);
 VAR_6 = VAR_3->parent->rate_hz;
 VAR_7 = FUNC_2(VAR_6, VAR_4);
 VAR_7 = FUNC_0(VAR_3->csp_id, VAR_7);
 VAR_3->rate_hz = VAR_7;
 FUNC_4(&VAR_2, VAR_5);

 return 0;
}
