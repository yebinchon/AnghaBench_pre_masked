
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line6_dump_request {int timer; int wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct line6_dump_request*,void const*,size_t,int ) ;

int FUNC_3(struct line6_dump_request *VAR_0, const void *VAR_1,
         size_t VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, 0);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_1(&VAR_0->wait);
 FUNC_0(&VAR_0->timer);
 return 0;
}
