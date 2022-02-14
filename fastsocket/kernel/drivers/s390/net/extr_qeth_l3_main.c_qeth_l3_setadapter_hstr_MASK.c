
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ broadcast_mode; scalar_t__ macaddr_mode; } ;
struct qeth_card {TYPE_1__ options; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ,...) ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4, 4, "adphstr");

 if (FUNC_3(VAR_5, VAR_1)) {
  VAR_6 = FUNC_4(VAR_5,
     VAR_1,
     VAR_5->options.broadcast_mode);
  if (VAR_6)
   FUNC_1(2, "couldn't set broadcast mode on "
       "device %s: x%x\n",
       FUNC_0(VAR_5), VAR_6);
  VAR_6 = FUNC_4(VAR_5,
     VAR_0,
     VAR_5->options.macaddr_mode);
  if (VAR_6)
   FUNC_1(2, "couldn't set macaddr mode on "
       "device %s: x%x\n", FUNC_0(VAR_5), VAR_6);
  return VAR_6;
 }
 if (VAR_5->options.broadcast_mode == VAR_2)
  FUNC_1(2, "set adapter parameters not available "
      "to set broadcast mode, using ALLRINGS "
      "on device %s:\n", FUNC_0(VAR_5));
 if (VAR_5->options.macaddr_mode == VAR_3)
  FUNC_1(2, "set adapter parameters not available "
      "to set macaddr mode, using NONCANONICAL "
      "on device %s:\n", FUNC_0(VAR_5));
 return 0;
}
