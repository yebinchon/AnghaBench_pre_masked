
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct kiss_fftndr_state {int dummy; } ;
typedef TYPE_1__* kiss_fftndr_cfg ;
typedef int kiss_fft_scalar ;
struct TYPE_5__ {int dimReal; int dimOther; char* tmpbuf; scalar_t__ cfg_nd; scalar_t__ cfg_r; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int const*,int,int,char*,size_t*) ;
 scalar_t__ FUNC_2 (int,int,TYPE_1__*,size_t*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,int ,size_t) ;
 int FUNC_5 (int const*,int) ;

kiss_fftndr_cfg FUNC_6(const int *VAR_0,int VAR_1,int VAR_2,void*VAR_3,size_t*VAR_4)
{
    kiss_fftndr_cfg VAR_5 = ((void*)0);
    size_t VAR_6=0 , VAR_7=0,VAR_8=0;
    int VAR_9 = VAR_0[VAR_1-1];
    int VAR_10 = FUNC_5(VAR_0,VAR_1-1);
    size_t VAR_11;

    (void)FUNC_2(VAR_9,VAR_2,((void*)0),&VAR_6);
    (void)FUNC_1(VAR_0,VAR_1-1,VAR_2,((void*)0),&VAR_7);
    VAR_8 =
        FUNC_0( 2*VAR_10 , VAR_9+2) * sizeof(kiss_fft_scalar)
        + VAR_10*(VAR_9+2) * sizeof(kiss_fft_scalar);

    VAR_11 = sizeof( struct kiss_fftndr_state ) + VAR_6 + VAR_7 + VAR_8;

    if (VAR_4==((void*)0)) {
        VAR_5 = (kiss_fftndr_cfg) FUNC_3(VAR_11);
    }else{
        if (*VAR_4 >= VAR_11)
            VAR_5 = (kiss_fftndr_cfg)VAR_3;
        *VAR_4 = VAR_11;
    }
    if (VAR_5==((void*)0))
        return ((void*)0);
    FUNC_4( VAR_5 , 0 , VAR_11);

    VAR_5->dimReal = VAR_9;
    VAR_5->dimOther = VAR_10;
    VAR_5->cfg_r = FUNC_2( VAR_9,VAR_2,VAR_5+1,&VAR_6);
    VAR_5->cfg_nd = FUNC_1(VAR_0,VAR_1-1,VAR_2, ((char*) VAR_5->cfg_r)+VAR_6,&VAR_7);
    VAR_5->tmpbuf = (char*)VAR_5->cfg_nd + VAR_7;

    return VAR_5;
}
