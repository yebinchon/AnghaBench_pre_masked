
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
typedef int lwp_node ;
typedef int keyboard_event ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ _node ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(const keyboard_event *VAR_1) {
 _node *VAR_2 = FUNC_1(sizeof(_node));
 VAR_2->event = *VAR_1;

 FUNC_0(&VAR_0, (lwp_node*) VAR_2);

 return 1;
}
