
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_4 (unsigned long,int) ;

int FUNC_5(unsigned long VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_2)
  return FUNC_4(VAR_3, VAR_4);

 VAR_5 = FUNC_3(FUNC_0(VAR_3), FUNC_0(VAR_3) + VAR_4 * VAR_0,
  VAR_1, ((void*)0));
 if (VAR_5)
  goto out_err;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  goto out_free;

 return 0;

out_free:
 FUNC_2(FUNC_0(VAR_3), FUNC_0(VAR_3) + VAR_4 * VAR_0);
out_err:
 return VAR_5;
}
