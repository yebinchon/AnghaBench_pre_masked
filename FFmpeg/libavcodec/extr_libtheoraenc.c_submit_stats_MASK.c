
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stats_size; int stats_offset; scalar_t__ stats; int t_state; } ;
typedef TYPE_1__ TheoraContext ;
struct TYPE_6__ {int stats_in; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_6)
{
    FUNC_2(VAR_6, VAR_1, "libtheora too old to support 2pass\n");
    return FUNC_0(VAR_4);

}
