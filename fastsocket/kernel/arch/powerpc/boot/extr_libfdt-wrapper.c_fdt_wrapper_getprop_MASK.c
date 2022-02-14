
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*) ;
 int VAR_0 ;
 void* FUNC_2 (int ,int ,char const*,int*) ;
 int FUNC_3 (void*,void const*,int ) ;
 int FUNC_4 (int,int const) ;

__attribute__((used)) static int FUNC_5(const void *VAR_1, const char *VAR_2,
          void *VAR_3, const int VAR_4)
{
 const void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_0, FUNC_1(VAR_1), VAR_2, &VAR_6);
 if (!VAR_5)
  return FUNC_0(VAR_6);
 FUNC_3(VAR_3, VAR_5, FUNC_4(VAR_6, VAR_4));
 return VAR_6;
}
