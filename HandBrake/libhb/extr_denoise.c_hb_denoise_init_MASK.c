
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_5__ {void* output; int * hqdn3d_coef; void* input; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {int settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef void* hb_filter_init_t ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (double*,int ,char*) ;
 int FUNC_2 (int ,double) ;

__attribute__((used)) static int FUNC_3( hb_filter_object_t * VAR_3,
                            hb_filter_init_t * VAR_4 )
{
    VAR_3->private_data = FUNC_0( sizeof(struct hb_filter_private_s), 1 );
    hb_filter_private_t * VAR_5 = VAR_3->private_data;

    double VAR_6, VAR_7, VAR_8;
    double VAR_9, VAR_10, VAR_11;

    VAR_5->input = *VAR_4;
    if (!FUNC_1(&VAR_6, VAR_3->settings, "y-spatial"))
    {
        VAR_6 = VAR_1;
    }
    if (!FUNC_1(&VAR_7, VAR_3->settings, "cb-spatial"))
    {
        VAR_7 = VAR_0 *
                            VAR_6 / VAR_1;
    }
    if (!FUNC_1(&VAR_8, VAR_3->settings, "cr-spatial"))
    {
        VAR_8 = VAR_7;
    }
    if (!FUNC_1(&VAR_9, VAR_3->settings, "y-temporal"))
    {
        VAR_9 = VAR_2 *
                            VAR_6 / VAR_1;
    }
    if (!FUNC_1(&VAR_10, VAR_3->settings, "cb-temporal"))
    {
        VAR_10 = VAR_9 * VAR_7 / VAR_6;
    }
    if (!FUNC_1(&VAR_11, VAR_3->settings, "cr-temporal"))
    {
        VAR_11 = VAR_10;
    }

    FUNC_2( VAR_5->hqdn3d_coef[0], VAR_6 );
    FUNC_2( VAR_5->hqdn3d_coef[1], VAR_9 );
    FUNC_2( VAR_5->hqdn3d_coef[2], VAR_7 );
    FUNC_2( VAR_5->hqdn3d_coef[3], VAR_10 );
    FUNC_2( VAR_5->hqdn3d_coef[4], VAR_8 );
    FUNC_2( VAR_5->hqdn3d_coef[5], VAR_11 );

    VAR_5->output = *VAR_4;

    return 0;
}
