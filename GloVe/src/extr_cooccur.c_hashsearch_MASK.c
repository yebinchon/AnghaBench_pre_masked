
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int word; } ;
typedef TYPE_1__ HASHREC ;


 unsigned int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*) ;

HASHREC *FUNC_2(HASHREC **VAR_2, char *VAR_3) {
    HASHREC *VAR_4, *VAR_5;
    unsigned int VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_0);
    for (VAR_5 = ((void*)0), VAR_4=VAR_2[VAR_6]; VAR_4 != ((void*)0) && FUNC_1(VAR_4->word, VAR_3) != 0; VAR_5 = VAR_4, VAR_4 = VAR_4->next);
    if ( VAR_4 != ((void*)0) && VAR_5!=((void*)0) ) {
        VAR_5->next = VAR_4->next;
        VAR_4->next = VAR_2[VAR_6];
        VAR_2[VAR_6] = VAR_4;
    }
    return(VAR_4);
}
