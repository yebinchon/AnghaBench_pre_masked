
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; } ;
struct bnx2x_fastpath {int napi; } ;
struct bnx2x {int vlgrp; } ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 int FUNC_0 (char*,int) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,struct sk_buff*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ,scalar_t__,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_2, struct bnx2x_fastpath *VAR_3,
          struct sk_buff *VAR_4, u16 VAR_5)
{
 if (VAR_5)
  FUNC_5(&VAR_3->napi, VAR_2->vlgrp, VAR_5, VAR_4);
 else
  FUNC_3(&VAR_3->napi, VAR_4);
}
