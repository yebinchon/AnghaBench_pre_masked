
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* _p; } ;
typedef char TRexChar ;
typedef TYPE_1__ TRex ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static TRexChar FUNC_3(TRex *VAR_1)
{
 if(*VAR_1->_p == VAR_0){
  VAR_1->_p++;
  switch(*VAR_1->_p) {
  case 'v': VAR_1->_p++; return '\v';
  case 'n': VAR_1->_p++; return '\n';
  case 't': VAR_1->_p++; return '\t';
  case 'r': VAR_1->_p++; return '\r';
  case 'f': VAR_1->_p++; return '\f';
  default: return (*VAR_1->_p++);
  }
 } else if(!FUNC_1((int) *VAR_1->_p)) FUNC_2(VAR_1,FUNC_0("letter expected"));
 return (*VAR_1->_p++);
}
