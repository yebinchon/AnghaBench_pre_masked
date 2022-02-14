
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double d; } ;
struct unit_value {int unit; TYPE_1__ val; } ;
typedef double int64_t ;
typedef int buf ;
typedef int WriterContext ;
typedef int AVRational ;


 double VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int const) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,struct unit_value) ;
 int FUNC_2 (int *,char const*,char*,int ) ;

__attribute__((used)) static void FUNC_3(WriterContext *VAR_3, const char *VAR_4,
                              int64_t VAR_5, const AVRational *VAR_6, int VAR_7)
{
    char VAR_8[128];

    if ((!VAR_7 && VAR_5 == VAR_0) || (VAR_7 && VAR_5 == 0)) {
        FUNC_2(VAR_3, VAR_4, "N/A", VAR_1);
    } else {
        double VAR_9 = VAR_5 * FUNC_0(*VAR_6);
        struct unit_value VAR_10;
        VAR_10.val.d = VAR_9;
        VAR_10.unit = VAR_2;
        FUNC_1(VAR_8, sizeof(VAR_8), VAR_10);
        FUNC_2(VAR_3, VAR_4, VAR_8, 0);
    }
}
