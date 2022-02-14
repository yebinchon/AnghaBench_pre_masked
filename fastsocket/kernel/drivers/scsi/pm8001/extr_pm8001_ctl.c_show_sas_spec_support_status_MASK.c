
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(unsigned int VAR_2, char *VAR_3)
{
 ssize_t VAR_4 = 0;

 if (VAR_2 & VAR_0)
  VAR_4 = FUNC_0(VAR_3, "%s", "SAS1.1");
 if (VAR_2 & VAR_1)
  VAR_4 += FUNC_0(VAR_3 + VAR_4, "%s%s", VAR_4 ? ", " : "", "SAS2.0");
 VAR_4 += FUNC_0(VAR_3 + VAR_4, "\n");

 return VAR_4;
}
