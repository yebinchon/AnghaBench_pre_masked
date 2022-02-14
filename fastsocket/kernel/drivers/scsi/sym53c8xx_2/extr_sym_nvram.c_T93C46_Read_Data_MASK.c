
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_device {int dummy; } ;


 int FUNC_0 (struct sym_device*,unsigned short*,unsigned char*) ;
 int FUNC_1 (struct sym_device*,int,unsigned char*,unsigned char*) ;
 int FUNC_2 (struct sym_device*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct sym_device *VAR_0, unsigned short *VAR_1,
  int VAR_2, unsigned char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  unsigned char VAR_5;

  FUNC_1(VAR_0, 0x180 | VAR_4, &VAR_5, VAR_3);
  if (VAR_5 & 0x01)
   return 1;
  FUNC_0(VAR_0, &VAR_1[VAR_4], VAR_3);
  FUNC_2(VAR_0, VAR_3);
 }

 return 0;
}
