
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {int breaks; struct pullup_field* next; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( struct pullup_field * VAR_2, int VAR_3 )
{
    int VAR_4;
    for( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
    {
        if( VAR_2->breaks & VAR_1 ||
            VAR_2->next->breaks & VAR_0 )
        {
            return VAR_4+1;
        }
        VAR_2 = VAR_2->next;
    }
    return 0;
}
