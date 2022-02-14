
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int const* _eol; int _currsubexp; int const* _bol; int _flags; TYPE_2__* _nodes; TYPE_1__* _matches; } ;
struct TYPE_10__ {int type; int right; int next; size_t left; } ;
struct TYPE_9__ {int const* begin; int const* len; } ;
typedef int TRexNodeType ;
typedef TYPE_2__ TRexNode ;
typedef int TRexChar ;
typedef TYPE_3__ TRex ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int const FUNC_1 (int const) ;
 int const FUNC_2 (int const) ;
 int FUNC_3 (size_t,int const) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int const) ;

__attribute__((used)) static const TRexChar *FUNC_5(TRex* VAR_3,TRexNode *VAR_4,const TRexChar *VAR_5,TRexNode *VAR_6)
{

 TRexNodeType VAR_7 = VAR_4->type;
 switch(VAR_7) {
 case 132: {

  TRexNode *VAR_8 = ((void*)0);
  int VAR_9 = (VAR_4->right >> 16)&0x0000FFFF, VAR_10 = VAR_4->right&0x0000FFFF, VAR_11 = 0;
  const TRexChar *VAR_12=VAR_5, *VAR_13 = VAR_5;

  if(VAR_4->next != -1) {
   VAR_8 = &VAR_3->_nodes[VAR_4->next];
  }
  else {
   VAR_8 = VAR_6;
  }

  while((VAR_11 == 0xFFFF || VAR_11 < VAR_10)) {

   const TRexChar *VAR_14;
   if(!(VAR_12 = FUNC_5(VAR_3,&VAR_3->_nodes[VAR_4->left],VAR_12,VAR_8)))
    break;
   VAR_11++;
   VAR_13=VAR_12;
   if(VAR_8) {


    if(VAR_8->type != 132 ||
    (VAR_8->type == 132 && ((VAR_8->right >> 16)&0x0000FFFF) != 0))
    {
     TRexNode *VAR_15 = ((void*)0);
     if(VAR_8->next != -1) {
      VAR_15 = &VAR_3->_nodes[VAR_8->next];
     }else if(VAR_6 && VAR_6->next != -1){
      VAR_15 = &VAR_3->_nodes[VAR_6->next];
     }
     VAR_14 = FUNC_5(VAR_3,VAR_8,VAR_12,VAR_15);
     if(VAR_14) {

      if(VAR_9 == VAR_10 && VAR_9 == VAR_11) break;
      else if(VAR_11 >= VAR_9 && VAR_10 == 0xFFFF) break;
      else if(VAR_11 >= VAR_9 && VAR_11 <= VAR_10) break;
     }
    }
   }

   if(VAR_12 >= VAR_3->_eol)
    break;
  }
  if(VAR_9 == VAR_10 && VAR_9 == VAR_11) return VAR_13;
  else if(VAR_11 >= VAR_9 && VAR_10 == 0xFFFF) return VAR_13;
  else if(VAR_11 >= VAR_9 && VAR_11 <= VAR_10) return VAR_13;
  return ((void*)0);
 }
 case 129: {
   const TRexChar *VAR_16 = VAR_5;
   TRexNode *VAR_17=&VAR_3->_nodes[VAR_4->left];
   while( (VAR_16 = FUNC_5(VAR_3,VAR_17,VAR_16,((void*)0))) ) {
    if(VAR_17->next != -1)
     VAR_17 = &VAR_3->_nodes[VAR_17->next];
    else
     return VAR_16;
   }
   VAR_16 = VAR_5;
   VAR_17 = &VAR_3->_nodes[VAR_4->right];
   while( (VAR_16 = FUNC_5(VAR_3,VAR_17,VAR_16,((void*)0))) ) {
    if(VAR_17->next != -1)
     VAR_17 = &VAR_3->_nodes[VAR_17->next];
    else
     return VAR_16;
   }
   return ((void*)0);
   break;
 }
 case 133:
 case 130:{
   TRexNode *VAR_18 = &VAR_3->_nodes[VAR_4->left];
   const TRexChar *VAR_19 = VAR_5;
   int VAR_20 = -1;
   if(VAR_4->type != 130 && VAR_4->right == VAR_3->_currsubexp) {
    VAR_20 = VAR_3->_currsubexp;
    VAR_3->_matches[VAR_20].begin = VAR_19;
    VAR_3->_currsubexp++;
   }

   do {
    TRexNode *VAR_21 = ((void*)0);
    if(VAR_18->next != -1) {
     VAR_21 = &VAR_3->_nodes[VAR_18->next];
    }else {
     VAR_21 = VAR_6;
    }
    if(!(VAR_19 = FUNC_5(VAR_3,VAR_18,VAR_19,VAR_21))) {
     if(VAR_20 != -1){
      VAR_3->_matches[VAR_20].begin = 0;
      VAR_3->_matches[VAR_20].len = 0;
     }
     return ((void*)0);
    }
   } while((VAR_18->next != -1) && (VAR_18 = &VAR_3->_nodes[VAR_18->next]));

   if(VAR_20 != -1)
    VAR_3->_matches[VAR_20].len = VAR_19 - VAR_3->_matches[VAR_20].begin;
   return VAR_19;
 }
 case 128:
  if((VAR_5 == VAR_3->_bol && !FUNC_0((int) *VAR_5))
   || ((VAR_5 == VAR_3->_eol && !FUNC_0((int) *(VAR_5-1))))
   || ((!FUNC_0((int) *VAR_5) && FUNC_0((int) *(VAR_5+1))))
   || ((FUNC_0((int) *VAR_5) && !FUNC_0((int) *(VAR_5+1)))) ) {
   return (VAR_4->left == 'b')?VAR_5:((void*)0);
  }
  return (VAR_4->left == 'b')?((void*)0):VAR_5;
 case 138:
  if(VAR_5 == VAR_3->_bol) return VAR_5;
  return ((void*)0);
 case 134:
  if(VAR_5 == VAR_3->_eol) return VAR_5;
  return ((void*)0);
 case 135:
  VAR_5++;
  return VAR_5;
 case 131:
 case 136:
  if(FUNC_4(VAR_3,&VAR_3->_nodes[VAR_4->left],*VAR_5)?(VAR_7 == 136?VAR_2:VAR_1):(VAR_7 == 131?VAR_2:VAR_1)) {
                        VAR_5++;
   return VAR_5;
  }
  return ((void*)0);
 case 137:
  if(FUNC_3(VAR_4->left,*VAR_5)) {
                        VAR_5++;
   return VAR_5;
  }
  return ((void*)0);
 default:
  if (VAR_3->_flags & VAR_0)
  {
   if(*VAR_5 != FUNC_1(VAR_4->type) && *VAR_5 != FUNC_2(VAR_4->type)) return ((void*)0);
  }
  else
  {
   if (*VAR_5 != VAR_4->type) return ((void*)0);
  }
  VAR_5++;
  return VAR_5;
 }
 return ((void*)0);
}
