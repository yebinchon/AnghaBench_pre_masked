
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct b43legacy_wldev *VAR_1, char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  FUNC_1("r%d = 0x%04x\n", VAR_5,
   FUNC_0(VAR_1, VAR_0, VAR_5));
 }

 return VAR_4;
}
