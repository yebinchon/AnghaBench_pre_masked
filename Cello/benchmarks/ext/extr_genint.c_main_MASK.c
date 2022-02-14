
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_0, char *VAR_1[])
{
 int VAR_2, VAR_3 = 500000;
 if (VAR_0 > 1) VAR_3 = FUNC_0(VAR_1[1]);
 FUNC_3(11);
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
  FUNC_1("%u\n", (unsigned)((FUNC_2() % (VAR_3/4)) * 271828183u));
 return 0;
}
