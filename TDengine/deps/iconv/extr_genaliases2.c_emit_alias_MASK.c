
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*,...) ;
 int FUNC_2 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_3 (FILE* VAR_1, const char* VAR_2, const char* VAR_3, const char* VAR_4)
{
  FUNC_1(VAR_1,"  S(%s_%u, \"",VAR_2,VAR_0);

  {
    const char* VAR_5 = VAR_3;
    for (; *VAR_5; VAR_5++) {
      unsigned char VAR_6 = * (unsigned char *) VAR_5;
      if (VAR_6 >= 0x80)
        FUNC_0(1);
      if (VAR_6 >= 'a' && VAR_6 <= 'z')
        VAR_6 -= 'a'-'A';
      FUNC_2(VAR_6, VAR_1);
    }
  }
  FUNC_1(VAR_1,"\", ei_%s )\n", VAR_4);
  VAR_0++;
}
