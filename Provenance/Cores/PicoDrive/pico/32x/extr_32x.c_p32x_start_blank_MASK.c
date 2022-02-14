
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {int* vdp_regs; int pending_fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_8(void)
{
  if (VAR_11 != VAR_6 && !VAR_14) {
    int VAR_19, VAR_20;

    FUNC_7(VAR_16);

    VAR_19 = 8; VAR_20 = 224;
    if ((VAR_9.video.reg[1] & 8) && !(VAR_13 & VAR_8)) {
      VAR_19 = 0;
      VAR_20 = 240;
    }


    if ((VAR_10.vdp_regs[0] & VAR_2) != 0 &&
        (VAR_9.video.reg[12] & 1) &&
        (VAR_12 & VAR_7))
    {
      int VAR_21 = VAR_9.video.reg[7] & 0x3f;


      FUNC_1(VAR_19, VAR_20, VAR_21);
    }
    else if (VAR_11 != VAR_5)
      FUNC_2(VAR_19, VAR_20);

    FUNC_6(VAR_16);
  }


  VAR_10.vdp_regs[0x0a/2] |= VAR_4|VAR_3;


  if ((VAR_10.vdp_regs[0x0a/2] ^ VAR_10.pending_fb) & VAR_1) {
    VAR_10.vdp_regs[0x0a/2] &= ~VAR_1;
    VAR_10.vdp_regs[0x0a/2] |= VAR_10.pending_fb;
    FUNC_0(VAR_10.pending_fb ^ 1);
  }

  FUNC_5(((void*)0), FUNC_3(), VAR_0);
  FUNC_4(&VAR_17, VAR_15, 0);
  FUNC_4(&VAR_18, VAR_15, 0);
}
