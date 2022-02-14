
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ recording_time; } ;
struct TYPE_8__ {size_t file_index; TYPE_1__* enc_ctx; scalar_t__ first_pts; scalar_t__ sync_opts; } ;
struct TYPE_7__ {int time_base; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFile ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static int FUNC_2(OutputStream *VAR_3)
{
    OutputFile *VAR_4 = VAR_2[VAR_3->file_index];

    if (VAR_4->recording_time != VAR_1 &&
        FUNC_0(VAR_3->sync_opts - VAR_3->first_pts, VAR_3->enc_ctx->time_base, VAR_4->recording_time,
                      VAR_0) >= 0) {
        FUNC_1(VAR_3);
        return 0;
    }
    return 1;
}
