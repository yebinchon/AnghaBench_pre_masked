
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int out_time; int in_time; int clip_id; } ;
struct TYPE_4__ {int clip_count; TYPE_2__* clips; } ;
typedef TYPE_1__ BLURAY_TITLE_INFO ;
typedef TYPE_2__ BLURAY_CLIP_INFO ;


 int FUNC_0 (char*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1( BLURAY_TITLE_INFO * VAR_0 )
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->clip_count; VAR_1++)
    {
        BLURAY_CLIP_INFO * VAR_2 = &VAR_0->clips[VAR_1];
        int64_t VAR_3 = VAR_2->out_time - VAR_2->in_time;
        int VAR_4, VAR_5, VAR_6;

        VAR_4 = VAR_3 / (90000 * 60 * 60);
        VAR_5 = (VAR_3 / (90000 * 60)) % 60;
        VAR_6 = (VAR_3 / 90000) % 60;
        FUNC_0("bd:\t\t%s.M2TS -- Duration: %02d:%02d:%02d",
               VAR_0->clips[VAR_1].clip_id, VAR_4, VAR_5, VAR_6);
    }
}
