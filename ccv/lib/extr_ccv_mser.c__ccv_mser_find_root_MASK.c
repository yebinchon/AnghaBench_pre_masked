
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* shortcut; } ;
typedef TYPE_1__ ccv_mser_node_t ;



__attribute__((used)) static ccv_mser_node_t* FUNC_0(ccv_mser_node_t* VAR_0)
{
 ccv_mser_node_t* VAR_1 = VAR_0;
 ccv_mser_node_t* VAR_2;
 for (;;)
 {
  VAR_2 = VAR_0->shortcut;


  VAR_0->shortcut = VAR_1;
  if (VAR_2 == VAR_0)
   break;
  VAR_1 = VAR_0;
  VAR_0 = VAR_2;
 }
 for (;;)
 {
  VAR_1 = VAR_0->shortcut;
  VAR_0->shortcut = VAR_2;
  if (VAR_1 == VAR_0)
   break;
  VAR_0 = VAR_1;
 }
 return VAR_2;
}
