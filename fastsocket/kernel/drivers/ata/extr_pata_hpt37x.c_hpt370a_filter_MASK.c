
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ata_device*,char*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct ata_device *VAR_3, unsigned long VAR_4)
{
 if (VAR_3->class == VAR_0) {
  if (FUNC_1(VAR_3, "UDMA100", VAR_2))
   VAR_4 &= ~(0xE0 << VAR_1);
 }
 return FUNC_0(VAR_3, VAR_4);
}
