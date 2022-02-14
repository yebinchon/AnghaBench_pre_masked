
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int seekable; } ;
struct TYPE_8__ {int frames; } ;
typedef TYPE_1__ RCVContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    RCVContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;

    if (VAR_2->pb->seekable & VAR_0) {
        FUNC_1(VAR_4, 0, VAR_1);
        FUNC_2(VAR_4, VAR_3->frames);
        FUNC_0(VAR_4);
    }
    return 0;
}
