
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ q_scale_type; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int* VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_1)
{
    int VAR_2 = FUNC_0(&VAR_1->gb, 5);
    if (VAR_1->q_scale_type)
        return VAR_0[VAR_2];
    else
        return VAR_2 << 1;
}
