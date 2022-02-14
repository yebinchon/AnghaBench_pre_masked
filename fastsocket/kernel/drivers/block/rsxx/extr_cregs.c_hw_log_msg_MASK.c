
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int dummy; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int FUNC_1 (int ,char*,int,char const*) ;
 int FUNC_2 (int ,char*,int,char const*) ;
 int FUNC_3 (int ,char*,int,char const*) ;
 int FUNC_4 (int ,char*,int,char const*) ;
 int FUNC_5 (int ,char*,int,char const*) ;
 int FUNC_6 (int ,char*,int,char const*) ;
 int FUNC_7 (int ,char*,int,char const*) ;
 int FUNC_8 (int ,char*,int,char const*) ;

__attribute__((used)) static void FUNC_9(struct rsxx_cardinfo *VAR_0, const char *VAR_1, int VAR_2)
{
 static char VAR_3;





 if ((VAR_2 > 3) && (VAR_1[0] == '<') && (VAR_1[2] == '>')) {
  VAR_3 = VAR_1[1];
  VAR_1 += 3;
  VAR_2 -= 3;
 }

 switch (VAR_3) {
 case '0':
  FUNC_4(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '1':
  FUNC_1(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '2':
  FUNC_2(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '3':
  FUNC_5(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '4':
  FUNC_8(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '5':
  FUNC_7(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '6':
  FUNC_6(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 case '7':
  FUNC_3(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 default:
  FUNC_6(FUNC_0(VAR_0), "HW: %.*s", VAR_2, VAR_1);
  break;
 }
}
