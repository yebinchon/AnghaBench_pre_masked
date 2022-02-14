
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_5, char **VAR_6, off_t VAR_7,
  int VAR_8, int *VAR_9, void *VAR_10)
{
 char* VAR_11 = VAR_5;

 VAR_11 += FUNC_0(VAR_11, "PMU driver version     : %d\n", VAR_0);
 VAR_11 += FUNC_0(VAR_11, "PMU firmware version   : %02x\n", VAR_4);
 VAR_11 += FUNC_0(VAR_11, "AC Power               : %d\n",
  ((VAR_3 & VAR_1) != 0) || VAR_2 == 0);
 VAR_11 += FUNC_0(VAR_11, "Battery count          : %d\n", VAR_2);

 return VAR_11 - VAR_5;
}
