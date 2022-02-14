
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int num; int den; } ;
typedef TYPE_3__ hb_rational_t ;
struct TYPE_12__ {int width; int height; TYPE_3__ par; } ;
typedef TYPE_4__ hb_geometry_t ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_10__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_13__ {int keep; int* crop; scalar_t__ modulus; scalar_t__ maxWidth; scalar_t__ maxHeight; int mode; TYPE_2__ geometry; scalar_t__ itu_par; } ;
typedef TYPE_5__ hb_geometry_settings_t ;


 int FUNC_0 (scalar_t__) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int*,int*,int,int,int) ;
 int FUNC_7 (int*,int*,int,int) ;

void FUNC_8(hb_geometry_t *VAR_6,
                             hb_geometry_settings_t *VAR_7,
                             hb_geometry_t *VAR_8)
{
    hb_rational_t VAR_9, VAR_10;
    int VAR_11 = !!(VAR_7->keep & VAR_0);
    int VAR_12 = !!(VAR_7->keep & VAR_1);


    int VAR_13 = VAR_6->width - VAR_7->crop[2] - VAR_7->crop[3];
    int VAR_14 = VAR_6->height - VAR_7->crop[0] - VAR_7->crop[1];
    double VAR_15 = (double)VAR_13 / VAR_14;
    int VAR_16 = (VAR_7->modulus > 0) ? FUNC_0(VAR_7->modulus) : 2;


    if (VAR_7->geometry.par.num == 0 || VAR_7->geometry.par.den == 0)
    {
        VAR_7->geometry.par.num = VAR_7->geometry.par.den = 1;
    }
    if (VAR_6->par.num == 0 || VAR_6->par.den == 0)
    {
        VAR_6->par.num = VAR_6->par.den = 1;
    }


    FUNC_7(&VAR_9.num, &VAR_9.den,
              VAR_7->geometry.par.num, VAR_7->geometry.par.den);
    int64_t VAR_17 = VAR_9.num;
    int64_t VAR_18 = VAR_9.den;

    hb_rational_t VAR_19 = VAR_6->par;



    if (VAR_6->width == 720 && VAR_7->itu_par)
    {



        int VAR_20 = VAR_6->width * VAR_19.num * 9. /
                      (VAR_6->height * VAR_19.den);


        if (VAR_6->height == 480)
        {

            if (VAR_20 == 16)
            {

                VAR_17 = 40;
                VAR_18 = 33;
            }
            else if (VAR_20 == 12)
            {

                VAR_17 = 10;
                VAR_18 = 11;
            }
        }
        else if (VAR_6->height == 576)
        {

            if (VAR_20 == 16)
            {

                VAR_17 = 16;
                VAR_18 = 11;
            }
            else if (VAR_20 == 12)
            {

                VAR_17 = 12;
                VAR_18 = 11;
            }
        }
    }







    int VAR_21, VAR_22;
    int VAR_23, VAR_24;

    if (VAR_7->maxWidth > 0)
    {
        VAR_23 = FUNC_2(FUNC_1(FUNC_4(VAR_7->maxWidth, VAR_16),
                            VAR_5), VAR_3);
    }
    else
    {
        VAR_23 = VAR_3;
    }
    if (VAR_7->maxHeight > 0)
    {
        VAR_24 = FUNC_2(FUNC_1(FUNC_4(VAR_7->maxHeight, VAR_16),
                            VAR_4), VAR_2);
    }
    else
    {
        VAR_24 = VAR_2;
    }

    switch (VAR_7->mode)
    {
        case 129:
        {


            double VAR_25, VAR_26, VAR_27;
            VAR_25 = (double)VAR_6->par.num / VAR_6->par.den;
            VAR_26 = (double)VAR_13 / VAR_14;
            VAR_27 = VAR_25 * VAR_26;





            if (VAR_11)
            {
                if (!VAR_12)
                {
                    VAR_21 = FUNC_5(VAR_7->geometry.width, VAR_16);
                    VAR_22 = FUNC_3(VAR_21 / VAR_27, VAR_16);
                }
                else
                {
                    VAR_22 = FUNC_5(VAR_7->geometry.height, VAR_16);
                    VAR_21 = FUNC_3(VAR_22 * VAR_27, VAR_16);
                }
            }
            else
            {
                VAR_21 = FUNC_5(VAR_7->geometry.width, VAR_16);
                VAR_22 = FUNC_5(VAR_7->geometry.height, VAR_16);
            }


            if (VAR_21 < VAR_5)
            {
                VAR_21 = VAR_5;
                if (VAR_11)
                {
                    VAR_22 = FUNC_3(VAR_21 / VAR_27, VAR_16);
                }
            }
            if (VAR_22 < VAR_4)
            {
                VAR_22 = VAR_4;
                if (VAR_11)
                {
                    VAR_21 = FUNC_3(VAR_22 * VAR_27, VAR_16);
                }
            }
            if (VAR_21 > VAR_23)
            {
                VAR_21 = VAR_23;
                if (VAR_11)
                {
                    VAR_22 = FUNC_3(VAR_21 / VAR_27, VAR_16);
                }
            }
            if (VAR_22 > VAR_24)
            {
                VAR_22 = VAR_24;
                if (VAR_11)
                {
                    VAR_21 = FUNC_3(VAR_22 * VAR_27, VAR_16);
                }
            }
            VAR_17 = VAR_18 = 1;
        } break;

        case 128:
        {




            VAR_21 = FUNC_5(VAR_13, 2);
            VAR_22 = FUNC_5(VAR_14, 2);
            VAR_17 = (int64_t)VAR_22 * VAR_13 * VAR_19.num;
            VAR_18 = (int64_t)VAR_21 * VAR_14 * VAR_19.den;
        } break;

        case 130:
        {




            if (!VAR_12)
            {
                VAR_21 = FUNC_5(VAR_7->geometry.width, VAR_16);
                VAR_22 = FUNC_5(VAR_21 / VAR_15 + 0.5, VAR_16);
            }
            else
            {
                VAR_22 = FUNC_5(VAR_7->geometry.height, VAR_16);
                VAR_21 = FUNC_5(VAR_22 * VAR_15 + 0.5, VAR_16);
            }


            if (VAR_21 < VAR_5)
            {
                VAR_21 = VAR_5;
                VAR_22 = FUNC_3(VAR_21 / VAR_15 + 0.5, VAR_16);
            }
            if (VAR_22 < VAR_4)
            {
                VAR_22 = VAR_4;
                VAR_21 = FUNC_3(VAR_22 * VAR_15 + 0.5, VAR_16);
            }
            if (VAR_21 > VAR_23)
            {
                VAR_21 = VAR_23;
                VAR_22 = FUNC_3(VAR_21 / VAR_15 + 0.5, VAR_16);
            }
            if (VAR_22 > VAR_24)
            {
                VAR_22 = VAR_24;
                VAR_21 = FUNC_3(VAR_22 * VAR_15 + 0.5, VAR_16);
            }



            VAR_17 = (int64_t)VAR_22 * VAR_13 * VAR_19.num;
            VAR_18 = (int64_t)VAR_21 * VAR_14 * VAR_19.den;
        } break;

        case 131:
        {




            VAR_21 = FUNC_5(VAR_7->geometry.width, VAR_16);
            VAR_22 = FUNC_5(VAR_7->geometry.height, VAR_16);


            if (VAR_21 < VAR_5)
            {
                VAR_21 = VAR_5;
            }
            if (VAR_22 < VAR_4)
            {
                VAR_22 = VAR_4;
            }
            if (VAR_21 > VAR_23)
            {
                VAR_21 = VAR_23;
            }
            if (VAR_22 > VAR_24)
            {
                VAR_22 = VAR_24;
            }
            if (VAR_11)
            {




                VAR_17 = (int64_t)VAR_22 * VAR_13 *
                                       VAR_19.num;
                VAR_18 = (int64_t)VAR_21 * VAR_14 *
                                       VAR_19.den;
            }
        } break;

        default:
        case 132:
        {
            VAR_21 = FUNC_5(VAR_7->geometry.width, VAR_16);
            VAR_22 = FUNC_5(VAR_7->geometry.height, VAR_16);


            if (VAR_21 < VAR_5)
            {
                VAR_21 = VAR_5;
            }
            if (VAR_22 < VAR_4)
            {
                VAR_22 = VAR_4;
            }
            if (VAR_21 > VAR_23)
            {
                VAR_21 = VAR_23;
            }
            if (VAR_22 > VAR_24)
            {
                VAR_22 = VAR_24;
            }



            VAR_17 = (int64_t)VAR_22 * VAR_13 * VAR_19.num;
            VAR_18 = (int64_t)VAR_21 * VAR_14 * VAR_19.den;
        } break;
    }
    if (VAR_21 < VAR_5 || VAR_22 < VAR_4 ||
        VAR_21 > VAR_23 || VAR_22 > VAR_24)
    {



        if (VAR_21 < VAR_5)
        {
            VAR_21 = VAR_5;
        }
        if (VAR_22 < VAR_4)
        {
            VAR_22 = VAR_4;
        }
        if (VAR_21 > VAR_23)
        {
            VAR_21 = VAR_23;
        }
        if (VAR_22 > VAR_24)
        {
            VAR_22 = VAR_24;
        }
        if (VAR_11 && VAR_7->mode != 129)
        {
            VAR_17 = (int64_t)VAR_22 * VAR_13 * VAR_19.num;
            VAR_18 = (int64_t)VAR_21 * VAR_14 * VAR_19.den;
        }
    }


    VAR_8->width = VAR_21;
    VAR_8->height = VAR_22;



    FUNC_6(&VAR_17, &VAR_18,
                        VAR_17, VAR_18, 65535);



    FUNC_7(&VAR_10.num, &VAR_10.den, VAR_17, VAR_18);
    if (VAR_7->mode == 131 && !VAR_11 &&
        VAR_10.num == VAR_9.num && VAR_10.den == VAR_9.den)
    {
        VAR_8->par.num = VAR_7->geometry.par.num;
        VAR_8->par.den = VAR_7->geometry.par.den;
    }
    else
    {
        FUNC_7(&VAR_8->par.num, &VAR_8->par.den, VAR_17, VAR_18);
    }
}
