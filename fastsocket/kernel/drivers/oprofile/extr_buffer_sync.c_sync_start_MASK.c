
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(void)
{
 int VAR_10;

 if (!FUNC_9(&VAR_5, VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_4);

 VAR_10 = FUNC_7(&VAR_9);
 if (VAR_10)
  goto out1;
 VAR_10 = FUNC_3(VAR_3, &VAR_8);
 if (VAR_10)
  goto out2;
 VAR_10 = FUNC_3(VAR_2, &VAR_7);
 if (VAR_10)
  goto out3;
 VAR_10 = FUNC_5(&VAR_6);
 if (VAR_10)
  goto out4;

 FUNC_6();

out:
 FUNC_2(&VAR_4);
 return VAR_10;
out4:
 FUNC_4(VAR_2, &VAR_7);
out3:
 FUNC_4(VAR_3, &VAR_8);
out2:
 FUNC_8(&VAR_9);
out1:
 FUNC_0(VAR_5);
 goto out;
}
