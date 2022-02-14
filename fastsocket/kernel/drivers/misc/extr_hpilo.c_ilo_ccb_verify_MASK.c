
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilo_hwinfo {TYPE_1__* ilo_dev; } ;
struct ccb {int dummy; } ;
struct ccb_data {struct ccb driver_ccb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ccb*) ;
 scalar_t__ FUNC_2 (struct ilo_hwinfo*,struct ccb*,int ,int*,int *,int *) ;
 int FUNC_3 (struct ilo_hwinfo*,struct ccb*,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ilo_hwinfo *VAR_4, struct ccb_data *VAR_5)
{
 int VAR_6, VAR_7;
 struct ccb *VAR_8 = &VAR_5->driver_ccb;


 for (VAR_7 = VAR_1; VAR_7 > 0; VAR_7--) {
  if (FUNC_2(VAR_4, VAR_8, VAR_2, &VAR_6, ((void*)0), ((void*)0)))
   break;
  FUNC_4(VAR_3);
 }

 if (VAR_7 == 0) {
  FUNC_0(&VAR_4->ilo_dev->dev, "Open could not dequeue a packet\n");
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_8, VAR_2, VAR_6, 0);
 FUNC_1(VAR_8);
 return 0;
}
