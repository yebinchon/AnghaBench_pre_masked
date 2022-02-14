
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coefdatasize; int msb; int linescreen; } ;
typedef TYPE_1__ vdp2rotationparameterfp_struct ;
typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int fixed32 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

fixed32 FUNC_2(vdp2rotationparameterfp_struct *VAR_0, u32 VAR_1, u8* VAR_2)
{
   s32 VAR_3;

   if (VAR_0->coefdatasize == 2)
   {
      VAR_1 &= 0x7FFFE;
      VAR_3 = FUNC_1(VAR_2, VAR_1);
      VAR_0->msb = (VAR_3 >> 15) & 0x1;
      return (signed) ((VAR_3 & 0x7FFF) | (VAR_3 & 0x4000 ? 0xFFFFC000 : 0x00000000)) * 64;
   }
   else
   {
      VAR_1 &= 0x7FFFC;
      VAR_3 = FUNC_0(VAR_2, VAR_1);
      VAR_0->linescreen = (VAR_3 >> 24) & 0x7F;
      VAR_0->msb = (VAR_3 >> 31) & 0x1;
      return (signed) ((VAR_3 & 0x00FFFFFF) | (VAR_3 & 0x00800000 ? 0xFF800000 : 0x00000000));
   }
}
