
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int den; scalar_t__ num; } ;
struct TYPE_4__ {TYPE_1__ packet_scale; } ;


 int FUNC_0 (int,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = FUNC_1(VAR_1);

    if (VAR_5 < 0)
        return VAR_5;

    VAR_4 = ((VAR_3 + 15) / 16) * ((VAR_2 + 15) / 16) * (int64_t)VAR_0[VAR_5].packet_scale.num / VAR_0[VAR_5].packet_scale.den;
    VAR_4 = (VAR_4 + 2048) / 4096 * 4096;

    return FUNC_0(VAR_4, 8192);
}
