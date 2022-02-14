
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_5__ {int* publicKeys; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
struct TYPE_6__ {scalar_t__ message; scalar_t__ wParam; int lParam; scalar_t__ time; } ;
typedef TYPE_2__ MSG ;
typedef int LPARAM ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static int FUNC_3(WPARAM VAR_11, LPARAM VAR_12)
{
    if (VAR_11 == VAR_3)
    {


        MSG VAR_13;
        DWORD VAR_14;


        if (VAR_12 & 0x01000000)
            return VAR_1;




        VAR_14 = FUNC_0();

        if (FUNC_2(&VAR_13, ((void*)0), 0, 0, VAR_2))
        {
            if (VAR_13.message == VAR_5 ||
                VAR_13.message == VAR_7 ||
                VAR_13.message == VAR_6 ||
                VAR_13.message == VAR_8)
            {
                if (VAR_13.wParam == VAR_4 &&
                    (VAR_13.lParam & 0x01000000) &&
                    VAR_13.time == VAR_14)
                {


                    return VAR_9;
                }
            }
        }

        return VAR_0;
    }

    return VAR_10.win32.publicKeys[FUNC_1(VAR_12) & 0x1FF];
}
