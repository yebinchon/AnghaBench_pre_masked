
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_mq {scalar_t__ priv; int * shared; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __inline__ int FUNC_1(struct c2_mq *VAR_0)
{
 return VAR_0->priv == FUNC_0(*VAR_0->shared);
}
