
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_11__ {int metadata; } ;
struct TYPE_10__ {int name; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, xmlNodePtr VAR_1)
{
    xmlChar *VAR_2 = ((void*)0);

    VAR_1 = FUNC_2(VAR_1);
    while (VAR_1) {
        if (!FUNC_1(VAR_1->name, "Title")) {
            VAR_2 = FUNC_5(VAR_1);
            if (VAR_2) {
                FUNC_0(&VAR_0->metadata, "Title", VAR_2, 0);
            }
        } else if (!FUNC_1(VAR_1->name, "Source")) {
            VAR_2 = FUNC_5(VAR_1);
            if (VAR_2) {
                FUNC_0(&VAR_0->metadata, "Source", VAR_2, 0);
            }
        } else if (!FUNC_1(VAR_1->name, "Copyright")) {
            VAR_2 = FUNC_5(VAR_1);
            if (VAR_2) {
                FUNC_0(&VAR_0->metadata, "Copyright", VAR_2, 0);
            }
        }
        VAR_1 = FUNC_4(VAR_1);
        FUNC_3(VAR_2);
        VAR_2 = ((void*)0);
    }
    return 0;
}
