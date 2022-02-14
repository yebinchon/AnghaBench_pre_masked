
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int header ;
struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, const char *VAR_1, int VAR_2, int *VAR_3)
{
    int VAR_4, VAR_5;
    uint8_t VAR_6[80];

    VAR_4 = FUNC_4(VAR_1);
    FUNC_2(VAR_6, ' ', sizeof(VAR_6));
    FUNC_1(VAR_6, VAR_1, VAR_4);

    VAR_6[8] = '=';
    VAR_6[9] = ' ';

    VAR_5 = FUNC_3(VAR_6 + 10, 70, "%d", VAR_2);
    FUNC_2(&VAR_6[VAR_5 + 10], ' ', sizeof(VAR_6) - (VAR_5 + 10));

    FUNC_0(VAR_0->pb, VAR_6, sizeof(VAR_6));
    *VAR_3 += 1;
    return 0;
}
