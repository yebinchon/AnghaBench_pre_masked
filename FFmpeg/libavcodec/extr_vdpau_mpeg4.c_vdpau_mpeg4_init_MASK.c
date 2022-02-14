
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VdpDecoderProfile ;
struct TYPE_4__ {int profile; int level; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_3)
{
    VdpDecoderProfile VAR_4;

    switch (VAR_3->profile) {
    case 129:
        VAR_4 = VAR_2;
        break;


    case 128:
    case 130:
        VAR_4 = VAR_1;
        break;
    default:
        return FUNC_0(VAR_0);
    }

    return FUNC_1(VAR_3, VAR_4, VAR_3->level);
}
