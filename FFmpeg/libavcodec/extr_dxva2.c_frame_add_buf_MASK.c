
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* buf; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVFrame *VAR_3, AVBufferRef *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (!VAR_3->buf[VAR_5]) {
            VAR_3->buf[VAR_5] = FUNC_1(VAR_4);
            return VAR_3->buf[VAR_5] ? 0 : FUNC_0(VAR_2);
        }
    }



    return FUNC_0(VAR_1);
}
