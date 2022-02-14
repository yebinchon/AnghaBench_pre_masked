
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct zfcp_gpn_ft {int sg_resp; struct scatterlist sg_req; } ;
struct TYPE_2__ {int gpn_ft_cache; } ;


 int FUNC_0 (struct zfcp_gpn_ft*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scatterlist*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct zfcp_gpn_ft *VAR_1, int VAR_2)
{
 struct scatterlist *VAR_3 = &VAR_1->sg_req;

 FUNC_1(VAR_0.gpn_ft_cache, FUNC_2(VAR_3));
 FUNC_3(VAR_1->sg_resp, VAR_2);

 FUNC_0(VAR_1);
}
