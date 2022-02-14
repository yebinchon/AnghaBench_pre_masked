
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* _p; char* _eol; TYPE_1__* _nodes; } ;
struct TYPE_8__ {scalar_t__ type; int left; int right; int next; } ;
typedef TYPE_2__ TRex ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(TRex *VAR_6)
{
 int VAR_7 = -1;
 int VAR_8 = -1,VAR_9;
 if(*VAR_6->_p == VAR_4){
  VAR_7 = FUNC_4(VAR_6,VAR_2);
  VAR_6->_p++;
 }else VAR_7 = FUNC_4(VAR_6,VAR_1);

 if(*VAR_6->_p == ']') FUNC_2(VAR_6,FUNC_0("empty class"));
 VAR_9 = VAR_7;
 while(*VAR_6->_p != ']' && VAR_6->_p != VAR_6->_eol) {
  if(*VAR_6->_p == '-' && VAR_8 != -1){
   int VAR_10,VAR_11;
   if(*VAR_6->_p++ == ']') FUNC_2(VAR_6,FUNC_0("unfinished range"));
   VAR_10 = FUNC_4(VAR_6,VAR_3);
   if(VAR_8>*VAR_6->_p) FUNC_2(VAR_6,FUNC_0("invalid range"));
   if(VAR_6->_nodes[VAR_8].type == VAR_0) FUNC_2(VAR_6,FUNC_0("cannot use character classes in ranges"));
   VAR_6->_nodes[VAR_10].left = VAR_6->_nodes[VAR_8].type;
   VAR_11 = FUNC_3(VAR_6);
   VAR_6->_nodes[VAR_10].right = VAR_11;
            VAR_6->_nodes[VAR_9].next = VAR_10;
   VAR_9 = VAR_10;
   VAR_8 = -1;
  }
  else{
   if(VAR_8!=-1){
    int VAR_12 = VAR_8;
    VAR_6->_nodes[VAR_9].next = VAR_12;
    VAR_9 = VAR_12;
    VAR_8 = FUNC_1(VAR_6,VAR_5);
   }
   else{
    VAR_8 = FUNC_1(VAR_6,VAR_5);
   }
  }
 }
 if(VAR_8!=-1){
  int VAR_13 = VAR_8;
  VAR_6->_nodes[VAR_9].next = VAR_13;
  VAR_9 = VAR_13;
  VAR_8 = -1;
 }

 VAR_6->_nodes[VAR_7].left = VAR_6->_nodes[VAR_7].next;
 VAR_6->_nodes[VAR_7].next = -1;
 return VAR_7;
}
