
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ last_ver; scalar_t__ last_crc; scalar_t__ crc; } ;
struct TYPE_5__ {scalar_t__ version; } ;
typedef TYPE_1__ SectionHeader ;
typedef TYPE_2__ MpegTSSectionFilter ;



__attribute__((used)) static int FUNC_0(const SectionHeader *VAR_0, MpegTSSectionFilter *VAR_1)
{
    if (VAR_0->version == VAR_1->last_ver && VAR_1->last_crc == VAR_1->crc)
        return 1;

    VAR_1->last_ver = VAR_0->version;
    VAR_1->last_crc = VAR_1->crc;

    return 0;
}
