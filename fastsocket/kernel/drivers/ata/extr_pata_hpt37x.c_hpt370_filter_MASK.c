
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ata_device*,char*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct ata_device *VAR_5, unsigned long VAR_6)
{
 if (VAR_5->class == VAR_0) {
  if (FUNC_1(VAR_5, "UDMA", VAR_4))
   VAR_6 &= ~VAR_1;
  if (FUNC_1(VAR_5, "UDMA100", VAR_3))
   VAR_6 &= ~(0xE0 << VAR_2);
 }
 return FUNC_0(VAR_5, VAR_6);
}
