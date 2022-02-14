
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char chpid; char unit_addr2; char cula; int guestlan; } ;
struct qeth_card {TYPE_1__ info; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct qeth_card *VAR_2, char *VAR_3)
{
 FUNC_0(VAR_0, 2, "cfgunit");
 VAR_2->info.chpid = VAR_3[30];
 VAR_2->info.unit_addr2 = VAR_3[31];
 VAR_2->info.cula = VAR_3[63];
 VAR_2->info.guestlan = ((VAR_3[0x10] == VAR_1['V']) &&
          (VAR_3[0x11] == VAR_1['M']));
}
