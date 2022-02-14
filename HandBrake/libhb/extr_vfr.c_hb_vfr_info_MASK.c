
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {double den; scalar_t__ num; } ;
struct TYPE_11__ {int cfr; TYPE_2__ vrate; TYPE_2__ input_vrate; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_12__ {TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_filter_object_t ;
struct TYPE_9__ {int cfr; TYPE_2__ vrate; } ;
struct TYPE_13__ {scalar_t__* human_readable_desc; TYPE_1__ output; } ;
typedef TYPE_5__ hb_filter_info_t ;


 TYPE_5__* FUNC_0 (int,int) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int,char*,double,...) ;

__attribute__((used)) static hb_filter_info_t * FUNC_3( hb_filter_object_t * VAR_0 )
{
    hb_filter_private_t * VAR_1 = VAR_0->private_data;
    hb_filter_info_t * VAR_2;

    if( !VAR_1 )
        return ((void*)0);

    VAR_2 = FUNC_0(1, sizeof(hb_filter_info_t));
    VAR_2->human_readable_desc = FUNC_1(128);
    VAR_2->human_readable_desc[0] = 0;

    VAR_2->output.vrate = VAR_1->input_vrate;
    if (VAR_1->cfr == 2)
    {


        double VAR_3 = (double)VAR_1->input_vrate.num / VAR_1->input_vrate.den;
        double VAR_4 = (double)VAR_1->vrate.num / VAR_1->vrate.den;
        if (VAR_3 > VAR_4)
        {


            VAR_2->output.vrate = VAR_1->vrate;
        }
    }
    else
    {
        VAR_2->output.vrate = VAR_1->vrate;
    }
    VAR_2->output.cfr = VAR_1->cfr;
    if ( VAR_1->cfr == 0 )
    {

        FUNC_2( VAR_2->human_readable_desc, 128,
                  "frame rate: same as source (around %.3f fps)",
                  (float)VAR_1->vrate.num / VAR_1->vrate.den );
    }
    else if ( VAR_1->cfr == 2 )
    {


        double VAR_5 = (double)VAR_1->input_vrate.num / VAR_1->input_vrate.den;
        double VAR_6 = (double)VAR_1->vrate.num / VAR_1->vrate.den;
        FUNC_2( VAR_2->human_readable_desc, 128,
                  "frame rate: %.3f fps -> peak rate limited to %.3f fps",
                  VAR_5 , VAR_6 );
    }
    else
    {

        double VAR_7 = (double)VAR_1->input_vrate.num / VAR_1->input_vrate.den;
        double VAR_8 = (double)VAR_1->vrate.num / VAR_1->vrate.den;
        FUNC_2( VAR_2->human_readable_desc, 128,
                  "frame rate: %.3f fps -> constant %.3f fps",
                  VAR_7 , VAR_8 );
    }

    return VAR_2;
}
