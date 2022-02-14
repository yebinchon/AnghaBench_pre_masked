
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct hfc_multi {TYPE_1__* chan; int * created; } ;
struct dchannel {int Flags; } ;
struct bchannel {int Flags; } ;
struct TYPE_2__ {size_t port; struct bchannel* bch; struct dchannel* dch; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfc_multi*,scalar_t__) ;
 int FUNC_1 (struct hfc_multi*,int ,int ) ;
 int FUNC_2 (struct hfc_multi*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct hfc_multi*,int) ;
 int FUNC_4 (struct hfc_multi*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct hfc_multi *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct dchannel *VAR_7;
 struct bchannel *VAR_8;
 u_char VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_2 + VAR_4);
 VAR_6 = 0;
 while (VAR_6 < 8) {
  VAR_5 = (VAR_4 << 2) + (VAR_6 >> 1);
  VAR_7 = VAR_3->chan[VAR_5].dch;
  VAR_8 = VAR_3->chan[VAR_5].bch;
  if (((!VAR_7) && (!VAR_8)) || (!VAR_3->created[VAR_3->chan[VAR_5].port])) {
   VAR_6 += 2;
   continue;
  }
  if (VAR_7 && (VAR_9 & (1 << VAR_6)) &&
      FUNC_5(VAR_0, &VAR_7->Flags)) {
   FUNC_4(VAR_3, VAR_5);

   FUNC_1(VAR_3, VAR_1, 0);
   FUNC_2(VAR_3);
  }
  if (VAR_8 && (VAR_9 & (1 << VAR_6)) &&
      FUNC_5(VAR_0, &VAR_8->Flags)) {
   FUNC_4(VAR_3, VAR_5);

   FUNC_1(VAR_3, VAR_1, 0);
   FUNC_2(VAR_3);
  }
  VAR_6++;
  if (VAR_7 && (VAR_9 & (1 << VAR_6)) &&
      FUNC_5(VAR_0, &VAR_7->Flags)) {
   FUNC_3(VAR_3, VAR_5);
  }
  if (VAR_8 && (VAR_9 & (1 << VAR_6)) &&
      FUNC_5(VAR_0, &VAR_8->Flags)) {
   FUNC_3(VAR_3, VAR_5);
  }
  VAR_6++;
 }
}
