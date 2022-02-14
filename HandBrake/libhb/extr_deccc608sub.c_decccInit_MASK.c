
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct s_write {int dummy; } ;
struct eia608 {int dummy; } ;
struct TYPE_14__ {TYPE_8__* cc608; TYPE_6__* job; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_15__ {TYPE_7__* subtitle; TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
struct TYPE_16__ {int* crop; TYPE_3__* title; } ;
typedef TYPE_6__ hb_job_t ;
struct TYPE_18__ {int width; int height; int direct_rollup; void* data608; int par; int crop; } ;
struct TYPE_11__ {scalar_t__ dest; } ;
struct TYPE_17__ {TYPE_1__ config; } ;
struct TYPE_12__ {int width; int height; int par; } ;
struct TYPE_13__ {TYPE_2__ geometry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_7__*,int ,double,int,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static int FUNC_5( hb_work_object_t * VAR_2, hb_job_t * VAR_3 )
{
    int VAR_4 = 1;
    hb_work_private_t * VAR_5;

    VAR_5 = FUNC_0( 1, sizeof( hb_work_private_t ) );
    if( VAR_5 )
    {
        VAR_2->private_data = VAR_5;

        VAR_5->job = VAR_3;

        VAR_5->cc608 = FUNC_0(1, sizeof(struct s_write));

        if( VAR_5->cc608 )
        {
            VAR_5->cc608->width = VAR_3->title->geometry.width;
            VAR_5->cc608->height = VAR_3->title->geometry.height;
            FUNC_4(VAR_5->cc608->crop, VAR_3->crop, sizeof(int[4]));
            VAR_5->cc608->par = VAR_3->title->geometry.par;
            VAR_4 = FUNC_1(VAR_5->cc608);
            if( !VAR_4 )
            {
                VAR_5->cc608->data608 = FUNC_0(1, sizeof(struct eia608));
                if( !VAR_5->cc608->data608 )
                {
                    VAR_4 = 1;
                }
                else
                {
                    FUNC_3(VAR_5->cc608->data608);
                }
            }




            VAR_5->cc608->direct_rollup = VAR_2->subtitle->config.dest == VAR_1;
        }

        if (!VAR_4)
        {

            int VAR_6 = VAR_3->title->geometry.height - VAR_3->crop[0] - VAR_3->crop[1];
            int VAR_7 = VAR_3->title->geometry.width - VAR_3->crop[2] - VAR_3->crop[3];
            int VAR_8 = 0.8 * VAR_3->title->geometry.height;
            FUNC_2(VAR_2->subtitle, VAR_0,
                                       .08 * VAR_8, VAR_7, VAR_6);
        }
    }
    return VAR_4;
}
