
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_2__ {size_t nbBits; } ;
typedef TYPE_1__ HUF_CElt ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

U32 FUNC_1(const void* VAR_1, U32 VAR_2)
{
    const HUF_CElt* VAR_3 = (const HUF_CElt*)VAR_1;
    FUNC_0(VAR_2 <= VAR_0);
    return VAR_3[VAR_2].nbBits;
}
