
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lguest {struct lg_eventfd_map* eventfds; } ;
struct lg_eventfd_map {int num; TYPE_1__* map; } ;
struct TYPE_3__ {unsigned long addr; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lg_eventfd_map*) ;
 struct lg_eventfd_map* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_6 (struct lg_eventfd_map*,struct lg_eventfd_map*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct lguest *VAR_3, unsigned long VAR_4, int VAR_5)
{
 struct lg_eventfd_map *VAR_6, *VAR_7 = VAR_3->eventfds;





 if (!VAR_4)
  return -VAR_0;





 VAR_6 = FUNC_4(sizeof(*VAR_6) + sizeof(VAR_6->map[0]) * (VAR_7->num + 1),
        VAR_2);
 if (!VAR_6)
  return -VAR_1;


 FUNC_5(VAR_6->map, VAR_7->map, sizeof(VAR_7->map[0]) * VAR_7->num);
 VAR_6->num = VAR_7->num;


 VAR_6->map[VAR_6->num].addr = VAR_4;
 VAR_6->map[VAR_6->num].event = FUNC_2(VAR_5);
 if (FUNC_0(VAR_6->map[VAR_6->num].event)) {
  int VAR_8 = FUNC_1(VAR_6->map[VAR_6->num].event);
  FUNC_3(VAR_6);
  return VAR_8;
 }
 VAR_6->num++;
 FUNC_6(VAR_3->eventfds, VAR_6);





 FUNC_7();
 FUNC_3(VAR_7);

 return 0;
}
