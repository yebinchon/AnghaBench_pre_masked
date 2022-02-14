
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_3__ {int i2ePointer; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char,int) ;

__attribute__((used)) static int
FUNC_2(i2eBordStrPtr VAR_1, unsigned char VAR_2)
{
 int VAR_3 = VAR_1->i2ePointer;

 FUNC_1(VAR_0, VAR_3);
 if (FUNC_0(VAR_3) == 0) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
