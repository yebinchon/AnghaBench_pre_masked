
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int data ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, ssize_t VAR_1)
{
  char VAR_2[1200];
  ssize_t VAR_3;
  unsigned char *VAR_4 = VAR_0;
  char *VAR_5 = VAR_2;
  ssize_t VAR_6 = 0;
  int VAR_7 = sizeof(VAR_2);

  for(VAR_3 = 0; VAR_3<VAR_1 && (VAR_7 >= 0); VAR_3++) {
    FUNC_1(VAR_5, VAR_7, "%02x", VAR_4[VAR_3]);
    VAR_6 += 2;
    VAR_5 += 2;
    VAR_7 -= 2;
  }
  if(VAR_6)
    FUNC_0("'%s'", VAR_2);
}
