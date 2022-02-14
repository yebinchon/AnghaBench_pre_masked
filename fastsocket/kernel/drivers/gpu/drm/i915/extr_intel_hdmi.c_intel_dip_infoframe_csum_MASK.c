
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct dip_infoframe {unsigned int len; scalar_t__ checksum; scalar_t__ ecc; } ;


 unsigned int VAR_0 ;

void FUNC_0(struct dip_infoframe *VAR_1)
{
 uint8_t *VAR_2 = (uint8_t *)VAR_1;
 uint8_t VAR_3 = 0;
 unsigned VAR_4;

 VAR_1->checksum = 0;
 VAR_1->ecc = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->len + VAR_0; VAR_4++)
  VAR_3 += VAR_2[VAR_4];

 VAR_1->checksum = 0x100 - VAR_3;
}
