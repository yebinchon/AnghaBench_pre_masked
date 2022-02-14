
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; int * sws; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_9__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6( hb_filter_object_t * VAR_0 )
{
    hb_filter_private_t * VAR_1 = VAR_0->private_data;

    if (VAR_1->sws != ((void*)0))
    {
        FUNC_3(VAR_1->sws);
    }
    switch( VAR_1->type )
    {
        case 128:
        {
            FUNC_5( VAR_0 );
        } break;

        case 131:
        {
            FUNC_2( VAR_0 );
        } break;

        case 134:
        case 133:
        case 135:
        case 129:
        case 130:
        {
            FUNC_4( VAR_0 );
        } break;

        case 132:
        {
            FUNC_1( VAR_0 );
        } break;

        default:
        {
            FUNC_0("rendersub: unsupported subtitle format %d", VAR_1->type );
        } break;
    }
}
