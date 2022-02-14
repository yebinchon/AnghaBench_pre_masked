
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {int affinity; int breaks; struct pullup_field* next; } ;
struct pullup_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct pullup_context * VAR_2,
                                        struct pullup_field * VAR_3 )
{
    int VAR_4;
    struct pullup_field * VAR_5 = VAR_3;
    const char VAR_6[] = "+..", VAR_7[] = "..+";
    FUNC_0( "affinity: " );
    for( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
    {
        FUNC_1( "%c%d%c",
                VAR_6[1+VAR_3->affinity],
                VAR_4,
                VAR_7[1+VAR_3->affinity] );

        VAR_3 = VAR_3->next;
    }
    VAR_3 = VAR_5;
    FUNC_1("\nbreaks:   ");
    for( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
    {
        FUNC_1( "%c%d%c",
                VAR_3->breaks & VAR_0 ? '|' : '.',
                VAR_4,
                VAR_3->breaks & VAR_1 ? '|' : '.' );

        VAR_3 = VAR_3->next;
    }
    FUNC_1("\n");
}
