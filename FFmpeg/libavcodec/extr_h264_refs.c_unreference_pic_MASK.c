
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** delayed_pic; } ;
struct TYPE_5__ {int reference; } ;
typedef TYPE_1__ H264Picture ;
typedef TYPE_2__ H264Context ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(H264Context *VAR_1, H264Picture *VAR_2, int VAR_3)
{
    int VAR_4;
    if (VAR_2->reference &= VAR_3) {
        return 0;
    } else {
        for(VAR_4 = 0; VAR_1->delayed_pic[VAR_4]; VAR_4++)
            if(VAR_2 == VAR_1->delayed_pic[VAR_4]){
                VAR_2->reference = VAR_0;
                break;
            }
        return 1;
    }
}
