
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ s; scalar_t__ t; } ;
typedef TYPE_1__ TESSvertex ;
typedef scalar_t__ TESSreal ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

TESSreal FUNC_1( TESSvertex *VAR_0, TESSvertex *VAR_1, TESSvertex *VAR_2 )
{




 TESSreal VAR_3, VAR_4;


 if( ! ( FUNC_0( VAR_0, VAR_1 ) && FUNC_0( VAR_1, VAR_2 )) )
  return 0;

 VAR_3 = VAR_1->s - VAR_0->s;
 VAR_4 = VAR_2->s - VAR_1->s;

 if( VAR_3 + VAR_4 > 0 ) {
  return (VAR_1->t - VAR_2->t) * VAR_3 + (VAR_1->t - VAR_0->t) * VAR_4;
 }

 return 0;
}
