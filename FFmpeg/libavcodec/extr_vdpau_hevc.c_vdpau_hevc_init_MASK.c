
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VdpDecoderProfile ;
struct TYPE_4__ {int profile; int level; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_5)
{
    VdpDecoderProfile VAR_6;
    uint32_t VAR_7 = VAR_5->level;

    switch (VAR_5->profile) {
    case 131:
        VAR_6 = VAR_1;
        break;
    case 130:
        VAR_6 = VAR_2;
        break;
    case 129:
        VAR_6 = VAR_4;
        break;
    case 128:
        VAR_6 = VAR_3;
        break;
    default:
        return FUNC_0(VAR_0);
    }

    return FUNC_1(VAR_5, VAR_6, VAR_7);
}
