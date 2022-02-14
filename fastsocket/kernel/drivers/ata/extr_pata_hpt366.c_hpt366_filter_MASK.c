
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ata_device*,char*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct ata_device *VAR_8, unsigned long VAR_9)
{
 if (VAR_8->class == VAR_0) {
  if (FUNC_1(VAR_8, "UDMA", VAR_5))
   VAR_9 &= ~VAR_3;
  if (FUNC_1(VAR_8, "UDMA3", VAR_6))
   VAR_9 &= ~(0xF8 << VAR_4);
  if (FUNC_1(VAR_8, "UDMA4", VAR_7))
   VAR_9 &= ~(0xF0 << VAR_4);
 } else if (VAR_8->class == VAR_1)
  VAR_9 &= ~(VAR_2 | VAR_3);

 return FUNC_0(VAR_8, VAR_9);
}
