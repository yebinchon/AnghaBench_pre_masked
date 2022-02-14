
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,unsigned int,...) ;

int FUNC_1(char* VAR_0, int VAR_1, unsigned VAR_2, int VAR_3) {
  unsigned VAR_4, VAR_5, VAR_6;
  int VAR_7;

  switch (VAR_3) {
    case 132:
      VAR_4 = VAR_2 * 10 / 6;
      VAR_5 = VAR_4 / 100;
      VAR_4 -= VAR_5 * 100;
      VAR_6 = VAR_5 / 60;
      VAR_5 -= VAR_6 * 60;
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%02u:%02u.%02u", VAR_6, VAR_5, VAR_4);
      break;

    case 129:
      VAR_4 = VAR_2 / 60;
      VAR_2 -= VAR_4 * 60;
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%02u:%02u", VAR_4, VAR_2);
      break;

    case 133:
      VAR_4 = VAR_2 / 100;
      VAR_2 -= VAR_4 * 100;
      VAR_5 = VAR_4 / 60;
      VAR_4 -= VAR_5 * 60;
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%02u:%02u.%02u", VAR_5, VAR_4, VAR_2);
      break;

    case 130:
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%06u Points", VAR_2);
      break;

    case 128:
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%01u", VAR_2);
      break;

    case 131:
    default:
      VAR_7 = FUNC_0(VAR_0, VAR_1, "%06u", VAR_2);
      break;
  }

  return VAR_7;
}
