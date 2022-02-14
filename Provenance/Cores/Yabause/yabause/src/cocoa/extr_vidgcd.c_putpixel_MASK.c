
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
typedef int * iPix ;
struct TYPE_6__ {int CMDPMOD; int CMDCTRL; } ;
struct TYPE_5__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
struct TYPE_4__ {int* priosused; size_t* prioritytable; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int*,int*,int*) ;
 int FUNC_4 (int,int,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(int VAR_12, int VAR_13) {

 u16* VAR_14 = &((u16 *)VAR_4)[(VAR_13 * VAR_11) + VAR_12];
 int VAR_15 = VAR_0.CMDPMOD & 0x0100;
 int VAR_16 = ((VAR_0.CMDPMOD & 0x40) != 0);
 int VAR_17 = VAR_0.CMDCTRL & 0x7;
 int VAR_18=1;

 if(VAR_15 && (VAR_12^VAR_13)&1)
  return;

 if(VAR_17 == 4 || VAR_17 == 5 || VAR_17 == 6)
  VAR_18 = 0;

 if (VAR_0.CMDPMOD & 0x0400) FUNC_2((VAR_0.CMDPMOD >> 9) & 0x1);

 if (VAR_12 >= VAR_6 &&
  VAR_12 < VAR_5 &&
  VAR_13 >= VAR_8 &&
  VAR_13 < VAR_7)
 {}
 else
  return;

 if (VAR_0.CMDPMOD & 0x0400) FUNC_1();


 if ( VAR_16 || (VAR_1 & VAR_2))
 {
  switch( VAR_0.CMDPMOD & 0x7 )
  {
  case 0:
   if (!((VAR_1 == 0) && !VAR_16))
    *(VAR_14) = VAR_1;
   break;
  case 1:
   *(VAR_14) = VAR_1;
   break;
  case 2:
   *(VAR_14) = ((VAR_1 & ~0x8421) >> 1) | (1 << 15);
   break;
  case 3:
   if ( *(VAR_14) & (1 << 15) )
    *(VAR_14) = FUNC_4( *(VAR_14), VAR_1, (1 << 7) ) | (1 << 15);
   else
    *(VAR_14) = VAR_1;
   break;
  case 4:




   if(
    (((VAR_0.CMDPMOD >> 3) & 0x7) != 5) &&
    (((VAR_0.CMDPMOD >> 3) & 0x7) != 1) &&
    (int)VAR_3.g == 16 &&
    (int)VAR_3.b == 16)
   {
    int VAR_19 = (int)(VAR_3.r-0x10);
    if(VAR_19 < 0) VAR_19 = 0;
    VAR_1 = VAR_1+VAR_19;
    *(VAR_14) = VAR_1;
    break;
   }
   *(VAR_14) = (((FUNC_5( VAR_1&0x001F, (int)VAR_3.r))&0x1F)|(((FUNC_5( (VAR_1&0x03e0) >> 5, (int)VAR_3.g))&0x1F)<<5)|(((FUNC_5( (VAR_1&0x7c00) >> 10, (int)VAR_3.b))&0x1F)<<10) |0x8000 );
   break;
  default:
   *(VAR_14) = FUNC_4( ((((int)VAR_3.r)&0x1F)|((((int)VAR_3.g)&0x1F)<<5)|((((int)VAR_3.b)&0x1F)<<10) |0x8000 ), VAR_1, (1 << 7) ) | (1 << 15);
   break;
  }

        if(*VAR_14 & 0x8000) {
            VAR_9.priosused[VAR_9.prioritytable[0]] = 1;
        }
        else if(*VAR_14) {
            u16 VAR_20 = *VAR_14;
            int VAR_21, VAR_22, VAR_23;

            FUNC_3(VAR_10, &VAR_20, &VAR_21, &VAR_22, &VAR_23);
            VAR_9.priosused[VAR_22] = 1;
        }
 }
}
