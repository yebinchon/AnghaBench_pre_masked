
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* word; int count; struct TYPE_3__* next; } ;
typedef TYPE_1__ HASHREC ;


 unsigned int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(HASHREC **VAR_2, char *VAR_3) {
    HASHREC *VAR_4, *VAR_5;
    unsigned int VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_0);

    for (VAR_5 = ((void*)0), VAR_4 = VAR_2[VAR_6]; VAR_4 != ((void*)0) && FUNC_2(VAR_4->word, VAR_3) != 0; VAR_5 = VAR_4, VAR_4 = VAR_4->next);
    if (VAR_4 == ((void*)0)) {
        VAR_4 = (HASHREC *) FUNC_1( sizeof(HASHREC) );
        VAR_4->word = (char *) FUNC_1( FUNC_4(VAR_3) + 1 );
        FUNC_3(VAR_4->word, VAR_3);
        VAR_4->count = 1;
        VAR_4->next = ((void*)0);
        if ( VAR_5==((void*)0) )
            VAR_2[VAR_6] = VAR_4;
        else
            VAR_5->next = VAR_4;
    }
    else {

        VAR_4->count++;
        if (VAR_5 != ((void*)0)) {

            VAR_5->next = VAR_4->next;
            VAR_4->next = VAR_2[VAR_6];
            VAR_2[VAR_6] = VAR_4;
        }
    }
    return;
}
