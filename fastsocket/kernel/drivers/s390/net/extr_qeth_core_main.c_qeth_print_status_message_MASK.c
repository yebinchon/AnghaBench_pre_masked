
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int* mcl_level; scalar_t__ portname_required; int guestlan; } ;
struct qeth_card {TYPE_1__ info; } ;
typedef size_t __u8 ;






 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (int*,char*,int,int) ;

void FUNC_4(struct qeth_card *VAR_2)
{
 switch (VAR_2->info.type) {
 case 130:
 case 129:
 case 128:




  if (!VAR_2->info.mcl_level[0]) {
   FUNC_3(VAR_2->info.mcl_level, "%02x%02x",
    VAR_2->info.mcl_level[2],
    VAR_2->info.mcl_level[3]);

   VAR_2->info.mcl_level[VAR_0] = 0;
   break;
  }

 case 131:
  if ((VAR_2->info.guestlan) ||
      (VAR_2->info.mcl_level[0] & 0x80)) {
   VAR_2->info.mcl_level[0] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[0]];
   VAR_2->info.mcl_level[1] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[1]];
   VAR_2->info.mcl_level[2] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[2]];
   VAR_2->info.mcl_level[3] = (char) VAR_1[(__u8)
    VAR_2->info.mcl_level[3]];
   VAR_2->info.mcl_level[VAR_0] = 0;
  }
  break;
 default:
  FUNC_0(&VAR_2->info.mcl_level[0], 0, VAR_0 + 1);
 }
 if (VAR_2->info.portname_required)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);
}
