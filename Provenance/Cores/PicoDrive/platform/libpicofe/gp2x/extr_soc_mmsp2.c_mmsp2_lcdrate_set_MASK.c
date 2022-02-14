
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 if (VAR_2[0x2800>>1] & 0x100)
  return 0;

 FUNC_1("setting custom LCD refresh (%d Hz)... ", VAR_4 ? 100 : 120);
 FUNC_0(VAR_3);

 FUNC_2(VAR_4 ? VAR_0 : VAR_1);
 FUNC_1("done.\n");
 return 0;
}
