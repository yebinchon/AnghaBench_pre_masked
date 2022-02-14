
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ commpage_address_t ;


 int FUNC_0 (void const*,void*,int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(
    commpage_address_t VAR_1,
    const void *VAR_2,
    int VAR_3 )
{
    void *VAR_4 = FUNC_1(VAR_1);

    if (VAR_1 < VAR_0)
       FUNC_2("commpage overlap at address 0x%p, 0x%x < 0x%x", VAR_4, VAR_1, VAR_0);

    FUNC_0(VAR_2,VAR_4,VAR_3);

    VAR_0 = VAR_1 + VAR_3;
}
