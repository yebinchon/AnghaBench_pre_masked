
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int UINT8 ;
struct TYPE_4__ {char* bd_name; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct TYPE_5__ {int (* get_is_ready ) () ;} ;


 int FUNC_0 (char*,int,char*,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5 (char *VAR_7)
{
    UINT8 *VAR_8;

    if (!VAR_7 || !VAR_7[0] || (FUNC_3 ((char *)VAR_7) > VAR_0)) {
        return (VAR_3);
    }

    if (!FUNC_2()->get_is_ready()) {
        return (VAR_2);
    }
    VAR_8 = (UINT8 *)VAR_7;


    if (FUNC_1(VAR_8)) {
        return (VAR_1);
    } else {
        return (VAR_5);
    }
}
