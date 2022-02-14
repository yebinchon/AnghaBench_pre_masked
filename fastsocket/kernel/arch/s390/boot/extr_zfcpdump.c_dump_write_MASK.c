
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 size_t FUNC_2 (int,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5, VAR_6;

 VAR_5 = 0;
 while (VAR_5 != VAR_4) {
  VAR_6 = FUNC_2(VAR_2, VAR_3 + VAR_5, VAR_4 - VAR_5);
  if ((VAR_6 == -1) && (VAR_1 == VAR_0)) {
   FUNC_0("No space left on device!\n");

   if (FUNC_1())
    return -1;
   continue;
  } else if (VAR_6 == -1) {

   return -1;
  }
  VAR_5 += VAR_6;
 }
 return VAR_5;
}
