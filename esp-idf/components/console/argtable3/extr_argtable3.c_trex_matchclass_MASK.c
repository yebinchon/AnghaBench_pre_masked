
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int _flags; TYPE_1__* _nodes; } ;
struct TYPE_5__ {int next; int type; int left; int right; } ;
typedef TYPE_1__ TRexNode ;
typedef int TRexChar ;
typedef int TRexBool ;
typedef TYPE_2__ TRex ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static TRexBool FUNC_3(TRex* VAR_3,TRexNode *VAR_4,TRexChar VAR_5)
{
 do {
  switch(VAR_4->type) {
   case 128:
    if (VAR_3->_flags & VAR_0)
    {
     if(VAR_5 >= FUNC_1(VAR_4->left) && VAR_5 <= FUNC_1(VAR_4->right)) return VAR_2;
     if(VAR_5 >= FUNC_0(VAR_4->left) && VAR_5 <= FUNC_0(VAR_4->right)) return VAR_2;
    }
    else
    {
     if(VAR_5 >= VAR_4->left && VAR_5 <= VAR_4->right) return VAR_2;
    }
    break;
   case 129:
    if(FUNC_2(VAR_4->left,VAR_5)) return VAR_2;
    break;
   default:
    if (VAR_3->_flags & VAR_0)
    {
     if (VAR_5 == FUNC_0(VAR_4->type) || VAR_5 == FUNC_1(VAR_4->type)) return VAR_2;
    }
    else
    {
     if(VAR_5 == VAR_4->type)return VAR_2;
    }

  }
 } while((VAR_4->next != -1) && (VAR_4 = &VAR_3->_nodes[VAR_4->next]));
 return VAR_1;
}
