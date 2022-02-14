
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ctl_named_node_t ;
struct TYPE_2__ {size_t narenas; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static const ctl_named_node_t *
FUNC_2(const size_t *VAR_3, size_t VAR_4, size_t VAR_5)
{
 const ctl_named_node_t * VAR_6;

 FUNC_0(&VAR_0);
 if (VAR_5 > VAR_1.narenas) {
  VAR_6 = ((void*)0);
  goto label_return;
 }

 VAR_6 = VAR_2;
label_return:
 FUNC_1(&VAR_0);
 return (VAR_6);
}
