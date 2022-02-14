
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* word; long long id; struct TYPE_3__* next; } ;
typedef TYPE_1__ HASHREC ;


 unsigned int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(HASHREC **VAR_3, char *VAR_4, long long VAR_5) {
    HASHREC *VAR_6, *VAR_7;
    unsigned int VAR_8 = FUNC_0(VAR_4, VAR_1, VAR_0);
    for (VAR_7 = ((void*)0), VAR_6 = VAR_3[VAR_8]; VAR_6 != ((void*)0) && FUNC_3(VAR_6->word, VAR_4) != 0; VAR_7 = VAR_6, VAR_6 = VAR_6->next);
    if (VAR_6 == ((void*)0)) {
        VAR_6 = (HASHREC *) FUNC_2(sizeof(HASHREC));
        VAR_6->word = (char *) FUNC_2(FUNC_5(VAR_4) + 1);
        FUNC_4(VAR_6->word, VAR_4);
        VAR_6->id = VAR_5;
        VAR_6->next = ((void*)0);
        if (VAR_7 == ((void*)0)) VAR_3[VAR_8] = VAR_6;
        else VAR_7->next = VAR_6;
    }
    else FUNC_1(VAR_2, "Error, duplicate entry located: %s.\n",VAR_6->word);
    return;
}
