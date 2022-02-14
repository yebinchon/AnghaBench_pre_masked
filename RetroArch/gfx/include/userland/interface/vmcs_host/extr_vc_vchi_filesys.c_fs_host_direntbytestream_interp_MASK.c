
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {void* d_modtime; void* d_attrib; void* d_size; int d_name; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (void*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct dirent *VAR_1, void *VAR_2)
{
   char *VAR_3 = (char*)VAR_2;


   FUNC_1(&VAR_1->d_name, VAR_3, VAR_0);
   VAR_3 += VAR_0;


   FUNC_2((void *)&VAR_1->d_size, VAR_3, (int)sizeof(VAR_1->d_size));
   VAR_1->d_size = FUNC_0(VAR_1->d_size);
   VAR_3 += 4;


   FUNC_2((void *)&VAR_1->d_attrib, VAR_3, (int)sizeof(VAR_1->d_attrib));
   VAR_1->d_attrib = FUNC_0(VAR_1->d_attrib);
   VAR_3 += 4;


   FUNC_2((void *)&VAR_1->d_modtime, VAR_3, (int)sizeof(VAR_1->d_modtime));
   VAR_1->d_modtime = FUNC_0(VAR_1->d_modtime);

   return;
}
