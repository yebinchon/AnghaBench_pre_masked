
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pp_cam_entry {int port; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pp_cam_entry*) ;
 scalar_t__ FUNC_2 (struct pp_cam_entry*) ;
 int FUNC_3 (int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_4(struct pp_cam_entry *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 int VAR_5=0;
 int VAR_6;

 if (VAR_3 == ((void*)0)) {
  return -VAR_0;
 }
 if (FUNC_2(VAR_2)) {
  FUNC_0("Write failed in setup\n");
  return -VAR_1;
 }
 VAR_6 = FUNC_3(VAR_2->port, VAR_3, VAR_4);
 if(VAR_6 != VAR_4) {
  FUNC_0("Write failed, wrote %d/%d\n", VAR_6, VAR_4);
  VAR_5 = -VAR_1;
 }
 FUNC_1(VAR_2);
 return VAR_5;
}
