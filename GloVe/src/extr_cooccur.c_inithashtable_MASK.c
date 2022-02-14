
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HASHREC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

HASHREC ** FUNC_1() {
    int VAR_1;
    HASHREC **VAR_2;
    VAR_2 = (HASHREC **) FUNC_0( sizeof(HASHREC *) * VAR_0 );
    for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) VAR_2[VAR_1] = (HASHREC *) ((void*)0);
    return(VAR_2);
}
