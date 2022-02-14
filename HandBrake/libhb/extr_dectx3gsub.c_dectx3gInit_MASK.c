
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hb_work_private_t ;
struct TYPE_9__ {int subtitle; int * private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_10__ {int* crop; TYPE_2__* title; } ;
typedef TYPE_4__ hb_job_t ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_1__ geometry; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,double,int,int) ;

__attribute__((used)) static int FUNC_2( hb_work_object_t * VAR_1, hb_job_t * VAR_2 )
{
    hb_work_private_t * VAR_3;
    VAR_3 = FUNC_0( 1, sizeof( hb_work_private_t ) );
    if (VAR_3 == ((void*)0))
        return 1;
    VAR_1->private_data = VAR_3;





    int VAR_4 = VAR_2->title->geometry.height - VAR_2->crop[0] - VAR_2->crop[1];
    int VAR_5 = VAR_2->title->geometry.width - VAR_2->crop[2] - VAR_2->crop[3];
    FUNC_1(VAR_1->subtitle, VAR_0,
                               .066 * VAR_2->title->geometry.height,
                               VAR_5, VAR_4);

    return 0;
}
