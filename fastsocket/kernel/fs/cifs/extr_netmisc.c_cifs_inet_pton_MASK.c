
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int,char const*) ;
 int FUNC_1 (char const*,int,void*,char,int *) ;
 int FUNC_2 (char const*,int,void*,char,int *) ;

__attribute__((used)) static int
FUNC_3(const int VAR_3, const char *VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7 = 0;


 if (VAR_3 == VAR_0)
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, '\\', ((void*)0));
 else if (VAR_3 == VAR_1)
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6 , '\\', ((void*)0));

 FUNC_0(VAR_2, "address conversion returned %d for %*.*s",
      VAR_7, VAR_5, VAR_5, VAR_4);
 if (VAR_7 > 0)
  VAR_7 = 1;
 return VAR_7;
}
