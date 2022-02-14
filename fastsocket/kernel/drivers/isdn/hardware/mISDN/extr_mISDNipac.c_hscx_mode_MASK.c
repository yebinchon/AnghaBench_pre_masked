
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {char nr; int state; int Flags; } ;
struct hscx_hw {int slot; TYPE_1__ bch; TYPE_2__* ip; } ;
struct TYPE_4__ {int type; int name; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;



 int FUNC_0 (struct hscx_hw*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct hscx_hw*,int) ;
 int FUNC_3 (char*,int ,char,int,int,char) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct hscx_hw *VAR_23, u32 VAR_24)
{
 FUNC_3("%s: HSCX %c protocol %x-->%x ch %d\n", VAR_23->ip->name,
  '@' + VAR_23->bch.nr, VAR_23->bch.state, VAR_24, VAR_23->bch.nr);
 if (VAR_23->ip->type & VAR_17) {
  if (VAR_23->bch.nr & 1) {
   FUNC_1(VAR_23->ip, VAR_20, 0x80);
   FUNC_1(VAR_23->ip, VAR_19, 0x88);
  } else {
   FUNC_1(VAR_23->ip, VAR_22, 0x81);
   FUNC_1(VAR_23->ip, VAR_21, 0x88);
  }
  switch (VAR_24) {
  case 128:
   FUNC_0(VAR_23, VAR_7, 0xC0);
   FUNC_0(VAR_23, VAR_5, 0x30);
   FUNC_0(VAR_23, VAR_6, 0xFF);
   FUNC_2(VAR_23, 0x41);
   FUNC_5(VAR_2, &VAR_23->bch.Flags);
   FUNC_5(VAR_3, &VAR_23->bch.Flags);
   break;
  case 129:
   FUNC_0(VAR_23, VAR_7, 0x88);
   FUNC_0(VAR_23, VAR_5, 0x00);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_6, VAR_4);
   FUNC_6(VAR_3, &VAR_23->bch.Flags);
   break;
  case 130:
   FUNC_0(VAR_23, VAR_7, 0xC0);
   FUNC_0(VAR_23, VAR_5, 0x00);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_6, VAR_4);
   FUNC_6(VAR_2, &VAR_23->bch.Flags);
   break;
  default:
   FUNC_4("%s: protocol not known %x\n", VAR_23->ip->name,
    VAR_24);
   return -VAR_1;
  }
 } else if (VAR_23->ip->type & VAR_16) {
  FUNC_0(VAR_23, VAR_8, 0x82);
  FUNC_0(VAR_23, VAR_9, 0x30);
  FUNC_0(VAR_23, VAR_18, 0x07);
  FUNC_0(VAR_23, VAR_12, 0x07);
  FUNC_0(VAR_23, VAR_14, VAR_23->slot);
  FUNC_0(VAR_23, VAR_13, VAR_23->slot);
  switch (VAR_24) {
  case 128:
   FUNC_0(VAR_23, VAR_14, 0x1F);
   FUNC_0(VAR_23, VAR_13, 0x1F);
   FUNC_0(VAR_23, VAR_11, 0x84);
   FUNC_0(VAR_23, VAR_8, 0x82);
   FUNC_0(VAR_23, VAR_10, 0xFF);
   FUNC_5(VAR_2, &VAR_23->bch.Flags);
   FUNC_5(VAR_3, &VAR_23->bch.Flags);
   break;
  case 129:
   FUNC_0(VAR_23, VAR_11, 0xe4);
   FUNC_0(VAR_23, VAR_8, 0x82);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_10, 0);
   FUNC_6(VAR_3, &VAR_23->bch.Flags);
   break;
  case 130:
   FUNC_0(VAR_23, VAR_11, 0x8c);
   FUNC_0(VAR_23, VAR_8, 0x8a);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_10, 0);
   FUNC_6(VAR_2, &VAR_23->bch.Flags);
   break;
  default:
   FUNC_4("%s: protocol not known %x\n", VAR_23->ip->name,
    VAR_24);
   return -VAR_1;
  }
 } else if (VAR_23->ip->type & VAR_15) {
  FUNC_0(VAR_23, VAR_8, 0x85);
  FUNC_0(VAR_23, VAR_9, 0x30);
  FUNC_0(VAR_23, VAR_18, 0x07);
  FUNC_0(VAR_23, VAR_12, 0x07);
  FUNC_0(VAR_23, VAR_14, VAR_23->slot);
  FUNC_0(VAR_23, VAR_13, VAR_23->slot);
  switch (VAR_24) {
  case 128:
   FUNC_0(VAR_23, VAR_14, 0x1F);
   FUNC_0(VAR_23, VAR_13, 0x1F);
   FUNC_0(VAR_23, VAR_11, 0x84);
   FUNC_0(VAR_23, VAR_8, 0x85);
   FUNC_0(VAR_23, VAR_10, 0xFF);
   FUNC_5(VAR_2, &VAR_23->bch.Flags);
   FUNC_5(VAR_3, &VAR_23->bch.Flags);
   break;
  case 129:
   FUNC_0(VAR_23, VAR_11, 0xe4);
   FUNC_0(VAR_23, VAR_8, 0x85);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_10, 0);
   FUNC_6(VAR_3, &VAR_23->bch.Flags);
   break;
  case 130:
   FUNC_0(VAR_23, VAR_11, 0x8c);
   FUNC_0(VAR_23, VAR_8, 0x8d);
   FUNC_2(VAR_23, 0x41);
   FUNC_0(VAR_23, VAR_10, 0);
   FUNC_6(VAR_2, &VAR_23->bch.Flags);
   break;
  default:
   FUNC_4("%s: protocol not known %x\n", VAR_23->ip->name,
    VAR_24);
   return -VAR_1;
  }
 } else
  return -VAR_0;
 VAR_23->bch.state = VAR_24;
 return 0;
}
