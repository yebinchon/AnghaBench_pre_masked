
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int surface; int display; int unif_tex; int unif_centre; int unif_offset; int unif_scale; int unif_color; int tex; int program; int buf; } ;
typedef int GLfloat ;
typedef TYPE_1__ CUBE_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,double,double,double,double) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(CUBE_STATE_T *VAR_6, GLfloat VAR_7, GLfloat VAR_8, GLfloat VAR_9, GLfloat VAR_10, GLfloat VAR_11)
{

        FUNC_3(VAR_3,0);

        FUNC_5(VAR_1|VAR_2);
        FUNC_0();

        FUNC_2(VAR_0, VAR_6->buf);
        FUNC_0();
        FUNC_12 ( VAR_6->program );
        FUNC_0();
        FUNC_4(VAR_4,VAR_6->tex);
        FUNC_0();
        FUNC_11(VAR_6->unif_color, 0.5, 0.5, 0.8, 1.0);
        FUNC_10(VAR_6->unif_scale, VAR_9, VAR_9);
        FUNC_10(VAR_6->unif_offset, VAR_10, VAR_11);
        FUNC_10(VAR_6->unif_centre, VAR_7, VAR_8);
        FUNC_9(VAR_6->unif_tex, 0);
        FUNC_0();

        FUNC_6 ( VAR_5, 0, 4 );
        FUNC_0();

        FUNC_2(VAR_0, 0);

        FUNC_8();
        FUNC_7();
        FUNC_0();

        FUNC_1(VAR_6->display, VAR_6->surface);
        FUNC_0();
}
