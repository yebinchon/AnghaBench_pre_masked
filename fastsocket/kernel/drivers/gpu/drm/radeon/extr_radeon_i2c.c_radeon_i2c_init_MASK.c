
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ is_atom_bios; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 if (VAR_0->is_atom_bios)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
