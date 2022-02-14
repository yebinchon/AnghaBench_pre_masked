
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndrv_cb {scalar_t__ nd_proto_family; int nd_if; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

int
FUNC_1(struct ndrv_cb *VAR_2)
{
    int VAR_3 = 0;

    if (VAR_2->nd_proto_family == VAR_1 ||
     VAR_2->nd_proto_family == 0)
        return VAR_0;


    VAR_3 = FUNC_0(VAR_2->nd_if, VAR_2->nd_proto_family);
    VAR_2->nd_proto_family = VAR_1;

 return VAR_3;
}
