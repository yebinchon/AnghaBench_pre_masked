
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* _eol; int _nodes; scalar_t__ _currsubexp; int const* _bol; } ;
typedef int TRexChar ;
typedef int TRexBool ;
typedef TYPE_1__ TRex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (TYPE_1__*,int ,int const*,int *) ;

TRexBool FUNC_2(TRex* VAR_2,const TRexChar* VAR_3)
{
 const TRexChar* VAR_4 = ((void*)0);
 VAR_2->_bol = VAR_3;
 VAR_2->_eol = VAR_3 + FUNC_0(VAR_3);
 VAR_2->_currsubexp = 0;
 VAR_4 = FUNC_1(VAR_2,VAR_2->_nodes,VAR_3,((void*)0));
 if(VAR_4 == ((void*)0) || VAR_4 != VAR_2->_eol)
  return VAR_0;
 return VAR_1;
}
