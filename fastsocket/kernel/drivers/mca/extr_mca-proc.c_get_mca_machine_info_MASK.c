
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char* VAR_3, char **VAR_4, off_t VAR_5,
     int VAR_6, int *VAR_7, void *VAR_8)
{
 int VAR_9 = 0;

 VAR_9 += FUNC_0(VAR_3+VAR_9, "Model Id: 0x%x\n", VAR_1);
 VAR_9 += FUNC_0(VAR_3+VAR_9, "Submodel Id: 0x%x\n", VAR_2);
 VAR_9 += FUNC_0(VAR_3+VAR_9, "BIOS Revision: 0x%x\n", VAR_0);

 if (VAR_9 <= VAR_5+VAR_6) *VAR_7 = 1;
 *VAR_4 = VAR_3 + VAR_5;
 VAR_9 -= VAR_5;
 if (VAR_9>VAR_6) VAR_9 = VAR_6;
 if (VAR_9<0) VAR_9 = 0;
 return VAR_9;
}
