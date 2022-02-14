
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_4__ {scalar_t__ vquality; int pass_id; scalar_t__ twopass; scalar_t__ indepth_scan; } ;
typedef TYPE_1__ hb_job_t ;
typedef int hb_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int,char*) ;

void FUNC_2(hb_handle_t * VAR_5, hb_job_t * VAR_6, hb_list_t * VAR_7)
{
    if (VAR_6->vquality > VAR_0)
    {
        VAR_6->twopass = 0;
    }
    if (VAR_6->indepth_scan)
    {
        FUNC_1(2, "Adding subtitle scan pass");
        VAR_6->pass_id = VAR_4;
        FUNC_0(VAR_5, VAR_6, VAR_7);
        VAR_6->indepth_scan = 0;
    }
    if (VAR_6->twopass)
    {
        FUNC_1(2, "Adding two-pass encode");
        VAR_6->pass_id = VAR_2;
        FUNC_0(VAR_5, VAR_6, VAR_7);
        VAR_6->pass_id = VAR_3;
        FUNC_0(VAR_5, VAR_6, VAR_7);
    }
    else
    {
        VAR_6->pass_id = VAR_1;
        FUNC_0(VAR_5, VAR_6, VAR_7);
    }
}
