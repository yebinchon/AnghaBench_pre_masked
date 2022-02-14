
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {int ci_present; } ;
struct budget_ci {int slot_status; TYPE_1__ budget; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct dvb_ca_en50221*,int,int ) ;
 unsigned int FUNC_1 (TYPE_1__*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_10, int VAR_11, int VAR_12)
{
 struct budget_ci *VAR_13 = (struct budget_ci *) VAR_10->data;
 unsigned int VAR_14;


 if (!VAR_13->budget.ci_present)
  return -VAR_5;


 VAR_14 = FUNC_1(&VAR_13->budget, VAR_2, VAR_1, 1, 1, 0);
 if (VAR_14 & VAR_0) {

  if (VAR_13->slot_status & VAR_6) {
   VAR_13->slot_status = VAR_7;
  }


  if (VAR_13->slot_status & VAR_9) {
   if (FUNC_0(VAR_10, VAR_11, 0) == 0x1d) {
    VAR_13->slot_status = VAR_8;
   }
  }
 } else {
  VAR_13->slot_status = VAR_6;
 }

 if (VAR_13->slot_status != VAR_6) {
  if (VAR_13->slot_status & VAR_8) {
   return VAR_3 | VAR_4;
  }
  return VAR_3;
 }

 return 0;
}
