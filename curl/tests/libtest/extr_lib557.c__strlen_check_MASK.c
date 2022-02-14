
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,size_t,size_t) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, char *VAR_1, size_t VAR_2)
{
  size_t VAR_3 = FUNC_1(VAR_1);
  if(VAR_2 != VAR_3) {

    FUNC_0("sprintf strlen:%d failed:\nwe '%zu'\nsystem: '%zu'\n",
           VAR_0, VAR_3, VAR_2);
    return 1;
  }
  return 0;
}
