
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef size_t guint ;
typedef int gboolean ;
struct TYPE_5__ {char* name; int * stats; int * (* get_stats ) (int *) ;} ;
typedef TYPE_2__ chassis_plugin ;
struct TYPE_6__ {int stats; TYPE_1__* modules; } ;
typedef TYPE_3__ chassis ;
struct TYPE_4__ {size_t len; TYPE_2__** pdata; } ;
typedef int GHashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int,char*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,char*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_5) {
    const char *VAR_6 = ((void*)0);
    chassis *VAR_7 = ((void*)0);
    chassis_plugin *VAR_8 = ((void*)0);
    guint VAR_9 = 0;
    gboolean VAR_10 = VAR_1;
    int VAR_11 = FUNC_7(VAR_5);

    if (VAR_11 == 0) {
        VAR_6 = ((void*)0);
    } else if (VAR_11 == 1) {
        VAR_6 = FUNC_5(VAR_5, 1);
    } else {
        return FUNC_4(VAR_5, 2, "currently only zero or one arguments are allowed");
    }
    FUNC_8(VAR_5);


    FUNC_6(VAR_5, VAR_2, VAR_0);
    VAR_7 = (chassis*) FUNC_12(VAR_5, -1);
    FUNC_9(VAR_5, 1);


    if (VAR_11 == 0 && VAR_7) {
        GHashTable *VAR_12 = FUNC_0(VAR_7->stats);
        if (VAR_12 == ((void*)0)) {
            VAR_10 = VAR_1;
        } else {
            VAR_10 = VAR_3;

            FUNC_8(VAR_5);
            FUNC_3(VAR_12, VAR_4, VAR_5);
            FUNC_11(VAR_5, -2, "chassis");
            FUNC_2(VAR_12);
        }
    }

    if (VAR_7 && VAR_7->modules) {
        for (VAR_9 = 0; VAR_9 < VAR_7->modules->len; VAR_9++) {
            VAR_8 = VAR_7->modules->pdata[VAR_9];
            if (VAR_8->stats != ((void*)0) && VAR_8->get_stats != ((void*)0)) {
                GHashTable *VAR_13 = ((void*)0);

                if (VAR_6 == ((void*)0)) {

                    VAR_13 = VAR_8->get_stats(VAR_8->stats);
                    if (VAR_13 != ((void*)0)) {
                        VAR_10 = VAR_3;
                    }

                    FUNC_8(VAR_5);
                    FUNC_3(VAR_13, VAR_4, VAR_5);
                    FUNC_11(VAR_5, -2, VAR_8->name);

                    FUNC_2(VAR_13);

                } else if (FUNC_1(VAR_6, "chassis") == 0) {

                    VAR_13 = FUNC_0(VAR_7->stats);
                    if (VAR_13 == ((void*)0)) {
                        VAR_10 = VAR_1;
                        break;
                    }
                    VAR_10 = VAR_3;

                    FUNC_3(VAR_13, VAR_4, VAR_5);
                    FUNC_2(VAR_13);
                    break;
                } else if (FUNC_1(VAR_6, VAR_8->name) == 0) {

                    VAR_13 = VAR_8->get_stats(VAR_8->stats);
                    if (VAR_13 == ((void*)0)) {
                        VAR_10 = VAR_1;
                        break;
                    }
                    VAR_10 = VAR_3;


                    FUNC_3(VAR_13, VAR_4, VAR_5);
                    FUNC_2(VAR_13);
                    break;
                }
            }
        }
    }

    if (!VAR_10) {
        FUNC_9(VAR_5, 1);
        FUNC_10(VAR_5);
        return 1;
    }
    return 1;
}
