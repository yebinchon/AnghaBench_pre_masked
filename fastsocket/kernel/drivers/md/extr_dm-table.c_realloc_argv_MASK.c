
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char**,char**,unsigned int) ;

__attribute__((used)) static char **FUNC_3(unsigned *VAR_1, char **VAR_2)
{
 char **VAR_3;
 unsigned VAR_4;

 VAR_4 = *VAR_1 ? *VAR_1 * 2 : 64;
 VAR_3 = FUNC_1(VAR_4 * sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_2, *VAR_1 * sizeof(*VAR_3));
  *VAR_1 = VAR_4;
 }

 FUNC_0(VAR_2);
 return VAR_3;
}
