
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_port {int comp; } ;
struct mcast_device {int end_port; int start_port; struct mcast_port* port; int event_handler; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mcast_port*) ;
 int FUNC_1 (int ) ;
 struct mcast_device* FUNC_2 (struct ib_device*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mcast_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct ib_device*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_3)
{
 struct mcast_device *VAR_4;
 struct mcast_port *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, &VAR_1);
 if (!VAR_4)
  return;

 FUNC_3(&VAR_4->event_handler);
 FUNC_1(VAR_2);

 for (VAR_6 = 0; VAR_6 <= VAR_4->end_port - VAR_4->start_port; VAR_6++) {
  if (FUNC_5(VAR_3, VAR_4->start_port + VAR_6) ==
      VAR_0) {
   VAR_5 = &VAR_4->port[VAR_6];
   FUNC_0(VAR_5);
   FUNC_6(&VAR_5->comp);
  }
 }

 FUNC_4(VAR_4);
}
