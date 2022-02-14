
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
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_header*,size_t,int ,unsigned long) ;

int FUNC_4(struct wl1271 *VAR_2, u16 VAR_3, void *VAR_4,
      size_t VAR_5, unsigned long VAR_6)
{
 struct acx_header *VAR_7 = VAR_4;
 int VAR_8;

 FUNC_1(VAR_1, "cmd configure (%d)", VAR_3);

 VAR_7->id = FUNC_0(VAR_3);


 VAR_7->len = FUNC_0(VAR_5 - sizeof(*VAR_7));

 VAR_8 = FUNC_3(VAR_2, VAR_0, VAR_7, VAR_5, 0,
           VAR_6);
 if (VAR_8 < 0) {
  FUNC_2("CONFIGURE command NOK");
  return VAR_8;
 }

 return VAR_8;
}
