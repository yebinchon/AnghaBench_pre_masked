
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int next; } ;
struct TYPE_5__ {int _first; TYPE_4__* _nodes; scalar_t__ _currsubexp; int const* _eol; int const* _bol; } ;
typedef int TRexChar ;
typedef int TRexBool ;
typedef TYPE_1__ TRex ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,TYPE_4__*,int const*,int *) ;

TRexBool FUNC_1(TRex* VAR_2,const TRexChar* VAR_3,const TRexChar* VAR_4,const TRexChar** VAR_5, const TRexChar** VAR_6)
{
 const TRexChar *VAR_7 = ((void*)0);
 int VAR_8 = VAR_2->_first;
 if(VAR_3 >= VAR_4) return VAR_0;
 VAR_2->_bol = VAR_3;
 VAR_2->_eol = VAR_4;
 do {
  VAR_7 = VAR_3;
  while(VAR_8 != -1) {
   VAR_2->_currsubexp = 0;
   VAR_7 = FUNC_0(VAR_2,&VAR_2->_nodes[VAR_8],VAR_7,((void*)0));
   if(!VAR_7)
    break;
   VAR_8 = VAR_2->_nodes[VAR_8].next;
  }
  VAR_3++;
 } while(VAR_7 == ((void*)0) && VAR_3 != VAR_4);

 if(VAR_7 == ((void*)0))
  return VAR_0;

 --VAR_3;

 if(VAR_5) *VAR_5 = VAR_3;
 if(VAR_6) *VAR_6 = VAR_7;
 return VAR_1;
}
