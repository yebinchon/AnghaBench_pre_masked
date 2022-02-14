
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nlimbs; unsigned int alloced; unsigned int* d; } ;
typedef TYPE_1__* MPI ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int) ;

int
FUNC_1( MPI VAR_3, unsigned VAR_4 )
{
    unsigned VAR_5, VAR_6;

    VAR_5 = VAR_4 / VAR_1;
    VAR_6 = VAR_4 % VAR_1;

    if( VAR_5 >= VAR_3->nlimbs ) {
 if( VAR_3->alloced >= VAR_5 )
     if (FUNC_0(VAR_3, VAR_5+1 ) < 0) return -VAR_2;
 VAR_3->nlimbs = VAR_5+1;
    }
    VAR_3->d[VAR_5] |= (VAR_0<<VAR_6);
    return 0;
}
