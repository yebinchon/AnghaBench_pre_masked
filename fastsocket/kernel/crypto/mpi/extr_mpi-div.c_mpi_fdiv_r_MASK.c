
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int sign; scalar_t__ nlimbs; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

int
FUNC_4( MPI VAR_1, MPI VAR_2, MPI VAR_3 )
{
 int VAR_4 = -VAR_0;
 int VAR_5 = VAR_3->sign;
 MPI VAR_6 = ((void*)0);




 if( VAR_1 == VAR_3 ) {
  if (FUNC_1( &VAR_6, VAR_3 ) < 0) goto nomem;
  VAR_3 = VAR_6;
 }

 if (FUNC_3(((void*)0), VAR_1, VAR_2, VAR_3 ) < 0) goto nomem;
 if( ((VAR_5?1:0) ^ (VAR_2->sign?1:0)) && VAR_1->nlimbs )
  if (FUNC_0( VAR_1, VAR_1, VAR_3) < 0) goto nomem;

 VAR_4 = 0;

 nomem:
 if( VAR_6 )
  FUNC_2(VAR_6);
 return VAR_4;
}
