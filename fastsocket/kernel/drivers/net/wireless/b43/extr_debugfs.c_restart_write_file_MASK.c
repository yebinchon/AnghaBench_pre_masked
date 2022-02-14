
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,char*) ;

__attribute__((used)) static int FUNC_1(struct b43_wldev *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 > 0 && VAR_2[0] == '1') {
  FUNC_0(VAR_1, "manually restarted");
 } else
  VAR_4 = -VAR_0;

 return VAR_4;
}
