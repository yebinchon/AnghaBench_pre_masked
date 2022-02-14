
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_5, char **VAR_6, off_t VAR_7,
   int VAR_8, int *VAR_9, void *VAR_10)
{
 char *VAR_11 = VAR_5;






 if (VAR_4 == VAR_1)
  VAR_11 += FUNC_1(VAR_11, "server_mode=%d\n", VAR_3);

 return VAR_11 - VAR_5;
}
