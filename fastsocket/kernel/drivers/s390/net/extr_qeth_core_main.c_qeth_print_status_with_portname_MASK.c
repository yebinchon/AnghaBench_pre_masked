
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* portname; char* mcl_level; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__* gdev; } ;
typedef size_t __u8 ;
struct TYPE_3__ {int dev; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int *,char*,int ,char*,char*,char*,int ,char*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_1)
{
 char VAR_2[15];
 int VAR_3;

 FUNC_3(VAR_2, "%s", VAR_1->info.portname + 1);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  VAR_2[VAR_3] =
   (char) VAR_0[(__u8) VAR_2[VAR_3]];
 VAR_2[8] = 0;
 FUNC_0(&VAR_1->gdev->dev, "Device is a%s card%s%s%s\n"
        "with link type %s (portname: %s)\n",
        FUNC_1(VAR_1),
        (VAR_1->info.mcl_level[0]) ? " (level: " : "",
        (VAR_1->info.mcl_level[0]) ? VAR_1->info.mcl_level : "",
        (VAR_1->info.mcl_level[0]) ? ")" : "",
        FUNC_2(VAR_1),
        VAR_2);

}
