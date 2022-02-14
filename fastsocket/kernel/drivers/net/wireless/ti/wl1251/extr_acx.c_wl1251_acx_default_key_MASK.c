
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1251 {void* default_key; } ;
struct acx_dot11_default_key {void* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_dot11_default_key*) ;
 struct acx_dot11_default_key* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_dot11_default_key*,int) ;
 int FUNC_3 (int ,char*,void*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5)
{
 struct acx_dot11_default_key *VAR_6;
 int VAR_7;

 FUNC_3(VAR_0, "acx dot11_default_key (%d)", VAR_5);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->id = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_1,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("Couldn't set default key");
  goto out;
 }

 VAR_4->default_key = VAR_5;

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
