
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dca_provider {int cd; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 struct device* FUNC_3 (int ,int ,int ,int *,char*,int ) ;

int FUNC_4(struct dca_provider *VAR_1, struct device *VAR_2, int VAR_3)
{
 struct device *VAR_4;
 static int VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1->cd, FUNC_1(0, VAR_3 + 1), ((void*)0),
      "requester%d", VAR_5++);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);
 return 0;
}
