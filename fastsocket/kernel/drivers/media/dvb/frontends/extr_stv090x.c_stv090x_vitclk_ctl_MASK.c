
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int demod; TYPE_1__* internal; } ;
struct TYPE_2__ {int demod_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stv090x_state*,int ) ;
 int FUNC_5 (struct stv090x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_4, int VAR_5)
{
 u32 VAR_6;

 switch (VAR_4->demod) {
 case 129:
  FUNC_2(&VAR_4->internal->demod_lock);
  VAR_6 = FUNC_4(VAR_4, VAR_3);
  FUNC_0(VAR_6, VAR_1, VAR_5);
  if (FUNC_5(VAR_4, VAR_3, VAR_6) < 0)
   goto err;
  FUNC_3(&VAR_4->internal->demod_lock);
  break;

 case 128:
  FUNC_2(&VAR_4->internal->demod_lock);
  VAR_6 = FUNC_4(VAR_4, VAR_3);
  FUNC_0(VAR_6, VAR_2, VAR_5);
  if (FUNC_5(VAR_4, VAR_3, VAR_6) < 0)
   goto err;
  FUNC_3(&VAR_4->internal->demod_lock);
  break;

 default:
  FUNC_1(VAR_0, 1, "Wrong demodulator!");
  break;
 }
 return 0;
err:
 FUNC_3(&VAR_4->internal->demod_lock);
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
