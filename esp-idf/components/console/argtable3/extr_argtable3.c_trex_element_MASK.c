
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int* _p; TYPE_1__* _nodes; } ;
struct TYPE_11__ {int left; unsigned short right; int next; } ;
typedef scalar_t__ TRexBool ;
typedef TYPE_2__ TRex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,char) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(TRex *VAR_8)
{
 int VAR_9 = -1;
 switch(*VAR_8->_p)
 {
 case '(': {
  int VAR_10,VAR_11;
  VAR_8->_p++;


  if(*VAR_8->_p =='?') {
   VAR_8->_p++;
   FUNC_5(VAR_8,':');
   VAR_10 = FUNC_7(VAR_8,VAR_4);
  }
  else
   VAR_10 = FUNC_7(VAR_8,VAR_2);
  VAR_11 = FUNC_6(VAR_8);
  VAR_8->_nodes[VAR_10].left = VAR_11;
  VAR_9 = VAR_10;
  FUNC_5(VAR_8,')');
     }
     break;
 case '[':
  VAR_8->_p++;
  VAR_9 = FUNC_3(VAR_8);
  FUNC_5(VAR_8,']');
  break;
 case 131: VAR_8->_p++; VAR_9 = FUNC_7(VAR_8,VAR_1);break;
 case 132: VAR_8->_p++; VAR_9 = FUNC_7(VAR_8,VAR_0);break;
 default:
  VAR_9 = FUNC_2(VAR_8,VAR_6);
  break;
 }

 {
  TRexBool VAR_12 = VAR_6;
  unsigned short VAR_13 = 0, VAR_14 = 0;
  switch(*VAR_8->_p){
   case 129: VAR_13 = 0; VAR_14 = 0xFFFF; VAR_8->_p++; VAR_12 = VAR_7; break;
   case 130: VAR_13 = 1; VAR_14 = 0xFFFF; VAR_8->_p++; VAR_12 = VAR_7; break;
   case 128: VAR_13 = 0; VAR_14 = 1; VAR_8->_p++; VAR_12 = VAR_7; break;
   case '{':
    VAR_8->_p++;
    if(!FUNC_1((int) *VAR_8->_p)) FUNC_4(VAR_8,FUNC_0("number expected"));
    VAR_13 = (unsigned short)FUNC_8(VAR_8);

    switch(*VAR_8->_p) {
   case '}':
    VAR_14 = VAR_13; VAR_8->_p++;
    break;
   case ',':
    VAR_8->_p++;
    VAR_14 = 0xFFFF;
    if(FUNC_1((int) *VAR_8->_p)){
     VAR_14 = (unsigned short)FUNC_8(VAR_8);
    }
    FUNC_5(VAR_8,'}');
    break;
   default:
    FUNC_4(VAR_8,FUNC_0(", or } expected"));
  }

  VAR_12 = VAR_7;
  break;

  }
  if(VAR_12) {
   int VAR_15 = FUNC_7(VAR_8,VAR_3);
   VAR_8->_nodes[VAR_15].left = VAR_9;
   VAR_8->_nodes[VAR_15].right = ((VAR_13)<<16)|VAR_14;
   VAR_9 = VAR_15;
  }
 }
 if((*VAR_8->_p != VAR_5) && (*VAR_8->_p != ')') && (*VAR_8->_p != 129) && (*VAR_8->_p != 130) && (*VAR_8->_p != '\0')) {
  int VAR_16 = FUNC_9(VAR_8);
  VAR_8->_nodes[VAR_9].next = VAR_16;
 }

 return VAR_9;
}
