
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int reference; } ;
struct TYPE_8__ {int pic_id; } ;
typedef TYPE_1__ H264Ref ;
typedef TYPE_2__ H264Picture ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(H264Ref *VAR_1, H264Picture *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = !!(VAR_2->reference & VAR_3);

    if (VAR_5) {
        FUNC_1(VAR_1, VAR_2);
        if (VAR_3 != VAR_0) {
            FUNC_0(VAR_1, VAR_3);
            VAR_1->pic_id *= 2;
            VAR_1->pic_id += VAR_4;
        }
    }

    return VAR_5;
}
