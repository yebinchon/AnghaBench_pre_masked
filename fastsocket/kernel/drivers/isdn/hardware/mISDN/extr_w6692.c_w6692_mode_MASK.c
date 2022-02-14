
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct w6692_hw {int fmask; int name; } ;
struct TYPE_2__ {int state; int Flags; int nr; struct w6692_hw* hw; } ;
struct w6692_ch {int b_mode; TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int FUNC_1 (struct w6692_ch*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct w6692_ch *VAR_15, u32 VAR_16)
{
 struct w6692_hw *VAR_17;

 VAR_17 = VAR_15->bch.hw;
 FUNC_3("%s: B%d protocol %x-->%x\n", VAR_17->name,
  VAR_15->bch.nr, VAR_15->bch.state, VAR_16);
 switch (VAR_16) {
 case 128:
  if ((VAR_17->fmask & VAR_14) && (VAR_15->b_mode & VAR_11))
   FUNC_1(VAR_15);
  VAR_15->b_mode = 0;
  FUNC_2(&VAR_15->bch);
  FUNC_0(VAR_15, VAR_10, VAR_15->b_mode);
  FUNC_0(VAR_15, VAR_5, VAR_7 | VAR_8);
  FUNC_5(VAR_1, &VAR_15->bch.Flags);
  FUNC_5(VAR_2, &VAR_15->bch.Flags);
  break;
 case 129:
  VAR_15->b_mode = VAR_13;
  FUNC_0(VAR_15, VAR_10, VAR_15->b_mode);
  FUNC_0(VAR_15, VAR_9, 0);
  FUNC_0(VAR_15, VAR_5, VAR_7 | VAR_6 |
   VAR_8);
  FUNC_6(VAR_2, &VAR_15->bch.Flags);
  break;
 case 130:
  VAR_15->b_mode = VAR_12;
  FUNC_0(VAR_15, VAR_10, VAR_15->b_mode);
  FUNC_0(VAR_15, VAR_3, 0xff);
  FUNC_0(VAR_15, VAR_4, 0xff);
  FUNC_0(VAR_15, VAR_9, 0);
  FUNC_0(VAR_15, VAR_5, VAR_7 | VAR_6 |
   VAR_8);
  FUNC_6(VAR_1, &VAR_15->bch.Flags);
  break;
 default:
  FUNC_4("%s: protocol %x not known\n", VAR_17->name, VAR_16);
  return -VAR_0;
 }
 VAR_15->bch.state = VAR_16;
 return 0;
}
