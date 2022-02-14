
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_0, u8 *VAR_1)
{
 char *VAR_2 = VAR_0;

 if (VAR_1[0] == 0 && VAR_1[1] == 0 && VAR_1[2] == 0 && VAR_1[3] == 0 &&
     VAR_1[4] == 0 && VAR_1[5] == 0 && VAR_1[6] == 0 && VAR_1[7] == 0 &&
     VAR_1[8] == 0 && VAR_1[9] == 0 && VAR_1[10] == 0xff && VAR_1[11] == 0xff) {



  VAR_2 += FUNC_0(VAR_0, "%pI4", VAR_1 + 12);
 } else {



  VAR_2 += FUNC_0(VAR_2, "%pI6", VAR_1);
 }
 VAR_2 += FUNC_0(VAR_2, "\n");
 return VAR_2 - VAR_0;
}
