
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxafb_info {TYPE_1__* overlay; int command_done; int disable_done; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int branch_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct pxafb_info*,int ) ;
 int FUNC_3 (struct pxafb_info*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct pxafb_info *VAR_9 = VAR_8;
 unsigned int VAR_10, VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_3);
 if (VAR_11 & VAR_6) {
  VAR_10 = FUNC_2(VAR_9, VAR_1);
  FUNC_3(VAR_9, VAR_1, VAR_10 | VAR_2);
  FUNC_1(&VAR_9->disable_done);
 }





 FUNC_3(VAR_9, VAR_3, VAR_11);
 return VAR_0;
}
