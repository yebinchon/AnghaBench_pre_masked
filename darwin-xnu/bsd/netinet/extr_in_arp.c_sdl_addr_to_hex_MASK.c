
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_dl {int sdl_alen; scalar_t__ sdl_data; } ;


 int FUNC_0 (char*,int,char*,int const) ;

__attribute__((used)) static const char *
FUNC_1(const struct sockaddr_dl *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1;
 int VAR_4;
 const u_char *VAR_5 = (u_char *)(size_t)VAR_0->sdl_data;
 int VAR_6 = VAR_2 / 3;

 if (VAR_6 > VAR_0->sdl_alen) {
  VAR_6 = VAR_0->sdl_alen;
 }
 *VAR_3 = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  FUNC_0(VAR_3, 3, "%02x", VAR_5[VAR_4]);
  VAR_3 += 2;
  *VAR_3 = (VAR_4 == VAR_6 - 1) ? '\0' : ':';
  VAR_3++;
 }
 return (VAR_1);
}
