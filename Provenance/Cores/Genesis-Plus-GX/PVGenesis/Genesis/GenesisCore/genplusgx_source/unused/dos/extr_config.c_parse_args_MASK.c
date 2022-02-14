
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* token; int value; } ;
struct TYPE_5__ {int video_depth; int skip; void* remap; int joy_driver; void* swap; void* sndrate; void* sndcard; void* sound; void* throttle; void* vsync; void* scale; void* scanlines; void* video_height; void* video_width; int video_driver; } ;
struct TYPE_4__ {char* token; int value; } ;


 void* FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_2 ;

void FUNC_3(int VAR_3, char **VAR_4)
{
    int VAR_5, VAR_6;

    for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 1)
    {
        if(FUNC_2("-vdriver", VAR_4[VAR_5]) == 0)
        {
            for(VAR_6 = 0; VAR_2[VAR_6].token != ((void*)0); VAR_6 += 1)
            {
                if(FUNC_2(VAR_4[VAR_5+1], VAR_2[VAR_6].token) == 0)
                {
                    VAR_1.video_driver = VAR_2[VAR_6].value;
                }
            }
        }

        if(FUNC_2("-res", VAR_4[VAR_5]) == 0)
        {
            VAR_1.video_width = FUNC_0(VAR_4[VAR_5+1]);
            VAR_1.video_height = FUNC_0(VAR_4[VAR_5+2]);
        }

        if(FUNC_2("-depth", VAR_4[VAR_5]) == 0)
        {
            VAR_1.video_depth = FUNC_0(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-remap", VAR_4[VAR_5]) == 0)
        {
            VAR_1.remap = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-scanlines", VAR_4[VAR_5]) == 0)
        {
            VAR_1.scanlines = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-scale", VAR_4[VAR_5]) == 0)
        {
            VAR_1.scale = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-vsync", VAR_4[VAR_5]) == 0)
        {
            VAR_1.vsync = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-throttle", VAR_4[VAR_5]) == 0)
        {
            VAR_1.throttle = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-skip", VAR_4[VAR_5]) == 0)
        {
            VAR_1.skip = FUNC_0(VAR_4[VAR_5+1]);
            if(!VAR_1.skip) VAR_1.skip = 1;
        }

        if(FUNC_2("-sound", VAR_4[VAR_5]) == 0)
        {
            VAR_1.sound = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-sndcard", VAR_4[VAR_5]) == 0)
        {
            VAR_1.sndcard = FUNC_0(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-sndrate", VAR_4[VAR_5]) == 0)
        {
            VAR_1.sndrate = FUNC_0(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-swap", VAR_4[VAR_5]) == 0)
        {
            VAR_1.swap = FUNC_1(VAR_4[VAR_5+1]);
        }

        if(FUNC_2("-joy", VAR_4[VAR_5]) == 0)
        {
            for(VAR_6 = 0; VAR_0[VAR_6].token != ((void*)0); VAR_6 += 1)
            {
                if(FUNC_2(VAR_4[VAR_5+1], VAR_0[VAR_6].token) == 0)
                {
                    VAR_1.joy_driver = VAR_0[VAR_6].value;
                }
            }
        }
    }

   if(VAR_1.remap) VAR_1.video_depth = 8;
}
