
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int recovery_frame_cnt; } ;
typedef TYPE_1__ H264SEIRecoveryPoint ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(H264SEIRecoveryPoint *VAR_3, GetBitContext *VAR_4, void *VAR_5)
{
    unsigned VAR_6 = FUNC_1(VAR_4);

    if (VAR_6 >= (1<<VAR_2)) {
        FUNC_0(VAR_5, VAR_1, "recovery_frame_cnt %u is out of range\n", VAR_6);
        return VAR_0;
    }

    VAR_3->recovery_frame_cnt = VAR_6;



    FUNC_2(VAR_4, 4);

    return 0;
}
