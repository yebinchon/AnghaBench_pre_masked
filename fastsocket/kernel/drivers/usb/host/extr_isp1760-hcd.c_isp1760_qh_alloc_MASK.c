
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_qh {struct isp1760_hcd* priv; int qtd_list; } ;
struct isp1760_hcd {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct isp1760_qh* FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct isp1760_qh *FUNC_2(struct isp1760_hcd *VAR_1,
  gfp_t VAR_2)
{
 struct isp1760_qh *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3)
  return VAR_3;

 FUNC_0(&VAR_3->qtd_list);
 VAR_3->priv = VAR_1;
 return VAR_3;
}
