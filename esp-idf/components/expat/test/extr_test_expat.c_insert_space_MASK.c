
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int output_off; char* output; int depth; } ;
typedef TYPE_1__ user_data_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(user_data_t *VAR_0)
{
    const char VAR_1[] = "    ";

    FUNC_0(sizeof(VAR_0->output) >= VAR_0->output_off);
    VAR_0->output[VAR_0->output_off++] = '\n';

    for (int VAR_2 = 0; VAR_2 < VAR_0->depth; VAR_2++) {
        for (int VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); ++VAR_3) {
            FUNC_0(sizeof(VAR_0->output) >= VAR_0->output_off);
            VAR_0->output[VAR_0->output_off++] = VAR_1[VAR_3];
        }
    }
}
