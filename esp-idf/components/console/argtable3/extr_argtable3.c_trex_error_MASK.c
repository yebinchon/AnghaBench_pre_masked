
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jmp_buf ;
struct TYPE_3__ {scalar_t__ _jmpbuf; int const** _error; } ;
typedef int TRexChar ;
typedef TYPE_1__ TRex ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(TRex *VAR_0,const TRexChar *VAR_1)
{
 if(VAR_0->_error) *VAR_0->_error = VAR_1;
 FUNC_0(*((jmp_buf*)VAR_0->_jmpbuf),-1);
}
