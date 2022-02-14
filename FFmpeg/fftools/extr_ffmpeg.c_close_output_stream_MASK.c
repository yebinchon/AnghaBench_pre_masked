
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int recording_time; scalar_t__ shortest; } ;
struct TYPE_7__ {size_t file_index; TYPE_1__* enc_ctx; scalar_t__ first_pts; scalar_t__ sync_opts; int finished; } ;
struct TYPE_6__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static void FUNC_2(OutputStream *VAR_3)
{
    OutputFile *VAR_4 = VAR_2[VAR_3->file_index];

    VAR_3->finished |= VAR_1;
    if (VAR_4->shortest) {
        int64_t VAR_5 = FUNC_1(VAR_3->sync_opts - VAR_3->first_pts, VAR_3->enc_ctx->time_base, VAR_0);
        VAR_4->recording_time = FUNC_0(VAR_4->recording_time, VAR_5);
    }
}
