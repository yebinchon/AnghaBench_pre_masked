
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ush ;
typedef long ulg ;
typedef scalar_t__ uch ;
struct TYPE_8__ {size_t last_lit; int matches; int level; int lit_bufsize; TYPE_2__* dyn_dtree; scalar_t__ block_start; scalar_t__ strstart; TYPE_1__* dyn_ltree; scalar_t__* l_buf; scalar_t__* d_buf; } ;
typedef TYPE_3__ deflate_state ;
struct TYPE_7__ {scalar_t__ Freq; } ;
struct TYPE_6__ {int Freq; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int* VAR_4 ;
 size_t FUNC_3 (unsigned int) ;
 long* VAR_5 ;
 int VAR_6 ;

int
FUNC_4(deflate_state *VAR_7, unsigned VAR_8, unsigned VAR_9)
{
    VAR_7->d_buf[VAR_7->last_lit] = (ush)VAR_8;
    VAR_7->l_buf[VAR_7->last_lit++] = (uch)VAR_9;
    if (VAR_8 == 0) {

        VAR_7->dyn_ltree[VAR_9].Freq++;
    } else {
        VAR_7->matches++;

        VAR_8--;
        FUNC_0((ush)VAR_8 < (ush)FUNC_1(VAR_7) &&
               (ush)VAR_9 <= (ush)(VAR_2-VAR_3) &&
               (ush)FUNC_3(VAR_8) < (ush)VAR_0, "_tr_tally: bad match");

        VAR_7->dyn_ltree[VAR_4[VAR_9]+VAR_1+1].Freq++;
        VAR_7->dyn_dtree[FUNC_3(VAR_8)].Freq++;
    }
    return (VAR_7->last_lit == VAR_7->lit_bufsize-1);




}
