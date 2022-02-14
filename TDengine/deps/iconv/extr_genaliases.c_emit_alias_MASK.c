
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_3 (FILE* VAR_0, const char* VAR_1, const char* VAR_2)
{

  const char* VAR_3 = VAR_1;
  for (; *VAR_3; VAR_3++) {
    unsigned char VAR_4 = * (unsigned char *) VAR_3;
    if (VAR_4 >= 0x80)
      FUNC_0(1);
    if (VAR_4 >= 'a' && VAR_4 <= 'z')
      VAR_4 -= 'a'-'A';
    FUNC_2(VAR_4, VAR_0);
  }
  FUNC_1(VAR_0,", ei_%s\n", VAR_2);
}
