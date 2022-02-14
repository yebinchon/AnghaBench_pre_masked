
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct resource*,unsigned long,unsigned long) ;
 int FUNC_1 (int *,struct resource*,unsigned long,int ,int ,unsigned long,int *,int *) ;
 int FUNC_2 (int,unsigned long,int ) ;
 struct resource* VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 unsigned long FUNC_6 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_8, unsigned long VAR_9, unsigned long *VAR_10)
{
 struct resource *VAR_11 = &VAR_5[VAR_8];
 int VAR_12 = -1;

 if (VAR_8 > VAR_3)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_9);
 if (VAR_9 > (1 << VAR_4))
  return -VAR_2;

 FUNC_8(&VAR_6);
 if (FUNC_4(VAR_8)) {
  VAR_12 = -VAR_0;
  goto out;
 }
 if (FUNC_3(VAR_8))
  VAR_12 = FUNC_0(VAR_11, VAR_11->start & ~(VAR_9 - 1), VAR_9);
 if (VAR_12 < 0)
  VAR_12 = FUNC_1(&VAR_7, VAR_11, VAR_9, 0, ~0,
          VAR_9, ((void*)0), ((void*)0));
 if (VAR_12 < 0)
  goto out;

 FUNC_2(VAR_8, VAR_11->start, FUNC_7(VAR_11));
 *VAR_10 = VAR_11->start;
 FUNC_5(VAR_8, 1);
out:
 FUNC_9(&VAR_6);
 return VAR_12;
}
