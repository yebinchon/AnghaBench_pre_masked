
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(unsigned char VAR_0, int VAR_1,
          int VAR_2, char *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_1) {
 case 129:

  VAR_5 = 1;
  VAR_4[0] = VAR_0;
  break;

 case 130:

  VAR_5 = 1;
  VAR_4[0] = VAR_3[VAR_0];
  break;

 case 128:

  FUNC_0(VAR_4,"%d ", (VAR_3[VAR_0] * 10) / (VAR_2));
  VAR_5 = FUNC_1(VAR_4);
  VAR_4[VAR_5 - 1] = VAR_4[VAR_5 - 2];
  VAR_4[VAR_5 - 2] = '.';
  break;

 default:
  break;
 };

 return VAR_5;
}
