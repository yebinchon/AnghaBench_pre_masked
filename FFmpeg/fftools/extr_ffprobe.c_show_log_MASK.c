
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_2__ {int log_level; int category; int parent_category; scalar_t__ log_message; scalar_t__ parent_name; scalar_t__ context_name; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(WriterContext *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    FUNC_4(&VAR_2);
    if (!VAR_1) {
        FUNC_5(&VAR_2);
        return 0;
    }
    FUNC_7(VAR_3, VAR_4);

    for (VAR_7=0; VAR_7<VAR_1; VAR_7++) {
        if (VAR_0[VAR_7].log_level <= VAR_6) {
            FUNC_7(VAR_3, VAR_5);
            FUNC_2("context", VAR_0[VAR_7].context_name);
            FUNC_1("level", VAR_0[VAR_7].log_level);
            FUNC_1("category", VAR_0[VAR_7].category);
            if (VAR_0[VAR_7].parent_name) {
                FUNC_2("parent_context", VAR_0[VAR_7].parent_name);
                FUNC_1("parent_category", VAR_0[VAR_7].parent_category);
            } else {
                FUNC_3("parent_context", "N/A");
                FUNC_3("parent_category", "N/A");
            }
            FUNC_2("message", VAR_0[VAR_7].log_message);
            FUNC_6(VAR_3);
        }
    }
    FUNC_0(0);
    FUNC_5(&VAR_2);

    FUNC_6(VAR_3);

    return 0;
}
