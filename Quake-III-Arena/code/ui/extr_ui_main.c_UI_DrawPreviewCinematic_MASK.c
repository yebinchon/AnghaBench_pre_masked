
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int h; int w; int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_5__ {int previewMovie; size_t movieIndex; int * movieList; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5) {
 if (VAR_2.previewMovie > -2) {
  VAR_2.previewMovie = FUNC_1(FUNC_4("%s.roq", VAR_2.movieList[VAR_2.movieIndex]), 0, 0, 0, 0, (VAR_0 | VAR_1) );
  if (VAR_2.previewMovie >= 0) {
    FUNC_2(VAR_2.previewMovie);
   FUNC_3(VAR_2.previewMovie, VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h);
    FUNC_0(VAR_2.previewMovie);
  } else {
   VAR_2.previewMovie = -2;
  }
 }

}
