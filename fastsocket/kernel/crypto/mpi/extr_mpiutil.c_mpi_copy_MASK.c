
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t nlimbs; int * d; int nbits; int flags; int sign; } ;
typedef TYPE_1__* MPI ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (size_t) ;

int FUNC_1(MPI *VAR_2, const MPI VAR_3 )
{
 size_t VAR_4;
 MPI VAR_5;

 *VAR_2 = VAR_1;

 if ( VAR_3 ) {
  VAR_5 = FUNC_0( VAR_3->nlimbs );
  if (!VAR_5)
   return -VAR_0;

  VAR_5->nlimbs = VAR_3->nlimbs;
  VAR_5->sign = VAR_3->sign;
  VAR_5->flags = VAR_3->flags;
  VAR_5->nbits = VAR_3->nbits;

  for (VAR_4 = 0; VAR_4 < VAR_5->nlimbs; VAR_4++ )
   VAR_5->d[VAR_4] = VAR_3->d[VAR_4];

  *VAR_2 = VAR_5;
 }

 return 0;
}
