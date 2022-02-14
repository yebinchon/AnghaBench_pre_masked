
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int data ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_0, ssize_t VAR_1)
{
  char VAR_2[120];
  ssize_t VAR_3;
  unsigned char *VAR_4 = VAR_0;
  char *VAR_5 = VAR_2;
  ssize_t VAR_6 = 0;
  int VAR_7 = sizeof(VAR_2);

  for(VAR_3 = 0; VAR_3<VAR_1; VAR_3++) {
    switch(VAR_4[VAR_3]) {
    case '\n':
      FUNC_2(VAR_5, VAR_7, "\\n");
      VAR_6 += 2;
      VAR_5 += 2;
      VAR_7 -= 2;
      break;
    case '\r':
      FUNC_2(VAR_5, VAR_7, "\\r");
      VAR_6 += 2;
      VAR_5 += 2;
      VAR_7 -= 2;
      break;
    default:
      FUNC_2(VAR_5, VAR_7, "%c", (FUNC_0(VAR_4[VAR_3]) ||
                                   VAR_4[VAR_3] == 0x20) ?VAR_4[VAR_3]:'.');
      VAR_6++;
      VAR_5++;
      VAR_7--;
      break;
    }

    if(VAR_6>60) {
      FUNC_1("'%s'", VAR_2);
      VAR_6 = 0;
      VAR_5 = VAR_2;
      VAR_7 = sizeof(VAR_2);
    }
  }
  if(VAR_6)
    FUNC_1("'%s'", VAR_2);
}
