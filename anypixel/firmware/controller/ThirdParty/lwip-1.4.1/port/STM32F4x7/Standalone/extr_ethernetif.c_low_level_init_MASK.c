
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int mtu; int flags; int * hwaddr; int hwaddr_len; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int ** VAR_14 ;
 int ** VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_5(struct netif *VAR_17)
{




  VAR_17->hwaddr_len = VAR_2;


  VAR_17->hwaddr[0] = VAR_7;
  VAR_17->hwaddr[1] = VAR_8;
  VAR_17->hwaddr[2] = VAR_9;
  VAR_17->hwaddr[3] = VAR_10;
  VAR_17->hwaddr[4] = VAR_11;
  VAR_17->hwaddr[5] = VAR_16;


  FUNC_3(VAR_4, VAR_17->hwaddr);


  VAR_17->mtu = 1500;



  VAR_17->flags = VAR_12 | VAR_13;


  FUNC_1(VAR_1, &VAR_15[0][0], VAR_6);

  FUNC_0(VAR_0, &VAR_14[0][0], VAR_5);
  FUNC_4();

}
