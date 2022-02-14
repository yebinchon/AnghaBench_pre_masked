
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_cam_entry {int port; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_cam_entry *VAR_1)
{
 int VAR_2;
 for(VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  if(!FUNC_2(VAR_1->port, VAR_0)) {
   break;
  }
  FUNC_1(10);
 }
 if(VAR_2 == 4) {
  FUNC_0("Unable to negotiate IEEE1284 ECP Download mode\n");
  return -1;
 }
 return 0;
}
