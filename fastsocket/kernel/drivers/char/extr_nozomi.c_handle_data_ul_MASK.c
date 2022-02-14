
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nozomi {int last_ier; TYPE_2__* pdev; int reg_fcr; int reg_ier; TYPE_1__* port; } ;
typedef enum port_type { ____Placeholder_port_type } port_type ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int toggle_ul; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int,struct nozomi*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct nozomi *VAR_3, enum port_type VAR_4, u16 VAR_5)
{
 u8 *VAR_6 = &(VAR_3->port[VAR_4].toggle_ul);

 if (*VAR_6 == 0 && VAR_5 & VAR_1) {
  VAR_3->last_ier &= ~VAR_0;
  FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
  if (FUNC_1(VAR_4, VAR_3)) {
   FUNC_2(VAR_1, VAR_3->reg_fcr);
   VAR_3->last_ier = VAR_3->last_ier | VAR_0;
   FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
   *VAR_6 = !*VAR_6;
  }

  if (VAR_5 & VAR_2) {
   VAR_3->last_ier &= ~VAR_0;
   FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
   if (FUNC_1(VAR_4, VAR_3)) {
    FUNC_2(VAR_2, VAR_3->reg_fcr);
    VAR_3->last_ier = VAR_3->last_ier | VAR_0;
    FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
    *VAR_6 = !*VAR_6;
   }
  }

 } else if (*VAR_6 == 1 && VAR_5 & VAR_2) {
  VAR_3->last_ier &= ~VAR_0;
  FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
  if (FUNC_1(VAR_4, VAR_3)) {
   FUNC_2(VAR_2, VAR_3->reg_fcr);
   VAR_3->last_ier = VAR_3->last_ier | VAR_0;
   FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
   *VAR_6 = !*VAR_6;
  }

  if (VAR_5 & VAR_1) {
   VAR_3->last_ier &= ~VAR_0;
   FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
   if (FUNC_1(VAR_4, VAR_3)) {
    FUNC_2(VAR_1, VAR_3->reg_fcr);
    VAR_3->last_ier = VAR_3->last_ier | VAR_0;
    FUNC_2(VAR_3->last_ier, VAR_3->reg_ier);
    *VAR_6 = !*VAR_6;
   }
  }
 } else {
  FUNC_2(VAR_5 & VAR_0, VAR_3->reg_fcr);
  FUNC_0(&VAR_3->pdev->dev, "port out of sync!\n");
  return 0;
 }
 return 1;
}
