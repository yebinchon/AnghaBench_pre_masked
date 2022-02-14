
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intelfb_vsync {unsigned int count; int wait; } ;
struct intelfb_info {struct intelfb_vsync vsync; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct intelfb_info*) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(struct intelfb_info *VAR_3, u32 VAR_4)
{
 struct intelfb_vsync *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 switch (VAR_4) {
  case 0:
   VAR_5 = &VAR_3->vsync;
   break;
  default:
   return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5->count;
 VAR_7 = FUNC_2(VAR_5->wait,
            VAR_6 != VAR_5->count, VAR_2 / 10);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 == 0) {
  FUNC_0("wait_for_vsync timed out!\n");
  return -VAR_1;
 }

 return 0;
}
