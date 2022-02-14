
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {double speed; } ;
struct TYPE_7__ {scalar_t__ nb_packets; } ;
struct TYPE_6__ {scalar_t__ nb_packets; } ;
struct TYPE_8__ {scalar_t__ video_stream; scalar_t__ audio_stream; TYPE_4__ extclk; TYPE_2__ audioq; TYPE_1__ videoq; } ;
typedef TYPE_3__ VideoState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 double FUNC_0 (int ,double) ;
 double FUNC_1 (int ,double) ;
 double FUNC_2 (double) ;
 int FUNC_3 (TYPE_4__*,double) ;

__attribute__((used)) static void FUNC_4(VideoState *VAR_5) {
   if (VAR_5->video_stream >= 0 && VAR_5->videoq.nb_packets <= VAR_1 ||
       VAR_5->audio_stream >= 0 && VAR_5->audioq.nb_packets <= VAR_1) {
       FUNC_3(&VAR_5->extclk, FUNC_0(VAR_3, VAR_5->extclk.speed - VAR_4));
   } else if ((VAR_5->video_stream < 0 || VAR_5->videoq.nb_packets > VAR_0) &&
              (VAR_5->audio_stream < 0 || VAR_5->audioq.nb_packets > VAR_0)) {
       FUNC_3(&VAR_5->extclk, FUNC_1(VAR_2, VAR_5->extclk.speed + VAR_4));
   } else {
       double VAR_6 = VAR_5->extclk.speed;
       if (VAR_6 != 1.0)
           FUNC_3(&VAR_5->extclk, VAR_6 + VAR_4 * (1.0 - VAR_6) / FUNC_2(1.0 - VAR_6));
   }
}
