
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct powernow_k8_data {int currpstate; int numps; int currvid; int currfid; } ;
struct TYPE_2__ {int x86; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct powernow_k8_data *VAR_10)
{
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0;

 if (VAR_9 == VAR_0) {
  FUNC_1(VAR_4, VAR_11, VAR_12);
  VAR_13 = VAR_11 & VAR_2;
  VAR_10->currpstate = VAR_13;





  if ((VAR_8.x86 == 0x11) && (VAR_13 >= VAR_10->numps))
   VAR_10->currpstate = VAR_1;

  return 0;
 }
 do {
  if (VAR_13++ > 10000) {
   FUNC_0("detected change pending stuck\n");
   return 1;
  }
  FUNC_1(VAR_3, VAR_11, VAR_12);
 } while (VAR_11 & VAR_6);

 VAR_10->currvid = VAR_12 & VAR_5;
 VAR_10->currfid = VAR_11 & VAR_7;

 return 0;
}
