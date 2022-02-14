
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dca_provider {struct dca_ops* ops; } ;
struct dca_ops {int dummy; } ;


 int VAR_0 ;
 struct dca_provider* FUNC_0 (int,int ) ;

struct dca_provider *FUNC_1(struct dca_ops *VAR_1, int VAR_2)
{
 struct dca_provider *VAR_3;
 int VAR_4;

 VAR_4 = (sizeof(*VAR_3) + VAR_2);
 VAR_3 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->ops = VAR_1;

 return VAR_3;
}
