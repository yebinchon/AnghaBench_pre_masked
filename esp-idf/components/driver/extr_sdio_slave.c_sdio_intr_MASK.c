
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_6__ {TYPE_2__ slc0_int_raw; TYPE_1__ slc0_int_st; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void* VAR_5)
{
    uint32_t VAR_6 = VAR_3.slc0_int_st.val;
    uint32_t VAR_7 = VAR_3.slc0_int_raw.val;
    FUNC_0(VAR_4, "sdio_intr: %08X(%08X)", VAR_6, VAR_7);

    if (VAR_6 & VAR_1) FUNC_3(VAR_5);
    if (VAR_6 & VAR_2) FUNC_2(VAR_5);
    if (VAR_6 & VAR_0) FUNC_1(VAR_5);
}
