
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ guestlan; } ;
struct qeth_card {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,int ,int ,int,int) ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct qeth_card*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_2(VAR_4, 3, "arpflush");






 if (VAR_5->info.guestlan || (VAR_5->info.type == VAR_3))
  return -VAR_0;
 if (!FUNC_3(VAR_5, VAR_1)) {
  return -VAR_0;
 }
 VAR_6 = FUNC_5(VAR_5, VAR_1,
       VAR_2, 0);
 if (VAR_6) {
  VAR_7 = VAR_6;
  FUNC_1(2, "Could not flush ARP cache on %s: %s "
   "(0x%x/%d)\n", FUNC_0(VAR_5),
   FUNC_4(&VAR_6), VAR_7, VAR_7);
 }
 return VAR_6;
}
