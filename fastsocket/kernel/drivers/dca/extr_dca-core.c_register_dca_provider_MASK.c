
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dca_provider {int node; } ;
struct dca_domain {int dca_providers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 struct dca_domain* FUNC_1 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct dca_provider*,struct device*) ;
 int FUNC_3 (struct dca_provider*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;

int FUNC_8(struct dca_provider *VAR_5, struct device *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct dca_domain *VAR_9;

 FUNC_5(&VAR_2, VAR_8);
 if (VAR_4) {
  FUNC_6(&VAR_2, VAR_8);
  return -VAR_1;
 }
 FUNC_6(&VAR_2, VAR_8);

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_5(&VAR_2, VAR_8);
 VAR_9 = FUNC_1(VAR_6);
 if (!VAR_9) {
  if (VAR_4) {
   FUNC_6(&VAR_2, VAR_8);
   FUNC_3(VAR_5);
   FUNC_7();
  } else {
   FUNC_6(&VAR_2, VAR_8);
  }
  return -VAR_1;
 }
 FUNC_4(&VAR_5->node, &VAR_9->dca_providers);
 FUNC_6(&VAR_2, VAR_8);

 FUNC_0(&VAR_3,
         VAR_0, ((void*)0));
 return 0;
}
