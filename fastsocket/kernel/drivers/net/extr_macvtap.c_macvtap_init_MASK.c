
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_6, 0,
    VAR_0, "macvtap");
 if (VAR_7)
  goto out1;

 FUNC_5(&VAR_2, &VAR_4);
 VAR_7 = FUNC_3(&VAR_2, VAR_6, VAR_0);
 if (VAR_7)
  goto out2;

 VAR_3 = FUNC_6(VAR_1, "macvtap");
 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3);
  goto out3;
 }

 VAR_7 = FUNC_8(&VAR_5);
 if (VAR_7)
  goto out4;

 return 0;

out4:
 FUNC_7(VAR_3);
out3:
 FUNC_4(&VAR_2);
out2:
 FUNC_9(VAR_6, VAR_0);
out1:
 return VAR_7;
}
