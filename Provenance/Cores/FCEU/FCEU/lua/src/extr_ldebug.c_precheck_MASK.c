
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ maxstacksize; scalar_t__ numparams; int is_vararg; scalar_t__ sizeupvalues; scalar_t__ nups; int sizelineinfo; int sizecode; int * code; } ;
typedef TYPE_1__ Proto ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (const Proto *VAR_4) {
  FUNC_1(VAR_4->maxstacksize <= VAR_0);
  FUNC_1(VAR_4->numparams+(VAR_4->is_vararg & VAR_2) <= VAR_4->maxstacksize);
  FUNC_1(!(VAR_4->is_vararg & VAR_3) ||
              (VAR_4->is_vararg & VAR_2));
  FUNC_1(VAR_4->sizeupvalues <= VAR_4->nups);
  FUNC_1(VAR_4->sizelineinfo == VAR_4->sizecode || VAR_4->sizelineinfo == 0);
  FUNC_1(VAR_4->sizecode > 0 && FUNC_0(VAR_4->code[VAR_4->sizecode-1]) == VAR_1);
  return 1;
}
