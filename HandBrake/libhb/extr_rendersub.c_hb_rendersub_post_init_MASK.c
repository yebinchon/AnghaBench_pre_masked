
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int * crop; } ;
typedef TYPE_1__ hb_job_t ;
struct TYPE_17__ {int type; int * crop; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_18__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( hb_filter_object_t * VAR_0, hb_job_t *VAR_1 )
{
    hb_filter_private_t * VAR_2 = VAR_0->private_data;

    VAR_2->crop[0] = VAR_1->crop[0];
    VAR_2->crop[1] = VAR_1->crop[1];
    VAR_2->crop[2] = VAR_1->crop[2];
    VAR_2->crop[3] = VAR_1->crop[3];

    switch( VAR_2->type )
    {
        case 128:
        {
            return FUNC_5( VAR_0, VAR_1 );
        } break;

        case 131:
        {
            return FUNC_3( VAR_0, VAR_1 );
        } break;

        case 134:
        case 133:
        case 129:
        case 130:
        {
            return FUNC_4( VAR_0, VAR_1 );
        } break;

        case 135:
        {
            return FUNC_0( VAR_0, VAR_1 );
        } break;

        case 132:
        {
            return FUNC_2( VAR_0, VAR_1 );
        } break;

        default:
        {
            FUNC_1("rendersub: unsupported subtitle format %d", VAR_2->type );
            return 1;
        } break;
    }
    return 0;
}
