
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int flags; int state_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spu_context*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct spu_context*) ;
 int VAR_2 ;

void FUNC_4(struct spu_context *VAR_3)
{
 FUNC_3(VAR_2, VAR_3);
 if (!(VAR_3->flags & VAR_1)) {
  FUNC_1(&VAR_3->state_mutex);
  FUNC_0(VAR_3, 0, VAR_0);
  FUNC_2(&VAR_3->state_mutex);
 }
}
