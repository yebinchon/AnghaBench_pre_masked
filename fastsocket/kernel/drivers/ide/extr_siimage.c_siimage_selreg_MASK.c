
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int host_flags; int channel; scalar_t__ hwif_data; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(ide_hwif_t *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_1->hwif_data;

 VAR_3 += 0xA0 + VAR_2;
 if (VAR_1->host_flags & VAR_0)
  VAR_3 += VAR_1->channel << 6;
 else
  VAR_3 += VAR_1->channel << 4;
 return VAR_3;
}
