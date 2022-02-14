
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wl1251 {int cmd_box_addr; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct acx_header {size_t len; TYPE_1__ cmd; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251*,int ,struct acx_header*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct wl1251*,int ,void*,size_t) ;

int FUNC_4(struct wl1251 *VAR_3, u16 VAR_4, void *VAR_5, size_t VAR_6)
{
 struct acx_header *VAR_7 = VAR_5;
 int VAR_8;

 FUNC_1(VAR_2, "cmd interrogate");

 VAR_7->id = VAR_4;


 VAR_7->len = VAR_6 - sizeof(*VAR_7);

 VAR_8 = FUNC_0(VAR_3, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_2("INTERROGATE command failed");
  goto out;
 }


 FUNC_3(VAR_3, VAR_3->cmd_box_addr, VAR_5, VAR_6);

 VAR_7 = VAR_5;
 if (VAR_7->cmd.status != VAR_1)
  FUNC_2("INTERROGATE command error: %d",
        VAR_7->cmd.status);

out:
 return VAR_8;
}
