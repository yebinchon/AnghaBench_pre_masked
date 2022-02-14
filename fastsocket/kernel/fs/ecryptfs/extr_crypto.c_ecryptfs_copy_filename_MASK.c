
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static int FUNC_2(char **VAR_2, size_t *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = 0;

 (*VAR_2) = FUNC_0((VAR_5 + 1), VAR_1);
 if (!(*VAR_2)) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_1((void *)(*VAR_2), (void *)VAR_4, VAR_5);
 (*VAR_2)[(VAR_5)] = '\0';



 (*VAR_3) = VAR_5;
out:
 return VAR_6;
}
