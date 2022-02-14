
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VisibleChildrenInfo ;
struct TYPE_2__ {int (* getVisibleChildren ) (long const,int const,int const,int *) ;} ;
typedef int BOOL ;
typedef int AccessibleContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (long const,int const,int const,int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

BOOL FUNC_1(const long VAR_4, const AccessibleContext VAR_5,
                            const int VAR_6, VisibleChildrenInfo *VAR_7) {
        if (VAR_3 == VAR_1) {
            return VAR_2.getVisibleChildren(VAR_4, VAR_5, VAR_6,
                                                      VAR_7);
        }
        return VAR_0;
    }
