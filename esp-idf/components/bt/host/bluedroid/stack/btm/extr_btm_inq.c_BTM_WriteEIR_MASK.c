
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_2__ {scalar_t__ (* supports_extended_inquiry_response ) () ;} ;
typedef int BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;

tBTM_STATUS FUNC_5( BT_HDR *VAR_2, BOOLEAN VAR_3)
{
    if (FUNC_2()->supports_extended_inquiry_response()) {
        FUNC_0("Write Extended Inquiry Response to controller\n");
        FUNC_1 (VAR_2, VAR_3);
        return VAR_1;
    } else {
        FUNC_3(VAR_2);
        return VAR_0;
    }
}
