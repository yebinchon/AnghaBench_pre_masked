
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int _nallocated; int _nsize; TYPE_1__* _nodes; int _nsubexpr; } ;
struct TYPE_5__ {int next; int right; int left; scalar_t__ type; } ;
typedef scalar_t__ TRexNodeType ;
typedef TYPE_1__ TRexNode ;
typedef TYPE_2__ TRex ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(TRex *VAR_1, TRexNodeType VAR_2)
{
 TRexNode VAR_3;
 int VAR_4;
 VAR_3.type = VAR_2;
 VAR_3.next = VAR_3.right = VAR_3.left = -1;
 if(VAR_2 == VAR_0)
  VAR_3.right = VAR_1->_nsubexpr++;
 if(VAR_1->_nallocated < (VAR_1->_nsize + 1)) {
  VAR_1->_nallocated *= 2;
  VAR_1->_nodes = (TRexNode *)FUNC_0(VAR_1->_nodes, VAR_1->_nallocated * sizeof(TRexNode));
 }
 VAR_1->_nodes[VAR_1->_nsize++] = VAR_3;
 VAR_4 = VAR_1->_nsize - 1;
 return (int)VAR_4;
}
