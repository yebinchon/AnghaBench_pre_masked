
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_5__ {int stats_offset; void* stats; int stats_size; int t_state; } ;
typedef TYPE_1__ TheoraContext ;
struct TYPE_6__ {int stats_out; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,void*,int) ;
 void* FUNC_3 (void*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*,int *,int) ;
 int FUNC_7 (int ,int ,int **,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_5, int VAR_6)
{
    FUNC_4(VAR_5, VAR_1, "libtheora too old to support 2pass\n");
    return FUNC_0(VAR_3);

}
