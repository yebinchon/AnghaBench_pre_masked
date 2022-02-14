
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 scalar_t__ FUNC_3 (int,char*,int,int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, const char * VAR_1, int VAR_2,
          const char * VAR_3, int VAR_4)
{
 int VAR_5 = 0;





 char * VAR_6;

 VAR_6 = (char*)FUNC_1(VAR_4+VAR_2);
 if(!VAR_6)
   return -1;
 FUNC_2(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_6+VAR_4, VAR_1, VAR_2);

 VAR_5 = (int)FUNC_3(VAR_0, VAR_6, VAR_4+VAR_2, 0);


 FUNC_0(VAR_6);
 return VAR_5;
}
