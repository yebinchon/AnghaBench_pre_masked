
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char const*,char*) ;
 void* FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void *FUNC_6(const char *VAR_1, int VAR_2)
{
  int VAR_3 = FUNC_5(VAR_1);
  void *VAR_4 = ((void*)0);

  if (VAR_3 > 3 && FUNC_4(VAR_1 + VAR_3 - 3, ".gz") == 0)
  {
    if ( (VAR_4 = FUNC_1(VAR_1, VAR_2 ? "wb" : "rb")) ) {
      FUNC_3(1);
      if (VAR_2)
        FUNC_2(VAR_4, 9, VAR_0);
    }
  }
  else
  {
    if ( (VAR_4 = FUNC_0(VAR_1, VAR_2 ? "wb" : "rb")) ) {
      FUNC_3(0);
    }
  }

  return VAR_4;
}
