
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct cfil_db* so_cfil_db; } ;
struct cfil_db {int * cfdb_hashbase; int cfdb_hashmask; struct socket* cfdb_so; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cfil_db*,int) ;
 int VAR_4 ;
 int * FUNC_2 (int ,int ,int *) ;
 struct cfil_db* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct cfil_db*) ;

errno_t
FUNC_5(struct socket *VAR_5)
{
    errno_t VAR_6 = 0;
    struct cfil_db *VAR_7 = ((void*)0);

    FUNC_0(VAR_2, "");

    VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 == ((void*)0)) {
        VAR_6 = VAR_1;
        goto done;
    }
    FUNC_1(VAR_7, sizeof(struct cfil_db));
    VAR_7->cfdb_so = VAR_5;
    VAR_7->cfdb_hashbase = FUNC_2(VAR_0, VAR_3, &VAR_7->cfdb_hashmask);
    if (VAR_7->cfdb_hashbase == ((void*)0)) {
        FUNC_4(VAR_4, VAR_7);
        VAR_7 = ((void*)0);
        VAR_6 = VAR_1;
        goto done;
    }

    VAR_5->so_cfil_db = VAR_7;

done:
    return (VAR_6);
}
