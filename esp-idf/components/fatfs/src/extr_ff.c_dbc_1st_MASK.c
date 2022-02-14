
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_0 (BYTE VAR_1)
{

 if (VAR_0 && VAR_1 >= VAR_0[0]) {
  if (VAR_1 <= VAR_0[1]) return 1;
  if (VAR_1 >= VAR_0[2] && VAR_1 <= VAR_0[3]) return 1;
 }
 return 0;
}
