
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int audio_volume; } ;
typedef TYPE_1__ VideoState ;


 int VAR_0 ;
 double FUNC_0 (int,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (double,double) ;

__attribute__((used)) static void FUNC_4(VideoState *VAR_1, int VAR_2, double VAR_3)
{
    double VAR_4 = VAR_1->audio_volume ? (20 * FUNC_1(VAR_1->audio_volume / (double)VAR_0) / FUNC_1(10)) : -1000.0;
    int VAR_5 = FUNC_2(VAR_0 * FUNC_3(10.0, (VAR_4 + VAR_2 * VAR_3) / 20.0));
    VAR_1->audio_volume = FUNC_0(VAR_1->audio_volume == VAR_5 ? (VAR_1->audio_volume + VAR_2) : VAR_5, 0, VAR_0);
}
