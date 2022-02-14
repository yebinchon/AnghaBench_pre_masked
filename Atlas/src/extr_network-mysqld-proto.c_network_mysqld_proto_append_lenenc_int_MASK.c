
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint64 ;
typedef int gchar ;
typedef int GString ;


 int FUNC_0 (int *,int) ;

int FUNC_1(GString *VAR_0, guint64 VAR_1) {
 if (VAR_1 < 251) {
  FUNC_0(VAR_0, VAR_1);
 } else if (VAR_1 < 65536) {
  FUNC_0(VAR_0, (gchar)252);
  FUNC_0(VAR_0, (VAR_1 >> 0) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 8) & 0xff);
 } else if (VAR_1 < 16777216) {
  FUNC_0(VAR_0, (gchar)253);
  FUNC_0(VAR_0, (VAR_1 >> 0) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 8) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 16) & 0xff);
 } else {
  FUNC_0(VAR_0, (gchar)254);

  FUNC_0(VAR_0, (VAR_1 >> 0) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 8) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 16) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 24) & 0xff);

  FUNC_0(VAR_0, (VAR_1 >> 32) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 40) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 48) & 0xff);
  FUNC_0(VAR_0, (VAR_1 >> 56) & 0xff);
 }

 return 0;
}
