
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_9__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef int hb_buffer_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,int **,int **) ;
 int FUNC_2 (TYPE_2__*,int **,int **) ;
 int FUNC_3 (TYPE_2__*,int **,int **) ;
 int FUNC_4 (TYPE_2__*,int **,int **) ;

__attribute__((used)) static int FUNC_5( hb_filter_object_t * VAR_0,
                                 hb_buffer_t ** VAR_1,
                                 hb_buffer_t ** VAR_2 )
{
    hb_filter_private_t * VAR_3 = VAR_0->private_data;
    switch( VAR_3->type )
    {
        case 128:
        {
            return FUNC_4( VAR_0, VAR_1, VAR_2 );
        } break;

        case 131:
        {
            return FUNC_2( VAR_0, VAR_1, VAR_2 );
        } break;

        case 134:
        case 133:
        case 135:
        case 129:
        case 130:
        {
            return FUNC_3( VAR_0, VAR_1, VAR_2 );
        } break;

        case 132:
        {
            return FUNC_1( VAR_0, VAR_1, VAR_2 );
        } break;

        default:
        {
            FUNC_0("rendersub: unsupported subtitle format %d", VAR_3->type );
            return 1;
        } break;
    }
}
