
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int osi_thread_t ;
typedef int hci_hal_callbacks_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int const* VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_3(const hci_hal_callbacks_t *VAR_8, void *VAR_9)
{
    FUNC_0(VAR_8 != ((void*)0));
    FUNC_0(VAR_9 != ((void*)0));

    VAR_5 = VAR_8;

    FUNC_2(VAR_2, VAR_0 + VAR_3 + VAR_4);




    VAR_6 = (osi_thread_t *)VAR_9;


    if (FUNC_1(&VAR_7) != VAR_1) {
        return 0;
    }

    return 1;
}
