
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_intervals {int dummy; } ;
struct sbg_script {int sample_rate; } ;
typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int**) ;
 int VAR_0 ;
 int FUNC_2 (struct ws_intervals*,int ,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct ws_intervals *VAR_1, struct sbg_script *VAR_2,
                    int64_t VAR_3, int64_t VAR_4, int32_t VAR_5, int32_t VAR_6)
{


    int32_t VAR_7[][2] = {
        { 2, VAR_6 },
        { 4, VAR_6 - VAR_6 / 4 },
        { 8, VAR_6 / 2 },
        { 16, VAR_6 / 4 },
        { 25, VAR_6 / 10 },
        { 50, VAR_6 / 80 },
        { 75, 0 },
    };
    int VAR_8, VAR_9;
    int64_t VAR_10 = VAR_2->sample_rate / 20, VAR_11 = VAR_3, VAR_12;
    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_7); VAR_8++) {
        VAR_12 = FUNC_0(VAR_4, VAR_3 + VAR_7[VAR_8][0] * VAR_10);
        VAR_9 = FUNC_2(VAR_1, VAR_0, 3, -1,
                         VAR_11, VAR_5, VAR_6, VAR_12, VAR_5, VAR_7[VAR_8][1]);
        if (VAR_9 < 0)
            return VAR_9;
        VAR_11 = VAR_12;
        VAR_6 = VAR_7[VAR_8][1];
    }
    return 0;
}
