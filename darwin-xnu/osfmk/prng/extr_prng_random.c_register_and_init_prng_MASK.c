
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int * prng_fns_t ;
typedef int buf ;
struct TYPE_3__ {int attrs; int group; int mutex; int group_attrs; } ;
struct TYPE_4__ {int ctx; TYPE_1__ lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int **) ;
 scalar_t__ FUNC_2 () ;
 size_t FUNC_3 (int **,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_8 (int *,size_t,int **) ;

void
FUNC_9(prng_fns_t VAR_5)
{
 uint8_t VAR_6[VAR_2][VAR_0];
 size_t VAR_7;

 FUNC_0(FUNC_2() == VAR_1);
 FUNC_0(VAR_4 == ((void*)0));

 VAR_4 = VAR_5;


 VAR_3.lock.group_attrs = FUNC_6();
 VAR_3.lock.group = FUNC_5("random", VAR_3.lock.group_attrs);
 VAR_3.lock.attrs = FUNC_4();
 VAR_3.lock.mutex = FUNC_7(VAR_3.lock.group, VAR_3.lock.attrs);

 VAR_7 = FUNC_3(VAR_6, VAR_0);
 (void)FUNC_8(&VAR_3.ctx, VAR_7, VAR_6);
 FUNC_1(sizeof(VAR_6), VAR_6);
}
