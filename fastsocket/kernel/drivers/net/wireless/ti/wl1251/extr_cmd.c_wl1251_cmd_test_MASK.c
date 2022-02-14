
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ status; } ;
struct wl1251_command {TYPE_1__ header; } ;
struct wl1251 {int cmd_box_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251*,int ,void*,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct wl1251*,int ,void*,size_t) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_3, void *VAR_4, size_t VAR_5, u8 VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_2, "cmd test");

 VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5);

 if (VAR_7 < 0) {
  FUNC_4("TEST command failed");
  return VAR_7;
 }

 if (VAR_6) {
  struct wl1251_command *VAR_8;






  FUNC_3(VAR_3, VAR_3->cmd_box_addr, VAR_4, VAR_5);

  VAR_8 = VAR_4;

  if (VAR_8->header.status != VAR_0)
   FUNC_2("TEST command answer error: %d",
         VAR_8->header.status);
 }

 return 0;
}
