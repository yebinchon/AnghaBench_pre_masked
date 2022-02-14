
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_gru_mq_uv {unsigned long order; scalar_t__ address; int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct xpc_gru_mq_uv*) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct xpc_gru_mq_uv*) ;
 int FUNC_7 (struct xpc_gru_mq_uv*) ;

__attribute__((used)) static void
FUNC_8(struct xpc_gru_mq_uv *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;
 int VAR_5;


 VAR_3 = 1UL << VAR_2->order;
 VAR_5 = FUNC_5(FUNC_4(VAR_2->address), VAR_3);
 FUNC_0(VAR_5 != VAR_1);


 FUNC_1(VAR_2->irq, ((void*)0));
 FUNC_7(VAR_2);


 FUNC_6(VAR_2);

 VAR_4 = VAR_2->order - VAR_0;
 FUNC_2((unsigned long)VAR_2->address, VAR_4);

 FUNC_3(VAR_2);
}
