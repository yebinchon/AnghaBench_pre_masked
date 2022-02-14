
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gpointer ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;
struct TYPE_5__ {struct TYPE_5__* parent; TYPE_1__* prompt; } ;
struct TYPE_4__ {int type; } ;
typedef int GtkButton ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_5 ;

void FUNC_2(GtkButton * VAR_6, gpointer VAR_7)
{
 enum prop_type VAR_8;

 VAR_4 = VAR_4->parent;
 VAR_8 = VAR_4->prompt ? VAR_4->prompt->type : VAR_2;
 if (VAR_8 != VAR_1)
  VAR_4 = VAR_4->parent;
 FUNC_0();

 if (VAR_4 == &VAR_5)
  FUNC_1(VAR_3, VAR_0);
}
