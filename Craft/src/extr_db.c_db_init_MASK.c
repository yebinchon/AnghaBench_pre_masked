
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char const*,int *,int *,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,char const*,int,int *,int *) ;

int FUNC_4(char *VAR_12) {
    if (!VAR_1) {
        return 0;
    }
    static const char *VAR_13 =
        "attach database 'auth.db' as auth;"
        "create table if not exists auth.identity_token ("
        "   username text not null,"
        "   token text not null,"
        "   selected int not null"
        ");"
        "create unique index if not exists auth.identity_token_username_idx"
        "   on identity_token (username);"
        "create table if not exists state ("
        "   x float not null,"
        "   y float not null,"
        "   z float not null,"
        "   rx float not null,"
        "   ry float not null"
        ");"
        "create table if not exists block ("
        "    p int not null,"
        "    q int not null,"
        "    x int not null,"
        "    y int not null,"
        "    z int not null,"
        "    w int not null"
        ");"
        "create table if not exists light ("
        "    p int not null,"
        "    q int not null,"
        "    x int not null,"
        "    y int not null,"
        "    z int not null,"
        "    w int not null"
        ");"
        "create table if not exists key ("
        "    p int not null,"
        "    q int not null,"
        "    key int not null"
        ");"
        "create table if not exists sign ("
        "    p int not null,"
        "    q int not null,"
        "    x int not null,"
        "    y int not null,"
        "    z int not null,"
        "    face int not null,"
        "    text text not null"
        ");"
        "create unique index if not exists block_pqxyz_idx on block (p, q, x, y, z);"
        "create unique index if not exists light_pqxyz_idx on light (p, q, x, y, z);"
        "create unique index if not exists key_pq_idx on key (p, q);"
        "create unique index if not exists sign_xyzface_idx on sign (x, y, z, face);"
        "create index if not exists sign_pq_idx on sign (p, q);";
    static const char *VAR_14 =
        "insert or replace into block (p, q, x, y, z, w) "
        "values (?, ?, ?, ?, ?, ?);";
    static const char *VAR_15 =
        "insert or replace into light (p, q, x, y, z, w) "
        "values (?, ?, ?, ?, ?, ?);";
    static const char *VAR_16 =
        "insert or replace into sign (p, q, x, y, z, face, text) "
        "values (?, ?, ?, ?, ?, ?, ?);";
    static const char *VAR_17 =
        "delete from sign where x = ? and y = ? and z = ? and face = ?;";
    static const char *VAR_18 =
        "delete from sign where x = ? and y = ? and z = ?;";
    static const char *VAR_19 =
        "select x, y, z, w from block where p = ? and q = ?;";
    static const char *VAR_20 =
        "select x, y, z, w from light where p = ? and q = ?;";
    static const char *VAR_21 =
        "select x, y, z, face, text from sign where p = ? and q = ?;";
    static const char *VAR_22 =
        "select key from key where p = ? and q = ?;";
    static const char *VAR_23 =
        "insert or replace into key (p, q, key) "
        "values (?, ?, ?);";
    int VAR_24;
    VAR_24 = FUNC_2(VAR_12, &VAR_0);
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_1(VAR_0, VAR_13, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(
        VAR_0, VAR_14, -1, &VAR_5, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(
        VAR_0, VAR_15, -1, &VAR_6, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(
        VAR_0, VAR_16, -1, &VAR_7, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(
        VAR_0, VAR_17, -1, &VAR_2, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(
        VAR_0, VAR_18, -1, &VAR_3, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(VAR_0, VAR_19, -1, &VAR_8, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(VAR_0, VAR_20, -1, &VAR_9, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(VAR_0, VAR_21, -1, &VAR_10, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(VAR_0, VAR_22, -1, &VAR_4, ((void*)0));
    if (VAR_24) return VAR_24;
    VAR_24 = FUNC_3(VAR_0, VAR_23, -1, &VAR_11, ((void*)0));
    if (VAR_24) return VAR_24;
    FUNC_1(VAR_0, "begin;", ((void*)0), ((void*)0), ((void*)0));
    FUNC_0();
    return 0;
}
