
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* GetAccessibleContextFromHWND ) (int ,long*,int *) ;} ;
typedef int HWND ;
typedef int BOOL ;
typedef int AccessibleContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,long*,int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

BOOL FUNC_1(HWND VAR_4, long *VAR_5, AccessibleContext *VAR_6) {
        if (VAR_3 == VAR_1) {
            return VAR_2.GetAccessibleContextFromHWND(VAR_4, VAR_5, VAR_6);
        }
        return VAR_0;
    }
