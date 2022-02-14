
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section {int flags; char const* element_name; } ;
typedef int XMLContext ;
struct TYPE_4__ {size_t level; scalar_t__* nb_item; struct section** section; int * priv; } ;
typedef TYPE_1__ WriterContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int *,char const*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(WriterContext *VAR_2, const char *VAR_3, const char *VAR_4)
{
    AVBPrint VAR_5;
    XMLContext *VAR_6 = VAR_2->priv;
    const struct section *VAR_7 = VAR_2->section[VAR_2->level];

    FUNC_3(&VAR_5, 1, VAR_0);

    if (VAR_7->flags & VAR_1) {
        FUNC_0();
        FUNC_4("<%s key=\"%s\"",
               VAR_7->element_name, FUNC_5(&VAR_5, VAR_3, VAR_2));
        FUNC_1(&VAR_5);
        FUNC_4(" value=\"%s\"/>\n", FUNC_5(&VAR_5, VAR_4, VAR_2));
    } else {
        if (VAR_2->nb_item[VAR_2->level])
            FUNC_4(" ");
        FUNC_4("%s=\"%s\"", VAR_3, FUNC_5(&VAR_5, VAR_4, VAR_2));
    }

    FUNC_2(&VAR_5, ((void*)0));
}
