
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * job; int end; int mux; int init; } ;
typedef TYPE_1__ hb_mux_object_t ;
typedef int hb_job_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;

hb_mux_object_t * FUNC_1( hb_job_t * VAR_3 )
{
    hb_mux_object_t * VAR_4 = FUNC_0( sizeof( hb_mux_object_t ), 1 );
    VAR_4->init = VAR_1;
    VAR_4->mux = VAR_2;
    VAR_4->end = VAR_0;
    VAR_4->job = VAR_3;
    return VAR_4;
}
