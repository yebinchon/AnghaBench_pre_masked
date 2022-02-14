
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2( int *VAR_2, int *VAR_3 ) {
 POINT VAR_4;


 FUNC_0 (&VAR_4);


 FUNC_1 (VAR_0, VAR_1);

 *VAR_2 = VAR_4.x - VAR_0;
 *VAR_3 = VAR_4.y - VAR_1;
}
