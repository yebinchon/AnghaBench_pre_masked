
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {int coherent_mode; int dig_encoder; int linkb; } ;
struct radeon_encoder {int encoder_enum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct radeon_encoder_atom_dig* FUNC_0 (int,int ) ;

__attribute__((used)) static struct radeon_encoder_atom_dig *
FUNC_1(struct radeon_encoder *VAR_3)
{
 int VAR_4 = (VAR_3->encoder_enum & VAR_0) >> VAR_1;
 struct radeon_encoder_atom_dig *VAR_5 = FUNC_0(sizeof(struct radeon_encoder_atom_dig), VAR_2);

 if (!VAR_5)
  return ((void*)0);


 VAR_5->coherent_mode = 1;
 VAR_5->dig_encoder = -1;

 if (VAR_4 == 2)
  VAR_5->linkb = 1;
 else
  VAR_5->linkb = 0;

 return VAR_5;
}
