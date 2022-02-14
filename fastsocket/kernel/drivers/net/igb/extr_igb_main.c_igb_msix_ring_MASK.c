
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_q_vector {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct igb_q_vector*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct igb_q_vector *VAR_3 = VAR_2;


 FUNC_0(VAR_3);

 FUNC_1(&VAR_3->napi);

 return VAR_0;
}
