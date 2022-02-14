
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {int dvb_frontend; struct saa7146_dev* dev; } ;
struct budget_av {TYPE_1__ budget; scalar_t__ reinitialise_demod; int slot_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct saa7146_dev*,int,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_5, int VAR_6)
{
 struct budget_av *VAR_7 = (struct budget_av *) VAR_5->data;
 struct saa7146_dev *VAR_8 = VAR_7->budget.dev;

 if (VAR_6 != 0)
  return -VAR_1;

 FUNC_0(1, "ciintf_slot_reset\n");
 VAR_7->slot_status = VAR_4;

 FUNC_3(VAR_8, 2, VAR_2);

 FUNC_3(VAR_8, 0, VAR_2);
 FUNC_2(2);
 FUNC_3(VAR_8, 0, VAR_3);
 FUNC_2(20);

 FUNC_3(VAR_8, 2, VAR_3);
 FUNC_4(VAR_8, VAR_0);
 FUNC_2(20);


 if (VAR_7->reinitialise_demod)
  FUNC_1(VAR_7->budget.dvb_frontend);

 return 0;
}
