
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ end; scalar_t__ start; scalar_t__ pos; int h; } ;
typedef TYPE_2__ SubfileContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int64_t FUNC_3(URLContext *VAR_3, int64_t VAR_4, int VAR_5)
{
    SubfileContext *VAR_6 = VAR_3->priv_data;
    int64_t VAR_7, VAR_8;
    int VAR_9;

    if (VAR_5 == VAR_0 || VAR_5 == 129) {
        VAR_8 = VAR_6->end;
        if (VAR_8 == VAR_2 && (VAR_8 = FUNC_1(VAR_6->h, 0, VAR_0)) < 0)
            return VAR_8;
    }

    if (VAR_5 == VAR_0)
        return VAR_8 - VAR_6->start;
    switch (VAR_5) {
    case 128:
        VAR_7 = VAR_6->start + VAR_4;
        break;
    case 130:
        VAR_7 = VAR_6->pos + VAR_4;
        break;
    case 129:
        VAR_7 = VAR_8 + VAR_4;
        break;
    }
    if (VAR_7 < VAR_6->start)
        return FUNC_0(VAR_1);
    VAR_6->pos = VAR_7;
    if ((VAR_9 = FUNC_2(VAR_3)) < 0)
        return VAR_9;
    return VAR_6->pos - VAR_6->start;
}
