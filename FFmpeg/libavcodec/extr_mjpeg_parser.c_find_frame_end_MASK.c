
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int frame_start_found; int state; } ;
struct TYPE_5__ {int size; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ MJPEGParserContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(MJPEGParserContext *VAR_1, const uint8_t *VAR_2, int VAR_3){
    ParseContext *VAR_4= &VAR_1->pc;
    int VAR_5, VAR_6;
    uint32_t VAR_7;

    VAR_5= VAR_4->frame_start_found;
    VAR_7= VAR_4->state;

    VAR_6=0;
    if(!VAR_5){
        for(VAR_6=0; VAR_6<VAR_3;){
            VAR_7= (VAR_7<<8) | VAR_2[VAR_6];
            if(VAR_7>=0xFFC00000 && VAR_7<=0xFFFEFFFF){
                if(VAR_7>=0xFFD80000 && VAR_7<=0xFFD8FFFF){
                    VAR_6++;
                    VAR_5=1;
                    break;
                }else if(VAR_7<0xFFD00000 || VAR_7>0xFFD9FFFF){
                    VAR_1->size= (VAR_7&0xFFFF)-1;
                }
            }
            if(VAR_1->size>0){
                int VAR_8= FUNC_0(VAR_3-VAR_6, VAR_1->size);
                VAR_6+=VAR_8;
                VAR_1->size-=VAR_8;
                VAR_7=0;
                continue;
            }else
                VAR_6++;
        }
    }

    if(VAR_5){

        if (VAR_3 == 0)
            return 0;
        for(; VAR_6<VAR_3;){
            VAR_7= (VAR_7<<8) | VAR_2[VAR_6];
            if(VAR_7>=0xFFC00000 && VAR_7<=0xFFFEFFFF){
                if(VAR_7>=0xFFD80000 && VAR_7<=0xFFD8FFFF){
                    VAR_4->frame_start_found=0;
                    VAR_4->state=0;
                    return VAR_6-3;
                } else if(VAR_7<0xFFD00000 || VAR_7>0xFFD9FFFF){
                    VAR_1->size= (VAR_7&0xFFFF)-1;
                }
            }
            if(VAR_1->size>0){
                int VAR_9= FUNC_0(VAR_3-VAR_6, VAR_1->size);
                VAR_6+=VAR_9;
                VAR_1->size-=VAR_9;
                VAR_7=0;
                continue;
            }else
                VAR_6++;
        }
    }
    VAR_4->frame_start_found= VAR_5;
    VAR_4->state= VAR_7;
    return VAR_0;
}
