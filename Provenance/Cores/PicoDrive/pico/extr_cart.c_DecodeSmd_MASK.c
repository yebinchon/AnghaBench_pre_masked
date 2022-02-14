
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_5(unsigned char *VAR_0,int VAR_1)
{
  unsigned char *VAR_2=((void*)0);
  int VAR_3=0;

  VAR_2=(unsigned char *)FUNC_2(0x4000);
  if (VAR_2==((void*)0)) return 1;
  FUNC_4(VAR_2,0,0x4000);


  for (VAR_3=0; VAR_3+0x4200<=VAR_1; VAR_3+=0x4000)
  {
    FUNC_0(VAR_2,VAR_0+0x200+VAR_3);
    FUNC_3(VAR_0+VAR_3,VAR_2,0x4000);
  }

  FUNC_1(VAR_2);
  return 0;
}
