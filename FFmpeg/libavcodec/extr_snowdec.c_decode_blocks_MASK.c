
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bytestream; scalar_t__ bytestream_end; } ;
struct TYPE_6__ {int b_width; int b_height; TYPE_1__ c; } ;
typedef TYPE_2__ SnowContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(SnowContext *VAR_1){
    int VAR_2, VAR_3;
    int VAR_4= VAR_1->b_width;
    int VAR_5= VAR_1->b_height;
    int VAR_6;

    for(VAR_3=0; VAR_3<VAR_5; VAR_3++){
        for(VAR_2=0; VAR_2<VAR_4; VAR_2++){
            if (VAR_1->c.bytestream >= VAR_1->c.bytestream_end)
                return VAR_0;
            if ((VAR_6 = FUNC_0(VAR_1, 0, VAR_2, VAR_3)) < 0)
                return VAR_6;
        }
    }
    return 0;
}
