
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(const void *VAR_3, size_t VAR_4)
{
  ssize_t VAR_5 = FUNC_1(FUNC_0(VAR_2), VAR_3, VAR_4);
  if(VAR_5 != (ssize_t)VAR_4) {
    FUNC_2("exiting...");
    return VAR_0;
  }
  return VAR_1;
}
