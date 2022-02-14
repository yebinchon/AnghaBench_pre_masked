
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nr; } ;
struct hscx_hw {TYPE_2__ bch; TYPE_1__* ip; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct hscx_hw*,int ) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct hscx_hw *VAR_1)
{
 u8 VAR_2, VAR_3 = 50;

 while (VAR_3) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  if ((VAR_2 & 0x44) == 0x40)
   break;
  FUNC_3(1);
  VAR_3--;
 }
 if (VAR_3 < 50)
  FUNC_1("%s: B%1d XFW %d us\n", VAR_1->ip->name, VAR_1->bch.nr,
   50 - VAR_3);
 if (!VAR_3)
  FUNC_2("%s: B%1d XFW timeout\n", VAR_1->ip->name, VAR_1->bch.nr);
}
