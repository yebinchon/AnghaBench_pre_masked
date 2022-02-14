
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dts_shift; } ;
typedef TYPE_1__ MOVStreamContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(MOVStreamContext *VAR_3, int VAR_4, void *VAR_5)
{
    if (VAR_4 < 0) {
        if (VAR_4 == VAR_2) {
            FUNC_1(VAR_5, VAR_0, "mov_update_dts_shift(): dts_shift set to %d\n", VAR_1);
            VAR_4++;
        }
        VAR_3->dts_shift = FUNC_0(VAR_3->dts_shift, -VAR_4);
    }
}
