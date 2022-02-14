
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jmp_buf ;
struct TYPE_9__ {char const* _p; int _nallocated; int _nsize; int _nsubexpr; size_t _first; char const** _error; int _flags; int * _matches; TYPE_1__* _nodes; scalar_t__ _jmpbuf; int * _bol; int _eol; } ;
struct TYPE_8__ {int left; scalar_t__ type; int next; int right; } ;
typedef TYPE_1__ TRexNode ;
typedef int TRexMatch ;
typedef char TRexChar ;
typedef TYPE_2__ TRex ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,...) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 size_t FUNC_9 (TYPE_2__*,int ) ;

TRex *FUNC_10(const TRexChar *VAR_3,const TRexChar **VAR_4,int VAR_5)
{
 TRex *VAR_6 = (TRex *)FUNC_1(sizeof(TRex));
 VAR_6->_eol = *(VAR_6->_bol = ((void*)0));
 VAR_6->_p = VAR_3;
 VAR_6->_nallocated = (int)FUNC_4(VAR_3) * sizeof(TRexChar);
 VAR_6->_nodes = (TRexNode *)FUNC_1(VAR_6->_nallocated * sizeof(TRexNode));
 VAR_6->_nsize = 0;
 VAR_6->_matches = 0;
 VAR_6->_nsubexpr = 0;
 VAR_6->_first = FUNC_9(VAR_6,VAR_1);
 VAR_6->_error = VAR_4;
 VAR_6->_jmpbuf = FUNC_1(sizeof(jmp_buf));
 VAR_6->_flags = VAR_5;
 if(FUNC_5(*((jmp_buf*)VAR_6->_jmpbuf)) == 0) {
  int VAR_7 = FUNC_8(VAR_6);
  VAR_6->_nodes[VAR_6->_first].left = VAR_7;
  if(*VAR_6->_p!='\0')
   FUNC_6(VAR_6,FUNC_0("unexpected character"));
  VAR_6->_matches = (TRexMatch *) FUNC_1(VAR_6->_nsubexpr * sizeof(TRexMatch));
  FUNC_2(VAR_6->_matches,0,VAR_6->_nsubexpr * sizeof(TRexMatch));
 }
 else{
  FUNC_7(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
