
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bool_; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_1__ val; } ;
struct invocation {int argv; int argc; struct rmsgpack_dom_value (* func ) (struct rmsgpack_dom_value,int ,int ) ;} ;
struct query {struct invocation root; } ;
typedef int libretrodb_query_t ;


 scalar_t__ VAR_0 ;
 struct rmsgpack_dom_value FUNC_0 (struct rmsgpack_dom_value,int ,int ) ;

int FUNC_1(libretrodb_query_t *VAR_1,
      struct rmsgpack_dom_value *VAR_2)
{
   struct invocation VAR_3 = ((struct query *)VAR_1)->root;
   struct rmsgpack_dom_value VAR_4 = VAR_3.func(*VAR_2, VAR_3.argc, VAR_3.argv);
   return (VAR_4.type == VAR_0 && VAR_4.val.bool_);
}
