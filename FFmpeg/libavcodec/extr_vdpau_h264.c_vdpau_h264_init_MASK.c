
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VdpDecoderProfile ;
struct TYPE_4__ {int level; int profile; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_9)
{
    VdpDecoderProfile VAR_10;
    uint32_t VAR_11 = VAR_9->level;

    switch (VAR_9->profile & ~VAR_1) {
    case 136:
        VAR_10 = VAR_3;
        break;
    case 134:




    case 128:
        VAR_10 = VAR_8;
        break;
    case 132:
        VAR_10 = VAR_6;
        break;





    case 131:


        VAR_10 = VAR_6;
        break;







    default:
        return FUNC_0(VAR_0);
    }

    if ((VAR_9->profile & VAR_1) && VAR_9->level == 11)
        VAR_11 = VAR_2;

    return FUNC_1(VAR_9, VAR_10, VAR_11);
}
