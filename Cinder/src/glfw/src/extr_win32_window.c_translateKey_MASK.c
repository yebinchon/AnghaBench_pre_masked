
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static int FUNC_3(WPARAM VAR_12, LPARAM VAR_13)
{
    if (VAR_12 == VAR_3)
    {


        MSG VAR_14;
        DWORD VAR_15;


        if (VAR_13 & 0x01000000)
            return VAR_1;




        VAR_15 = FUNC_0();

        if (FUNC_2(&VAR_14, ((void*)0), 0, 0, VAR_2))
        {
            if (VAR_14.message == VAR_6 ||
                VAR_14.message == VAR_8 ||
                VAR_14.message == VAR_7 ||
                VAR_14.message == VAR_9)
            {
                if (VAR_14.wParam == VAR_4 &&
                    (VAR_14.lParam & 0x01000000) &&
                    VAR_14.time == VAR_15)
                {


                    return VAR_10;
                }
            }
        }

        return VAR_0;
    }

    if (VAR_12 == VAR_5)
    {


        return VAR_10;
    }

    return VAR_11.win32.publicKeys[FUNC_1(VAR_13) & 0x1FF];
}
