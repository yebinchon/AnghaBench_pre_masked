
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_3__ {void* den; void* num; } ;
struct TYPE_4__ {int sequence_ref; TYPE_1__ edit_rate; int name; int track_number; void* track_id; } ;
typedef TYPE_2__ MXFTrack ;
typedef int AVIOContext ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFTrack *VAR_6 = VAR_0;
    switch(VAR_2) {
    case 0x4801:
        VAR_6->track_id = FUNC_0(VAR_1);
        break;
    case 0x4804:
        FUNC_1(VAR_1, VAR_6->track_number, 4);
        break;
    case 0x4802:
        FUNC_2(VAR_1, VAR_3, &VAR_6->name);
        break;
    case 0x4b01:
        VAR_6->edit_rate.num = FUNC_0(VAR_1);
        VAR_6->edit_rate.den = FUNC_0(VAR_1);
        break;
    case 0x4803:
        FUNC_1(VAR_1, VAR_6->sequence_ref, 16);
        break;
    }
    return 0;
}
