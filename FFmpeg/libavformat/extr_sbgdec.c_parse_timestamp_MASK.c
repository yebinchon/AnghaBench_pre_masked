
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbg_timestamp {char type; scalar_t__ t; } ;
struct sbg_parser {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sbg_parser*,char) ;
 scalar_t__ FUNC_1 (struct sbg_parser*,char*,int) ;
 int FUNC_2 (struct sbg_parser*) ;
 int FUNC_3 (struct sbg_parser*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct sbg_parser *VAR_1,
                               struct sbg_timestamp *VAR_2, int64_t *VAR_3)
{
    int64_t VAR_4 = 0, VAR_5 = 0, VAR_6;
    char VAR_7 = 0;
    int VAR_8;

    if (FUNC_1(VAR_1, "NOW", 3)) {
        VAR_7 = 'N';
        VAR_8 = 1;
    } else {
        VAR_8 = FUNC_3(VAR_1, &VAR_4);
        if (VAR_8)
            VAR_7 = 'T';
    }
    while (FUNC_0(VAR_1, '+')) {
        if (!FUNC_3(VAR_1, &VAR_6))
            return VAR_0;
        VAR_5 += VAR_6;
        VAR_8 = 1;
    }
    if (VAR_8) {
        if (!FUNC_2(VAR_1))
            return VAR_0;
        VAR_2->type = VAR_7;
        VAR_2->t = VAR_4;
        *VAR_3 = VAR_5;
    }
    return VAR_8;
}
