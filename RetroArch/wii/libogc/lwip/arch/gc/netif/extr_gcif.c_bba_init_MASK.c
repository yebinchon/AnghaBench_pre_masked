
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; scalar_t__ state; } ;
struct bba_priv {int dummy; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bba_priv*) ;
 int FUNC_3 (struct bba_priv*) ;
 scalar_t__ FUNC_4 (struct bba_priv*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_5 (struct netif*) ;

err_t FUNC_6(struct netif *VAR_6)
{
 err_t VAR_7;
 struct bba_priv *VAR_8 = (struct bba_priv*)VAR_6->state;

 FUNC_2(VAR_8);

 FUNC_1(VAR_3, ("bba_init(call EXI_RegisterEXICallback())\n"));
 FUNC_0(VAR_2,VAR_5);

 VAR_7 = FUNC_5(VAR_6);
 if(VAR_7!=VAR_1) {
  FUNC_0(VAR_2,((void*)0));
  FUNC_3(VAR_8);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_8);
 if(VAR_7) {
  VAR_6->flags |= VAR_4;
  VAR_7 = VAR_1;
 } else {
  FUNC_0(VAR_2,((void*)0));
  VAR_7 = VAR_0;
 }

 FUNC_3(VAR_8);
 return VAR_7;
}
