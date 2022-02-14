
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num; int den; } ;
struct TYPE_8__ {TYPE_2__* par; } ;
struct TYPE_6__ {int den; int num; } ;
struct TYPE_7__ {TYPE_1__ sample_aspect_ratio; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ AVRational ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, MOVTrack *VAR_2)
{
    AVRational VAR_3;
    FUNC_0(&VAR_3.num, &VAR_3.den, VAR_2->par->sample_aspect_ratio.num,
              VAR_2->par->sample_aspect_ratio.den, VAR_0);

    FUNC_1(VAR_1, 16);
    FUNC_2(VAR_1, "pasp");
    FUNC_1(VAR_1, VAR_3.num);
    FUNC_1(VAR_1, VAR_3.den);
    return 16;
}
