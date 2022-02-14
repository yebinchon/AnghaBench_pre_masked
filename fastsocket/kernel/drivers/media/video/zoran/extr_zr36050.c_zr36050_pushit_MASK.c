
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zr36050 {int name; } ;


 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (struct zr36050*,int ,char const) ;

__attribute__((used)) static int
FUNC_2 (struct zr36050 *VAR_0,
  u16 VAR_1,
  u16 VAR_2,
  const char *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(4, "%s: write data block to 0x%04x (len=%d)\n", VAR_0->name,
  VAR_1, VAR_2);
 while (VAR_4 < VAR_2) {
  FUNC_1(VAR_0, VAR_1++, VAR_3[VAR_4++]);
 }

 return VAR_4;
}
