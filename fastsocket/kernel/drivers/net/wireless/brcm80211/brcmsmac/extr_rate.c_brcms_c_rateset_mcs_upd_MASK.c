
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_c_rateset {scalar_t__* mcs; } ;


 int VAR_0 ;

void FUNC_0(struct brcms_c_rateset *VAR_1, u8 VAR_2)
{
 int VAR_3;
 for (VAR_3 = VAR_2; VAR_3 < VAR_0; VAR_3++)
  VAR_1->mcs[VAR_3] = 0;
}
