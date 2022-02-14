
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ route4; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,int,int ) ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct qeth_card*,int *,int ) ;
 int FUNC_4 (struct qeth_card*,int ,int ) ;

int FUNC_5(struct qeth_card *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, 3, "setrtg4");

 FUNC_3(VAR_3, &VAR_3->options.route4.type,
      VAR_1);

 VAR_4 = FUNC_4(VAR_3, VAR_3->options.route4.type,
      VAR_1);
 if (VAR_4) {
  VAR_3->options.route4.type = VAR_0;
  FUNC_1(2, "Error (0x%04x) while setting routing type"
   " on %s. Type set to 'no router'.\n", VAR_4,
   FUNC_0(VAR_3));
 }
 return VAR_4;
}
