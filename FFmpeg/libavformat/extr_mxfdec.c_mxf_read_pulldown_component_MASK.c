
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int input_segment_ref; } ;
typedef TYPE_1__ MXFPulldownComponent ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFPulldownComponent *VAR_6 = VAR_0;
    switch(VAR_2) {
    case 0x0d01:
        FUNC_0(VAR_1, VAR_6->input_segment_ref, 16);
        break;
    }
    return 0;
}
