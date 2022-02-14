
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct ipw2100_priv {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct ipw2100_priv *VAR_2 = VAR_1;
 union iwreq_data VAR_3;

 VAR_3.data.length = 0;
 VAR_3.data.flags = 0;
 FUNC_0(VAR_2->net_dev, VAR_0, &VAR_3, ((void*)0));
}
