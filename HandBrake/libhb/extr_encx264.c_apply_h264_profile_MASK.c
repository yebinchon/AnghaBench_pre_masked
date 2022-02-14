
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_rc_method; int i_qp_constant; int f_rf_constant; } ;
struct TYPE_8__ {TYPE_1__ rc; scalar_t__ b_fake_interlaced; scalar_t__ b_interlaced; } ;
typedef TYPE_2__ x264_param_t ;
struct TYPE_9__ {int bit_depth; int (* param_apply_profile ) (TYPE_2__*,char const*) ;} ;
typedef TYPE_3__ x264_api_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const* const) ;
 int FUNC_3 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_4(const x264_api_t *VAR_4, x264_param_t *VAR_5,
                              const char *VAR_6, int VAR_7)
{
    const char * const * VAR_8;
    if (VAR_4->bit_depth == 10)
    {
        VAR_8 = VAR_2;
    }
    else
    {
        VAR_8 = VAR_3;
    }
    if (VAR_6 != ((void*)0) &&
        FUNC_2(VAR_6, VAR_8[0]) != 0)
    {



        if ((VAR_5->b_interlaced ||
             VAR_5->b_fake_interlaced) &&
            !FUNC_2(VAR_6, "baseline"))
        {
            if (VAR_7)
            {
                FUNC_1("apply_h264_profile [warning]: baseline profile doesn't support interlacing, disabling");
            }
            VAR_5->b_interlaced = VAR_5->b_fake_interlaced = 0;
        }



        int VAR_9 = 6 * (VAR_4->bit_depth - 8);
        if (FUNC_2(VAR_6, "high444") != 0 &&
            ((VAR_5->rc.i_rc_method == VAR_0 && VAR_5->rc.i_qp_constant <= 0) ||
             (VAR_5->rc.i_rc_method == VAR_1 && (int)(VAR_5->rc.f_rf_constant + VAR_9) <= 0)))
        {
            if (VAR_7)
            {
                FUNC_1("apply_h264_profile [warning]: lossless requires high444 profile, disabling");
            }
            if (VAR_5->rc.i_rc_method == VAR_0)
            {
                VAR_5->rc.i_qp_constant = 1;
            }
            else
            {
                VAR_5->rc.f_rf_constant = 1 - VAR_9;
            }
        }
        return VAR_4->param_apply_profile(VAR_5, VAR_6);
    }
    else if (!FUNC_2(VAR_6, VAR_8[0]))
    {

        return 0;
    }
    else
    {

        FUNC_0("apply_h264_profile: no profile specified");
        return -1;
    }
}
