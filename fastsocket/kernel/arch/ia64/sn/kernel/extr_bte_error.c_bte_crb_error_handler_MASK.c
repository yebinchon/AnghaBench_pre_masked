
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bteinfo_s {int bte_num; int bte_cnode; int bte_error_count; scalar_t__ bh_error; } ;
struct TYPE_4__ {scalar_t__ ie_errortype; } ;
typedef TYPE_1__ ioerror_t ;
typedef int cnodeid_t ;
struct TYPE_5__ {struct bteinfo_s* bte_if; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

void
FUNC_3(cnodeid_t VAR_1, int VAR_2,
                      int VAR_3, ioerror_t * VAR_4, int VAR_5)
{
 struct bteinfo_s *VAR_6;


 VAR_6 = &(FUNC_1(VAR_1)->bte_if[VAR_2]);






 VAR_6->bh_error = VAR_4->ie_errortype + VAR_0;
 VAR_6->bte_error_count++;

 FUNC_0(("Got an error on cnode %d bte %d: HW error type 0x%x\n",
  VAR_6->bte_cnode, VAR_6->bte_num, VAR_4->ie_errortype));
 FUNC_2((unsigned long) FUNC_1(VAR_1));
}
