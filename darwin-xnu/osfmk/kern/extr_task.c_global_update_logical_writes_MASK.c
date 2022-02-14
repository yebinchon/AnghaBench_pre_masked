
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_1(int64_t VAR_4)
{
 int64_t VAR_5, VAR_6;
 boolean_t VAR_7;

 do {
  VAR_6 = VAR_5 = VAR_2;
  VAR_6 += VAR_4;
  if (VAR_6 >= VAR_3) {
   VAR_6 = 0;
   VAR_7 = VAR_1;
  } else {
   VAR_7 = VAR_0;
  }
 } while(!FUNC_0(VAR_5, VAR_6, &VAR_2));
 return VAR_7;
}
