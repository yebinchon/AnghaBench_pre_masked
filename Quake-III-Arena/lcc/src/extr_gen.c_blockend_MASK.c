
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; int * freemask; } ;
typedef TYPE_1__ Env ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0(Env *VAR_5) {
 if (VAR_4 > VAR_3)
  VAR_3 = VAR_4;
 VAR_4 = VAR_5->offset;
 VAR_2[VAR_1] = VAR_5->freemask[VAR_1];
 VAR_2[VAR_0] = VAR_5->freemask[VAR_0];
}
