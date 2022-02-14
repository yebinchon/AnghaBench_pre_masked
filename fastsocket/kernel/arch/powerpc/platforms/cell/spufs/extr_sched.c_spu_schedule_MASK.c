
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {scalar_t__ state; int state_mutex; } ;
struct spu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct spu*,struct spu_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu_context*) ;

__attribute__((used)) static void FUNC_3(struct spu *VAR_1, struct spu_context *VAR_2)
{


 FUNC_1(&VAR_2->state_mutex);
 if (VAR_2->state == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2);
}
