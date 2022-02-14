
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int inq_active; } ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;

UINT16 FUNC_1 (void)
{
    FUNC_0 ("BTM_IsInquiryActive\n");

    return (VAR_0.btm_inq_vars.inq_active);
}
