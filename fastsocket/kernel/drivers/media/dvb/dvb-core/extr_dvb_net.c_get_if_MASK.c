
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_net {int* state; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_net *VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
  if (!VAR_1->state[VAR_2])
   break;

 if (VAR_2 == VAR_0)
  return -1;

 VAR_1->state[VAR_2]=1;
 return VAR_2;
}
