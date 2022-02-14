
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int* crop; TYPE_2__* title; } ;
typedef TYPE_3__ hb_job_t ;
struct TYPE_12__ {int subtitle; } ;
typedef TYPE_4__ hb_filter_object_t ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_10__ {TYPE_1__ geometry; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,double,int,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2( hb_filter_object_t * VAR_1, hb_job_t * VAR_2 )
{


    int VAR_3 = VAR_2->title->geometry.height - VAR_2->crop[0] - VAR_2->crop[1];
    int VAR_4 = VAR_2->title->geometry.width - VAR_2->crop[2] - VAR_2->crop[3];
    FUNC_0(VAR_1->subtitle, VAR_0,
                               .066 * VAR_2->title->geometry.height,
                               VAR_4, VAR_3);
    return FUNC_1(VAR_1, VAR_2);
}
