
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* _p; TYPE_1__* _nodes; } ;
struct TYPE_6__ {int next; int left; int right; } ;
typedef TYPE_2__ TRex ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(TRex *VAR_4)
{
 int VAR_5=-1,VAR_6;
 if(*VAR_4->_p == VAR_2) {
  VAR_4->_p++;
  VAR_5 = FUNC_1(VAR_4,VAR_0);
 }
 VAR_6 = FUNC_0(VAR_4);
 if(VAR_5 != -1) {
  VAR_4->_nodes[VAR_5].next = VAR_6;
 }
 else VAR_5 = VAR_6;

 if(*VAR_4->_p == VAR_3) {
  int VAR_7,VAR_8;
  VAR_4->_p++;
  VAR_7 = FUNC_1(VAR_4,VAR_1);
  VAR_4->_nodes[VAR_7].left = VAR_5;
  VAR_8 = FUNC_2(VAR_4);
  VAR_4->_nodes[VAR_7].right = VAR_8;
  VAR_5 = VAR_7;
 }
 return VAR_5;
}
