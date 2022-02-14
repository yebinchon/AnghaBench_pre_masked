
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_cam_entry {scalar_t__ open_count; int port; int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void *VAR_5)
{
 struct pp_cam_entry *VAR_6 = (struct pp_cam_entry *)VAR_5;

 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if(VAR_6->open_count == 0) {
  if (FUNC_1(VAR_6->pdev)) {
   FUNC_0("failed to claim the port\n");
   return -VAR_0;
  }
  FUNC_3(VAR_6->port, VAR_2);
  FUNC_2(VAR_6->port);
  FUNC_4(VAR_6->port, VAR_4);
  FUNC_5(50);
  FUNC_4(VAR_6->port,
          VAR_4
          | VAR_3);
 }

 ++VAR_6->open_count;

 return 0;
}
