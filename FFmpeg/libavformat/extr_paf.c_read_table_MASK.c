
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        VAR_1[VAR_3] = FUNC_1(VAR_0->pb);

    FUNC_2(VAR_0->pb, 4 * (FUNC_0(VAR_2, 512) - VAR_2));
}
