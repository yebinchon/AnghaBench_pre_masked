
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int frame_start_found; int state; } ;
typedef TYPE_1__ ParseContext ;


 int VAR_0 ;

int FUNC_0(ParseContext *VAR_1, const uint8_t *VAR_2, int VAR_3){
    int VAR_4, VAR_5;
    uint32_t VAR_6;

    VAR_4= VAR_1->frame_start_found;
    VAR_6= VAR_1->state;

    VAR_5=0;
    if(!VAR_4){
        for(VAR_5=0; VAR_5<VAR_3; VAR_5++){
            VAR_6= (VAR_6<<8) | VAR_2[VAR_5];
            if(VAR_6>>(32-22) == 0x20){
                VAR_5++;
                VAR_4=1;
                break;
            }
        }
    }

    if(VAR_4){
      for(; VAR_5<VAR_3; VAR_5++){
        VAR_6= (VAR_6<<8) | VAR_2[VAR_5];
        if(VAR_6>>(32-22) == 0x20){
            VAR_1->frame_start_found=0;
            VAR_1->state=-1;
            return VAR_5-3;
        }
      }
    }
    VAR_1->frame_start_found= VAR_4;
    VAR_1->state= VAR_6;

    return VAR_0;
}
