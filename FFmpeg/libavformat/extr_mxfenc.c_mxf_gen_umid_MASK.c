
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int instance_number; scalar_t__ umid; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    MXFContext *VAR_1 = VAR_0->priv_data;
    uint32_t VAR_2 = FUNC_1();
    uint64_t VAR_3 = VAR_2 + 0x5294713400000000LL;

    FUNC_0(VAR_1->umid , VAR_3);
    FUNC_0(VAR_1->umid+8, VAR_3>>8);

    VAR_1->instance_number = VAR_2 & 0xFFFFFF;
}
