
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_modtime; int d_attrib; int d_size; int d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (void*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dirent *VAR_1, void *VAR_2)
{
   char *VAR_3 = (char*)VAR_2;


   FUNC_0(VAR_3, &VAR_1->d_name, VAR_0);
   VAR_3 += VAR_0;


   FUNC_1((void *)&VAR_1->d_size, VAR_3, (int)sizeof(VAR_1->d_size));
   VAR_3 += 4;


   FUNC_1((void *)&VAR_1->d_attrib, VAR_3, (int)sizeof(VAR_1->d_attrib));
   VAR_3 += 4;


   FUNC_1((void *)&VAR_1->d_modtime, VAR_3, (int)sizeof(VAR_1->d_modtime));
   VAR_3 += 4;

   return (int)(VAR_3-(char *)VAR_2);
}
