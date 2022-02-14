
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {TYPE_1__* internal; } ;
struct TYPE_2__ {int tuner_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int ) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_4, int VAR_5)
{
 u32 VAR_6;
 if (VAR_5)
  FUNC_4(&VAR_4->internal->tuner_lock);

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_0, 1, "Enable Gate");
  FUNC_1(VAR_6, VAR_3, 1);
  if (FUNC_2(VAR_4, VAR_2, VAR_6) < 0)
   goto err;

 } else {
  FUNC_3(VAR_0, 1, "Disable Gate");
  FUNC_1(VAR_6, VAR_3, 0);
  if ((FUNC_2(VAR_4, VAR_2, VAR_6)) < 0)
   goto err;
 }

 if (!VAR_5)
  FUNC_5(&VAR_4->internal->tuner_lock);

 return 0;
err:
 FUNC_3(VAR_1, 1, "I/O error");
 FUNC_5(&VAR_4->internal->tuner_lock);
 return -1;
}
