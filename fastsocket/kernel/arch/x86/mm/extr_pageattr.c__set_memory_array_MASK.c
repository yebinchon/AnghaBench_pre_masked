
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long*,int,int ,int) ;
 int FUNC_3 (unsigned long*,int,int ,int ,int ,int ,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,unsigned long,int *) ;

int FUNC_6(unsigned long *VAR_5, int VAR_6,
  unsigned long VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;




 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_10 = FUNC_5(FUNC_0(VAR_5[VAR_8]), FUNC_0(VAR_5[VAR_8]) + VAR_1,
     VAR_7, ((void*)0));
  if (VAR_10)
   goto out_free;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_6,
        FUNC_1(VAR_3), 1);

 if (!VAR_10 && VAR_7 == VAR_4)
  VAR_10 = FUNC_3(VAR_5, VAR_6,
            FUNC_1(VAR_4),
            FUNC_1(VAR_2),
            0, VAR_0, ((void*)0));
 if (VAR_10)
  goto out_free;

 return 0;

out_free:
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_4(FUNC_0(VAR_5[VAR_9]), FUNC_0(VAR_5[VAR_9]) + VAR_1);

 return VAR_10;
}
