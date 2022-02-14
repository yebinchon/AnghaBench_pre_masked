
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sym; } ;
struct expr {scalar_t__ type; TYPE_1__ left; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct expr *VAR_2)
{
 return !VAR_2 || (VAR_2->type == VAR_0 && VAR_2->left.sym == &VAR_1);
}
