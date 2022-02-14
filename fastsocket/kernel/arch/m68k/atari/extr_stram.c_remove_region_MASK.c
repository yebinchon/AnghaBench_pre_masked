
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; struct TYPE_5__* next; } ;
typedef TYPE_1__ BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1( BLOCK *VAR_3 )
{
 BLOCK **VAR_4;

 for( VAR_4 = &VAR_2; *VAR_4; VAR_4 = &((*VAR_4)->next) )
  if (*VAR_4 == VAR_3) break;
 if (!*VAR_4)
  return( 0 );

 *VAR_4 = VAR_3->next;
 if (VAR_3->flags & VAR_1)
  FUNC_0( VAR_3 );
 else
  VAR_3->flags |= VAR_0;
 return( 1 );
}
