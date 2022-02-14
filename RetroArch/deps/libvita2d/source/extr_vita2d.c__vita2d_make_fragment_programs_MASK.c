
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int textureTint; int texture; int color; } ;
typedef TYPE_1__ vita2d_fragment_programs ;
typedef int SceGxmMultisampleMode ;
typedef int SceGxmBlendInfo ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(vita2d_fragment_programs *VAR_7,
 const SceGxmBlendInfo *VAR_8, SceGxmMultisampleMode VAR_9)
{
 int VAR_10;
 (void)VAR_10;

 VAR_10 = FUNC_1(
  VAR_3,
  VAR_1,
  VAR_0,
  VAR_9,
  VAR_8,
  VAR_2,
  &VAR_7->color);

 FUNC_0("color sceGxmShaderPatcherCreateFragmentProgram(): 0x%08X\n", VAR_10);

 VAR_10 = FUNC_1(
  VAR_3,
  VAR_4,
  VAR_0,
  VAR_9,
  VAR_8,
  VAR_6,
  &VAR_7->texture);

 FUNC_0("texture sceGxmShaderPatcherCreateFragmentProgram(): 0x%08X\n", VAR_10);

 VAR_10 = FUNC_1(
  VAR_3,
  VAR_5,
  VAR_0,
  VAR_9,
  VAR_8,
  VAR_6,
  &VAR_7->textureTint);

 FUNC_0("texture_tint sceGxmShaderPatcherCreateFragmentProgram(): 0x%08X\n", VAR_10);
}
