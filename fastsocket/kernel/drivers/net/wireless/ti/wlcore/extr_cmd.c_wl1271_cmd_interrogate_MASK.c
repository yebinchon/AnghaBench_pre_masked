
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wl1271 {int dummy; } ;
struct acx_header {void* len; void* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (struct wl1271*,int ,struct acx_header*,int,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct wl1271 *VAR_2, u16 VAR_3, void *VAR_4, size_t VAR_5)
{
 struct acx_header *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_2(VAR_1, "cmd interrogate");

 VAR_6->id = FUNC_0(VAR_3);


 VAR_6->len = FUNC_0(VAR_5 - sizeof(*VAR_6));

 VAR_7 = FUNC_1(VAR_2, VAR_0, VAR_6, sizeof(*VAR_6), VAR_5);
 if (VAR_7 < 0)
  FUNC_3("INTERROGATE command failed");

 return VAR_7;
}
