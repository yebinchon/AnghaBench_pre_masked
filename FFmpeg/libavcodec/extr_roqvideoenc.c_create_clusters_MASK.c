
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int linesize; int data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_1(const AVFrame *VAR_0, int VAR_1, int VAR_2, uint8_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_4=0; VAR_4<VAR_2; VAR_4+=4)
        for (VAR_5=0; VAR_5<VAR_1; VAR_5+=4) {
            for (VAR_6=0; VAR_6 < 2; VAR_6++)
                for (VAR_7=0; VAR_7 < 2; VAR_7++)
                    FUNC_0(VAR_3 + (VAR_7 + 2*VAR_6)*6, VAR_0->data,
                                        VAR_4+2*VAR_6, VAR_5+2*VAR_7, VAR_0->linesize);
            VAR_3 += 24;
        }
}
