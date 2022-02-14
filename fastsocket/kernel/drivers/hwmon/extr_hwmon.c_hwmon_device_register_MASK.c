
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 struct device* FUNC_3 (int ,struct device*,int ,int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

struct device *FUNC_10(struct device *VAR_8)
{
 struct device *VAR_9;
 int VAR_10, VAR_11;

again:
 if (FUNC_9(FUNC_5(&VAR_6, VAR_2) == 0))
  return FUNC_0(-VAR_1);

 FUNC_7(&VAR_7);
 VAR_11 = FUNC_4(&VAR_6, ((void*)0), &VAR_10);
 FUNC_8(&VAR_7);

 if (FUNC_9(VAR_11 == -VAR_0))
  goto again;
 else if (FUNC_9(VAR_11))
  return FUNC_0(VAR_11);

 VAR_10 = VAR_10 & VAR_4;
 VAR_9 = FUNC_3(VAR_5, VAR_8, FUNC_2(0, 0), ((void*)0),
         VAR_3, VAR_10);

 if (FUNC_1(VAR_9)) {
  FUNC_7(&VAR_7);
  FUNC_6(&VAR_6, VAR_10);
  FUNC_8(&VAR_7);
 }

 return VAR_9;
}
