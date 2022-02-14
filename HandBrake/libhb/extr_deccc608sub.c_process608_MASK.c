
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {int in_xds_mode; int last_scr_sequence; TYPE_1__* data608; int last_pts; scalar_t__ direct_rollup; } ;
struct TYPE_2__ {int channel; unsigned char last_c1; unsigned char last_c2; scalar_t__ mode; int current_visible_scr_sequence; int current_visible_start_ms; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char,unsigned char,struct s_write*) ;
 int FUNC_1 (unsigned char,struct s_write*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s_write*) ;

__attribute__((used)) static void FUNC_4(const unsigned char *VAR_5, int VAR_6,
                       struct s_write *VAR_7)
{
    static int VAR_8 = 0;
    int VAR_9;

    if (VAR_5!=((void*)0))
    {
        for (VAR_9=0;VAR_9<VAR_6;VAR_9=VAR_9+2)
        {
            unsigned char VAR_10, VAR_11;
            VAR_10 = VAR_5[VAR_9] & 0x7F;
            VAR_11 = VAR_5[VAR_9+1] & 0x7F;

            if (VAR_10==0 && VAR_11==0)
                continue;
            if (VAR_10>=0x01 && VAR_10<=0x0E)
            {



                VAR_7->data608->channel=3;
                VAR_7->in_xds_mode=1;
            }
            if (VAR_10==0x0F)
            {
                VAR_7->in_xds_mode=0;
                continue;
            }
            if (VAR_10>=0x10 && VAR_10<0x1F)


            {


                if (VAR_4 && VAR_8 == 1 )
                {
                    FUNC_2("\n");
                    VAR_8 = 0;
                }

                VAR_7->in_xds_mode=0;
                if (VAR_7->data608->last_c1==VAR_10 && VAR_7->data608->last_c2==VAR_11)
                {

                    continue;
                }
                VAR_7->data608->last_c1=VAR_10;
                VAR_7->data608->last_c2=VAR_11;
                FUNC_0 (VAR_10,VAR_11,VAR_7);
            }
            if (VAR_10>=0x20)
            {

                if (VAR_7->data608->channel!=VAR_3)
                    continue;

                if (VAR_4)
                {
                    if( VAR_8 == 0 )
                    {
                        FUNC_2("\n");
                        VAR_8 = 1;
                    }
                }

                FUNC_1(VAR_10,VAR_7);
                FUNC_1(VAR_11,VAR_7);
                VAR_7->data608->last_c1=0;
                VAR_7->data608->last_c2=0;
            }

            if ( VAR_4 && !VAR_8 && VAR_7->data608->channel==VAR_3 )
            {

            }

            if ((VAR_7->data608->mode == VAR_0 ||
                 VAR_7->data608->mode == VAR_1 ||
                 VAR_7->data608->mode == VAR_2) &&
                VAR_7->direct_rollup)
            {


                FUNC_3(VAR_7);
                VAR_7->data608->current_visible_start_ms = VAR_7->last_pts;
                VAR_7->data608->current_visible_scr_sequence = VAR_7->last_scr_sequence;
            }
        }
    }
}
