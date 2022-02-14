
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2_ethhdr {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(u8 *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        VAR_0 = VAR_0 - sizeof(struct l2_ethhdr);
        FUNC_0(VAR_0);
    }
}
