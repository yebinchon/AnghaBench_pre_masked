
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int *,long,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int64_t FUNC_4(const char* VAR_1) {
  FILE* VAR_2 = FUNC_1(VAR_1, "rb");
  int64_t VAR_3;
  if (VAR_2 == ((void*)0)) {
    return -1;
  }
  if (FUNC_2(VAR_2, 0L, VAR_0) != 0) {
    FUNC_0(VAR_2);
    return -1;
  }
  VAR_3 = FUNC_3(VAR_2);
  if (FUNC_0(VAR_2) != 0) {
    return -1;
  }
  return VAR_3;
}
