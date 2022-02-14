
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u_char *VAR_1, u_char *VAR_2, int VAR_3,
    char *VAR_4, u_char *VAR_5, u_char *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;

    if (VAR_1 == VAR_2)
     return -VAR_0;
    VAR_9 = 0; VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
 if (*VAR_1 == 0xff)
  break;
 VAR_5[VAR_7] = VAR_8;
 VAR_9++;
 for (;;) {
     VAR_4[VAR_8++] = (*VAR_1 == 0xff) ? '\0' : *VAR_1;
     if ((*VAR_1 == '\0') || (*VAR_1 == 0xff)) break;
     if (++VAR_1 == VAR_2)
      return -VAR_0;
 }
 if ((*VAR_1 == 0xff) || (++VAR_1 == VAR_2)) break;
    }
    if (VAR_6) {
 *VAR_6 = VAR_9;
 return 0;
    } else {
 return (VAR_9 == VAR_3) ? 0 : -VAR_0;
    }
}
