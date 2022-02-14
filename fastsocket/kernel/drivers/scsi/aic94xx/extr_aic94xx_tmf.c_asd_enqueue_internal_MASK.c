
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct asd_ascb {void (* tasklet_complete ) (struct asd_ascb*,struct done_list_struct*) ;int uldd_timer; TYPE_1__ timer; int ha; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct asd_ascb*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct asd_ascb *VAR_2,
  void (*VAR_3)(struct asd_ascb *,
      struct done_list_struct *),
    void (*VAR_4)(unsigned long))
{
 int VAR_5;

 VAR_2->tasklet_complete = VAR_3;
 VAR_2->uldd_timer = 1;

 VAR_2->timer.data = (unsigned long) VAR_2;
 VAR_2->timer.function = VAR_4;
 VAR_2->timer.expires = VAR_1 + VAR_0;

 FUNC_0(&VAR_2->timer);

 VAR_5 = FUNC_1(VAR_2->ha, VAR_2, 1);
 if (FUNC_3(VAR_5))
  FUNC_2(&VAR_2->timer);
 return VAR_5;
}
