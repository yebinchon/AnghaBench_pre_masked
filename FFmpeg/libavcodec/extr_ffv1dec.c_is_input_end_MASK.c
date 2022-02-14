
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ overread; } ;
struct TYPE_5__ {scalar_t__ ac; int gb; TYPE_1__ c; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ FFV1Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(FFV1Context *VAR_3)
{
    if (VAR_3->ac != VAR_0) {
        RangeCoder *const VAR_4 = &VAR_3->c;
        if (VAR_4->overread > VAR_2)
            return VAR_1;
    } else {
        if (FUNC_0(&VAR_3->gb) < 1)
            return VAR_1;
    }
    return 0;
}
