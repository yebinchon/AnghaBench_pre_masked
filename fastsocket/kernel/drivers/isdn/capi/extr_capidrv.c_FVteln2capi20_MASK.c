
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,unsigned long*,int*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, u8 VAR_1[1+2+2+31])
{
 unsigned long VAR_2;
 int VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4) return VAR_4;

 VAR_1[0] = 2+2+31;

        VAR_1[1] = 3; VAR_1[2] = 0;

        if (VAR_3) {
     VAR_1[3] = 0; VAR_1[4] = 0;
    } else {
     VAR_1[3] = 1; VAR_1[4] = 0;
 }

 VAR_1[5] = 0;
 for (VAR_5=1; VAR_5 <= 30; VAR_5++)
  VAR_1[5+VAR_5] = (VAR_2 & (1 << VAR_5)) ? 0xff : 0;
 return 0;
}
