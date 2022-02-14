
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int mtu; int flags; int hwaddr_len; int linkoutput; int output_ip6; int output; int hostname; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netif*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct netif* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

err_t FUNC_1(struct netif *VAR_12)
{

    VAR_9 = VAR_12;

    VAR_12->hostname = VAR_0;






    FUNC_0(VAR_12, VAR_10, 100);





    VAR_12->output = VAR_7;



    VAR_12->linkoutput = VAR_11;

    VAR_12->hwaddr_len = VAR_2;




    VAR_12->mtu = 1500;



    VAR_12->flags = VAR_3 | VAR_4 | VAR_6;






    return VAR_1;

}
