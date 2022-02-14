
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* _p; TYPE_1__* _nodes; } ;
struct TYPE_7__ {char left; } ;
typedef char TRexChar ;
typedef int TRexBool ;
typedef TYPE_2__ TRex ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,char) ;

__attribute__((used)) static int FUNC_5(TRex *VAR_2,TRexBool VAR_3)
{
 TRexChar VAR_4;
 if(*VAR_2->_p == VAR_1) {
  VAR_2->_p++;
  switch(*VAR_2->_p) {
   case 'n': VAR_2->_p++; return FUNC_4(VAR_2,'\n');
   case 't': VAR_2->_p++; return FUNC_4(VAR_2,'\t');
   case 'r': VAR_2->_p++; return FUNC_4(VAR_2,'\r');
   case 'f': VAR_2->_p++; return FUNC_4(VAR_2,'\f');
   case 'v': VAR_2->_p++; return FUNC_4(VAR_2,'\v');
   case 'a': case 'A': case 'w': case 'W': case 's': case 'S':
   case 'd': case 'D': case 'x': case 'X': case 'c': case 'C':
   case 'p': case 'P': case 'l': case 'u':
    {
    VAR_4 = *VAR_2->_p; VAR_2->_p++;
    return FUNC_2(VAR_2,VAR_4);
    }
   case 'b':
   case 'B':
    if(!VAR_3) {
     int VAR_5 = FUNC_4(VAR_2,VAR_0);
     VAR_2->_nodes[VAR_5].left = *VAR_2->_p;
     VAR_2->_p++;
     return VAR_5;
    }

   default:
    VAR_4 = *VAR_2->_p; VAR_2->_p++;
    return FUNC_4(VAR_2,VAR_4);
  }
 }
 else if(!FUNC_1((int) *VAR_2->_p)) {

  FUNC_3(VAR_2,FUNC_0("letter expected"));
 }
 VAR_4 = *VAR_2->_p; VAR_2->_p++;
 return FUNC_4(VAR_2,VAR_4);
}
