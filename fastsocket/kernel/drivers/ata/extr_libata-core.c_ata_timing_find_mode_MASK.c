
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ata_timing {scalar_t__ mode; } ;


 struct ata_timing* VAR_0 ;

const struct ata_timing *FUNC_0(u8 VAR_1)
{
 const struct ata_timing *VAR_2 = VAR_0;

 while (VAR_1 > VAR_2->mode)
  VAR_2++;

 if (VAR_1 == VAR_2->mode)
  return VAR_2;
 return ((void*)0);
}
