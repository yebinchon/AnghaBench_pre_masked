
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf_t ;
struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ blip_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3( blip_t* VAR_3, int VAR_4 )
{
 buf_t* VAR_5 = FUNC_0( VAR_3 );
 int VAR_6 = (VAR_3->offset >> VAR_1) + VAR_0 - VAR_4;
  VAR_3->offset -= VAR_4 * VAR_2;

 FUNC_1( &VAR_5 [0], &VAR_5 [VAR_4], VAR_6 * sizeof VAR_5 [0] );
 FUNC_2( &VAR_5 [VAR_6], 0, VAR_4 * sizeof VAR_5 [0] );
}
