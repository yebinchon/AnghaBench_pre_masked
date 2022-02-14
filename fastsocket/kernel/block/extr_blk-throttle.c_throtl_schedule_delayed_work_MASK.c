
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delayed_work {int dummy; } ;
struct throtl_data {scalar_t__ limits_changed; struct delayed_work throtl_work; } ;


 int FUNC_0 (struct delayed_work*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct delayed_work*,unsigned long) ;
 int FUNC_2 (struct throtl_data*,char*,unsigned long,int ) ;
 scalar_t__ FUNC_3 (struct throtl_data*) ;

__attribute__((used)) static void
FUNC_4(struct throtl_data *VAR_2, unsigned long VAR_3)
{

 struct delayed_work *VAR_4 = &VAR_2->throtl_work;


 if (FUNC_3(VAR_2) > 0 || VAR_2->limits_changed) {




  FUNC_0(VAR_4);
  FUNC_1(VAR_1, VAR_4, VAR_3);
  FUNC_2(VAR_2, "schedule work. delay=%lu jiffies=%lu",
    VAR_3, VAR_0);
 }
}
