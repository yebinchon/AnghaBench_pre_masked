
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isar_hw {int version; TYPE_2__* ch; int hw; int (* ctrl ) (int ,int ,int ) ;int name; } ;
struct TYPE_6__ {long data; int * function; } ;
struct TYPE_4__ {int debug; int Flags; } ;
struct TYPE_5__ {TYPE_1__ bch; TYPE_3__ ftimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isar_hw*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct isar_hw *VAR_5)
{
 int VAR_6 = 3;

 while (VAR_6--) {
  VAR_5->version = FUNC_0(VAR_5);
  if (VAR_5->ch[0].bch.debug & VAR_0)
   FUNC_2("%s: Testing version %d (%d time)\n",
    VAR_5->name, VAR_5->version, 3 - VAR_6);
  if (VAR_5->version == 1)
   break;
  VAR_5->ctrl(VAR_5->hw, VAR_3, 0);
 }
 if (VAR_5->version != 1)
  return -VAR_1;
 VAR_5->ch[0].ftimer.function = &VAR_4;
 VAR_5->ch[0].ftimer.data = (long)&VAR_5->ch[0];
 FUNC_1(&VAR_5->ch[0].ftimer);
 FUNC_4(VAR_2, &VAR_5->ch[0].bch.Flags);
 VAR_5->ch[1].ftimer.function = &VAR_4;
 VAR_5->ch[1].ftimer.data = (long)&VAR_5->ch[1];
 FUNC_1(&VAR_5->ch[1].ftimer);
 FUNC_4(VAR_2, &VAR_5->ch[1].bch.Flags);
 return 0;
}
