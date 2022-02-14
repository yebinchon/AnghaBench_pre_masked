
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c2_mq {scalar_t__ magic; scalar_t__ type; int q_size; int * shared; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct c2_mq*) ;
 int FUNC_3 (int) ;

void FUNC_4(struct c2_mq *VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_2->magic != VAR_1);
 FUNC_0(VAR_2->type != VAR_0);

 while (VAR_3--) {
  FUNC_0(FUNC_2(VAR_2));
  *VAR_2->shared = FUNC_3((FUNC_1(*VAR_2->shared)+1) % VAR_2->q_size);
 }
}
