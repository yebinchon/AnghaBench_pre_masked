
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int table; int nchannels; int (* remap ) (int **,int,int ,int ) ;scalar_t__ remap_needed; } ;
typedef TYPE_1__ hb_audio_remap_t ;


 int FUNC_0 (int **,int,int ,int ) ;

void FUNC_1(hb_audio_remap_t *VAR_0, uint8_t **VAR_1, int VAR_2)
{
    if (VAR_0 != ((void*)0) && VAR_0->remap_needed)
    {
        VAR_0->remap(VAR_1, VAR_2, VAR_0->nchannels, VAR_0->table);
    }
}
