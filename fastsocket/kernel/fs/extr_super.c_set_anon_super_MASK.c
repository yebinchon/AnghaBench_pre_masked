
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_6(struct super_block *VAR_10, void *VAR_11)
{
 int VAR_12;
 int VAR_13;

 retry:
 if (FUNC_2(&VAR_7, VAR_3) == 0)
  return -VAR_2;
 FUNC_4(&VAR_8);
 VAR_13 = FUNC_1(&VAR_7, VAR_9, &VAR_12);
 if (!VAR_13)
  VAR_9 = VAR_12 + 1;
 FUNC_5(&VAR_8);
 if (VAR_13 == -VAR_0)

  goto retry;
 else if (VAR_13)
  return -VAR_0;

 if ((VAR_12 & VAR_4) == (1 << VAR_5)) {
  FUNC_4(&VAR_8);
  FUNC_3(&VAR_7, VAR_12);
  if (VAR_9 > VAR_12)
   VAR_9 = VAR_12;
  FUNC_5(&VAR_8);
  return -VAR_1;
 }
 VAR_10->s_dev = FUNC_0(0, VAR_12 & VAR_6);
 return 0;
}
