
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {struct pullup_field* next; } ;



__attribute__((used)) static int FUNC_0( struct pullup_field * VAR_0,
                                struct pullup_field * VAR_1 )
{
    int VAR_2 = 1;
    struct pullup_field * VAR_3;

    if( !VAR_0 || !VAR_1 ) return 0;
    for( VAR_3 = VAR_0; VAR_3 != VAR_1; VAR_3 = VAR_3->next ) VAR_2++;
    return VAR_2;
}
