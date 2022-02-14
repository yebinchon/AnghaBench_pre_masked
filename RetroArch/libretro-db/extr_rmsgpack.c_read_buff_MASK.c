
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ssize_t ;
typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,int*,size_t) ;

__attribute__((used)) static int FUNC_4(RFILE *VAR_1, size_t VAR_2, char **VAR_3, uint64_t *VAR_4)
{
   uint64_t VAR_5 = 0;
   ssize_t VAR_6 = 0;

   if (FUNC_3(VAR_1, &VAR_5, VAR_2) == -1)
      return -VAR_0;

   *VAR_3 = (char *)FUNC_2((size_t)(VAR_5 + 1) * sizeof(char));

   if ((VAR_6 = FUNC_0(VAR_1, *VAR_3, (size_t)VAR_5)) == -1)
      goto error;

   *VAR_4 = VAR_6;
   (*VAR_3)[VAR_6] = 0;



   return 0;

error:
   FUNC_1(*VAR_3);
   *VAR_3 = ((void*)0);
   return -VAR_0;
}
