
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct igb_q_vector {int napi; struct igb_adapter* adapter; } ;
struct igb_adapter {int vlgrp; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct igb_q_vector *VAR_0,
                            struct sk_buff *VAR_1,
                            u16 VAR_2)
{
 struct igb_adapter *VAR_3 = VAR_0->adapter;

 if (VAR_2)
  FUNC_1(&VAR_0->napi, VAR_3->vlgrp,
                   VAR_2, VAR_1);
 else
  FUNC_0(&VAR_0->napi, VAR_1);
}
