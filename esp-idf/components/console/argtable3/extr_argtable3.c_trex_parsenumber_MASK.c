
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* _p; } ;
typedef TYPE_1__ TRex ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(TRex *VAR_0)
{
 int VAR_1 = *VAR_0->_p-'0';
 int VAR_2 = 10;
 VAR_0->_p++;
 while(FUNC_1((int) *VAR_0->_p)) {
  VAR_1 = VAR_1*10+(*VAR_0->_p++-'0');
  if(VAR_2==1000000000) FUNC_2(VAR_0,FUNC_0("overflow in numeric constant"));
  VAR_2 *= 10;
 };
 return VAR_1;
}
