
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* _matches; struct TYPE_4__* _jmpbuf; struct TYPE_4__* _nodes; } ;
typedef TYPE_1__ TRex ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(TRex *VAR_0)
{
 if(VAR_0) {
  if(VAR_0->_nodes) FUNC_0(VAR_0->_nodes);
  if(VAR_0->_jmpbuf) FUNC_0(VAR_0->_jmpbuf);
  if(VAR_0->_matches) FUNC_0(VAR_0->_matches);
  FUNC_0(VAR_0);
 }
}
