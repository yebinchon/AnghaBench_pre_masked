
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CMDPMOD; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int u16 ;
typedef int * iPix ;
typedef int Vdp1 ;
struct TYPE_6__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int,int *,TYPE_1__*) ;
 int FUNC_3 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(int VAR_5, int VAR_6, Vdp1* VAR_7, vdp1cmd_struct * VAR_8, u8 * VAR_9) {

 u16* VAR_10;
 int VAR_11 = VAR_8->CMDPMOD & 0x0100;
 int VAR_12 = ((VAR_8->CMDPMOD & 0x40) != 0);
   int VAR_13 = VAR_6;

   if (FUNC_1(VAR_6, VAR_7))
      return;

 VAR_6 /= VAR_3;
   VAR_10 = &((u16 *)VAR_9)[(VAR_6 * VAR_4) + VAR_5];

   if (VAR_10 >= (u16*)(VAR_9 + 0x40000))
  return;

 if(VAR_11 && (VAR_5^VAR_6)&1)
  return;

   if (FUNC_2(VAR_5, VAR_13, VAR_7, VAR_8))
      return;

 if (VAR_8->CMDPMOD & (1 << 15))
 {
  if (VAR_0) {
   *VAR_10 |= 0x8000;
   return;
  }
 }

 if ( VAR_12 || (VAR_0 & VAR_1))
 {
  switch( VAR_8->CMDPMOD & 0x7 )
  {
  case 0:
   if (!((VAR_0 == 0) && !VAR_12))
    *(VAR_10) = VAR_0;
   break;
  case 1:
   if (*(VAR_10) & (1 << 15))
    *(VAR_10) = FUNC_3(*(VAR_10), 0, (1 << 7)) | (1 << 15);
   break;
  case 2:
   *(VAR_10) = ((VAR_0 & ~0x8421) >> 1) | (1 << 15);
   break;
  case 3:
   if ( *(VAR_10) & (1 << 15) )
    *(VAR_10) = FUNC_3( *(VAR_10), VAR_0, (1 << 7) ) | (1 << 15);
   else
    *(VAR_10) = VAR_0;
   break;
  case 4:




   if(
    (((VAR_8->CMDPMOD >> 3) & 0x7) != 5) &&
    (((VAR_8->CMDPMOD >> 3) & 0x7) != 1) &&
    (int)VAR_2.g == 16 &&
    (int)VAR_2.b == 16)
   {
    int VAR_14 = (int)(VAR_2.r-0x10);
    if(VAR_14 < 0) VAR_14 = 0;
    VAR_0 = VAR_0+VAR_14;
    *(VAR_10) = VAR_0;
    break;
   }
   *(VAR_10) = (((FUNC_4( VAR_0&0x001F, (int)VAR_2.r))&0x1F)|(((FUNC_4( (VAR_0&0x03e0) >> 5, (int)VAR_2.g))&0x1F)<<5)|(((FUNC_4( (VAR_0&0x7c00) >> 10, (int)VAR_2.b))&0x1F)<<10) |0x8000 );
   break;
  default:
   *(VAR_10) = FUNC_3( ((((int)VAR_2.r)&0x1F)|((((int)VAR_2.g)&0x1F)<<5)|((((int)VAR_2.b)&0x1F)<<10) |0x8000 ), VAR_0, (1 << 7) ) | (1 << 15);
   break;
  }
 }
}
