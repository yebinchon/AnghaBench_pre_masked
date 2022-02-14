
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max_frame_duration; int vidclk; } ;
typedef TYPE_1__ VideoState ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 double FUNC_0 (int ,double) ;
 double FUNC_1 (int ,double) ;
 int FUNC_2 (int *,int ,char*,double,double) ;
 scalar_t__ FUNC_3 (double) ;
 double FUNC_4 (int *) ;
 double FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (double) ;

__attribute__((used)) static double FUNC_8(double VAR_5, VideoState *VAR_6)
{
    double VAR_7, VAR_8 = 0;


    if (FUNC_6(VAR_6) != VAR_4) {


        VAR_8 = FUNC_4(&VAR_6->vidclk) - FUNC_5(VAR_6);




        VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_2, VAR_5));
        if (!FUNC_7(VAR_8) && FUNC_3(VAR_8) < VAR_6->max_frame_duration) {
            if (VAR_8 <= -VAR_7)
                VAR_5 = FUNC_0(0, VAR_5 + VAR_8);
            else if (VAR_8 >= VAR_7 && VAR_5 > VAR_1)
                VAR_5 = VAR_5 + VAR_8;
            else if (VAR_8 >= VAR_7)
                VAR_5 = 2 * VAR_5;
        }
    }

    FUNC_2(((void*)0), VAR_0, "video: delay=%0.3f A-V=%f\n",
            VAR_5, -VAR_8);

    return VAR_5;
}
