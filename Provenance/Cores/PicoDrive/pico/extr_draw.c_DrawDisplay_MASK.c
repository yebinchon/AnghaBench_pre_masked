
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_3__ {int frame_count; } ;
struct TYPE_4__ {TYPE_1__ m; struct PicoVideo video; } ;


 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int*,int,int) ;
 size_t VAR_0 ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int,int,int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned char** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 int FUNC_7 (char*,int,size_t,int,int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_8(int VAR_19)
{
  unsigned char *VAR_20 = &VAR_3[VAR_0][0];
  struct PicoVideo *VAR_21=&VAR_12.video;
  int VAR_22=0,VAR_23=0,VAR_24=0;
  int VAR_25,VAR_26;

  VAR_18 &= ~(VAR_8|VAR_7);

  if (VAR_21->reg[12]&1) {
    VAR_25 = 328; VAR_26 = 40;
  } else {
    VAR_25 = 264; VAR_26 = 32;
  }


  VAR_22=VAR_21->reg[0x12];
  VAR_23=(VAR_22&0x1f)<<3;

  if (VAR_22&0x80) { if (VAR_0>=VAR_23) VAR_24=1; }
  else { if (VAR_0< VAR_23) VAR_24=1; }

  if (!VAR_24)
  {
    VAR_22=VAR_21->reg[0x11];
    VAR_23=VAR_22&0x1f;
    if (VAR_22&0x80) {
      if (!VAR_23) VAR_24=1;
      else if(VAR_23 < (VAR_26>>1)) VAR_24=2;
    } else {
      if (!VAR_23);
      else if(VAR_23 < (VAR_26>>1)) VAR_24=2;
      else VAR_24=1;
    }
  }


  if (VAR_13 & VAR_6)
    FUNC_2(1|(VAR_19<<1), VAR_2, 0, VAR_26);

  if (!(VAR_13 & VAR_5));
  else if (VAR_24 == 1)
    FUNC_6(0, VAR_26>>1, 0, VAR_19);
  else if (VAR_24 == 2) {
    FUNC_2(0|(VAR_19<<1), VAR_1, (VAR_22&0x80) ? 0 : VAR_23<<1, (VAR_22&0x80) ? VAR_23<<1 : VAR_26);
    FUNC_6( (VAR_22&0x80) ? VAR_23 : 0, (VAR_22&0x80) ? VAR_26>>1 : VAR_23, 0, VAR_19);
  } else
    FUNC_2(0|(VAR_19<<1), VAR_1, 0, VAR_26);

  if (!(VAR_13 & VAR_10));
  else if (VAR_18 & VAR_4)
    FUNC_1(0, VAR_19);
  else if (VAR_20[1] & VAR_16)
    FUNC_0(VAR_20, 0, VAR_19);


  if ((VAR_13 & VAR_6) && VAR_2[0])
    FUNC_5(VAR_2, VAR_19, VAR_25);

  if (!(VAR_13 & VAR_5));
  else if (VAR_24 == 1)
    FUNC_6(0, VAR_26>>1, 1, VAR_19);
  else if (VAR_24 == 2) {
    if (VAR_1[0]) FUNC_5(VAR_1, VAR_19, (VAR_22&0x80) ? VAR_23<<4 : VAR_25);
    FUNC_6((VAR_22&0x80) ? VAR_23 : 0, (VAR_22&0x80) ? VAR_26>>1 : VAR_23, 1, VAR_19);
  } else
    if (VAR_1[0]) FUNC_5(VAR_1, VAR_19, VAR_25);

  if (!(VAR_13 & VAR_9));
  else if (VAR_18 & VAR_4)
    FUNC_1(1, VAR_19);

  else if ((VAR_20[1] & 0xd0) == 0xd0 && (VAR_14 & VAR_11))
    FUNC_3(VAR_20, VAR_19);
  else if (VAR_19 && (VAR_20[1] & VAR_17))
    FUNC_4(VAR_20);
  else if (VAR_20[1] & VAR_15)
    FUNC_0(VAR_20, 1, 0);
  return 0;
}
