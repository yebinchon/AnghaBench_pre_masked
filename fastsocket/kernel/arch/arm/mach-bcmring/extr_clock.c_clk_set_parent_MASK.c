
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int use_cnt; int mode; struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 scalar_t__ FUNC_4 (struct clk*) ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct clk *VAR_4, struct clk *VAR_5)
{
 unsigned long VAR_6;
 struct clk *VAR_7;

 if (!VAR_4 || !VAR_5)
  return -VAR_2;

 if (!FUNC_3(VAR_5) || !FUNC_2(VAR_4))
  return -VAR_2;


 if (VAR_4->use_cnt > 1)
  return -VAR_1;

 if (VAR_4->parent == VAR_5)
  return 0;

 FUNC_5(&VAR_3, VAR_6);
 VAR_7 = VAR_4->parent;
 VAR_4->parent = VAR_5;
 if (FUNC_4(VAR_5))
  VAR_4->mode |= VAR_0;
 else
  VAR_4->mode &= (~VAR_0);


 if (VAR_4->use_cnt != 0) {
  VAR_4->use_cnt--;

  FUNC_1(VAR_4);

  FUNC_0(VAR_7);
 }
 FUNC_6(&VAR_3, VAR_6);

 return 0;
}
