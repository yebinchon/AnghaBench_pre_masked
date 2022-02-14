
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct ata_device *VAR_2, unsigned long VAR_3)
{
 if (VAR_2->class == VAR_0)
  VAR_3 &= ~VAR_1;
 return FUNC_0(VAR_2, VAR_3);
}
