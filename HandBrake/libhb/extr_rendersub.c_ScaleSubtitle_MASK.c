
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int sws_width; int sws_height; int* crop; int * sws; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_12__ {double window_width; double window_height; int width; int height; double x; double y; int fmt; } ;
struct TYPE_14__ {TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;


 double FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int **,int*,TYPE_3__*) ;
 int * FUNC_4 (double,double,int ,double,double,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const* const*,int*,int ,double,int **,int*) ;

__attribute__((used)) static hb_buffer_t * FUNC_7(hb_filter_private_t *VAR_4,
                                   hb_buffer_t *VAR_5, hb_buffer_t *VAR_6)
{
    hb_buffer_t * VAR_7;
    double VAR_8 = 1., VAR_9 = 1.;


    if (VAR_5->f.window_width > 0 && VAR_5->f.window_height > 0)
    {



        VAR_8 = (double)VAR_6->f.width / VAR_5->f.window_width;
        VAR_9 = (double)VAR_6->f.height / VAR_5->f.window_height;



        if (VAR_8 > VAR_9)
        {
            VAR_9 = VAR_8;
        }
        else
        {
            VAR_8 = VAR_9;
        }
    }
    if (FUNC_0(VAR_8 - 1) > 0.01 || FUNC_0(VAR_9 - 1) > 0.01)
    {
        uint8_t * VAR_10[4], * VAR_11[4];
        int VAR_12[4], VAR_13[4];
        int VAR_14, VAR_15;

        VAR_14 = VAR_5->f.width * VAR_8;
        VAR_15 = VAR_5->f.height * VAR_9;

        VAR_7 = FUNC_2(VAR_0, VAR_14, VAR_15);
        if (VAR_7 == ((void*)0))
            return ((void*)0);

        VAR_7->f.x = VAR_5->f.x * VAR_8;
        VAR_7->f.y = VAR_5->f.y * VAR_9;

        FUNC_3(VAR_10, VAR_12, VAR_5);
        FUNC_3(VAR_11, VAR_13, VAR_7);

        if (VAR_4->sws == ((void*)0) ||
            VAR_4->sws_width != VAR_14 ||
            VAR_4->sws_height != VAR_15)
        {
            if (VAR_4->sws!= ((void*)0))
                FUNC_5(VAR_4->sws);
            VAR_4->sws = FUNC_4(
                                VAR_5->f.width, VAR_5->f.height, VAR_5->f.fmt,
                                VAR_7->f.width, VAR_7->f.height, VAR_5->f.fmt,
                                VAR_3|VAR_1, VAR_2);
            VAR_4->sws_width = VAR_14;
            VAR_4->sws_height = VAR_15;
        }
        FUNC_6(VAR_4->sws, (const uint8_t* const *)VAR_10, VAR_12,
                  0, VAR_5->f.height, VAR_11, VAR_13);
    }
    else
    {
        VAR_7 = FUNC_1(VAR_5);
    }

    int VAR_16, VAR_17, VAR_18, VAR_19;





    VAR_19 = 2;






    VAR_18 = ( ( VAR_6->f.height - VAR_4->crop[0] - VAR_4->crop[1] ) *
                   VAR_19 ) / 100;

    if( VAR_18 > 20 )
    {



        VAR_18 = 20;
    }

    if( VAR_7->f.height > VAR_6->f.height - VAR_4->crop[0] - VAR_4->crop[1] -
        ( VAR_18 * 2 ) )
    {




        VAR_16 = VAR_4->crop[0] + ( VAR_6->f.height - VAR_4->crop[0] -
                                      VAR_4->crop[1] - VAR_7->f.height ) / 2;
    }
    else if( VAR_7->f.y < VAR_4->crop[0] + VAR_18 )
    {




        VAR_16 = VAR_4->crop[0] + VAR_18;
    }
    else if( VAR_7->f.y > VAR_6->f.height - VAR_4->crop[1] - VAR_18 - VAR_7->f.height )
    {





        VAR_16 = VAR_6->f.height - VAR_4->crop[1] - VAR_18 - VAR_7->f.height;
    }
    else
    {



        VAR_16 = VAR_7->f.y;
    }

    if( VAR_7->f.width > VAR_6->f.width - VAR_4->crop[2] - VAR_4->crop[3] - 40 )
        VAR_17 = VAR_4->crop[2] + ( VAR_6->f.width - VAR_4->crop[2] -
                VAR_4->crop[3] - VAR_7->f.width ) / 2;
    else if( VAR_7->f.x < VAR_4->crop[2] + 20 )
        VAR_17 = VAR_4->crop[2] + 20;
    else if( VAR_7->f.x > VAR_6->f.width - VAR_4->crop[3] - 20 - VAR_7->f.width )
        VAR_17 = VAR_6->f.width - VAR_4->crop[3] - 20 - VAR_7->f.width;
    else
        VAR_17 = VAR_7->f.x;

    VAR_7->f.x = VAR_17;
    VAR_7->f.y = VAR_16;

    return VAR_7;
}
