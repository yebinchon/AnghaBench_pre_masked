
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_0)
{
    if (FUNC_0(&VAR_0->gb))
        return 1 - (FUNC_0(&VAR_0->gb) << 1);
    else
        return 0;
}
