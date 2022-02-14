
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Type ;
struct TYPE_4__ {char* sval; } ;
typedef TYPE_1__ Token ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,long) ;
 int FUNC_1 (TYPE_1__*,char*,char,char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 long FUNC_4 (char*,char**,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static Node *FUNC_5(Token *VAR_7) {
    char *VAR_8 = VAR_7->sval;
    char *VAR_9;
    long VAR_10 = !FUNC_3(VAR_8, "0b", 2)
        ? FUNC_4(VAR_8 + 2, &VAR_9, 2) : FUNC_4(VAR_8, &VAR_9, 0);
    Type *VAR_11 = FUNC_2(VAR_9);
    if (VAR_11)
        return FUNC_0(VAR_11, VAR_10);
    if (*VAR_9 != '\0')
        FUNC_1(VAR_7, "invalid character '%c': %s", *VAR_9, VAR_8);



    bool VAR_12 = (*VAR_8 != '0');
    if (VAR_12) {
        VAR_11 = !(VAR_10 & ~(long)VAR_0) ? VAR_3 : VAR_4;
        return FUNC_0(VAR_11, VAR_10);
    }

    VAR_11 = !(VAR_10 & ~(unsigned long)VAR_0) ? VAR_3
        : !(VAR_10 & ~(unsigned long)VAR_2) ? VAR_5
        : !(VAR_10 & ~(unsigned long)VAR_1) ? VAR_4
        : VAR_6;
    return FUNC_0(VAR_11, VAR_10);
}
