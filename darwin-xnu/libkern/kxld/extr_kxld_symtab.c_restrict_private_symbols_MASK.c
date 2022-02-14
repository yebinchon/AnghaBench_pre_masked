
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {int name; } ;
typedef int KXLDSymtabIterator ;
typedef int KXLDSymtab ;
typedef TYPE_1__ KXLDSym ;


 int VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 size_t FUNC_0 (char const**) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void
FUNC_5(KXLDSymtab *VAR_7)
{
    const char *VAR_8[] = {
        VAR_1,
        VAR_5,
        VAR_4,
        VAR_3,
        VAR_2
    };
    KXLDSymtabIterator VAR_9;
    KXLDSym *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);
    u_int VAR_12 = 0;

    FUNC_3(&VAR_9, VAR_7, VAR_6, VAR_0);
    while ((VAR_10 = FUNC_2(&VAR_9))) {
        for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); ++VAR_12) {
            VAR_11 = VAR_8[VAR_12];
            if (!FUNC_4(VAR_10->name, VAR_11)) {
                continue;
            }

            FUNC_1(VAR_10);
        }
    }
}
