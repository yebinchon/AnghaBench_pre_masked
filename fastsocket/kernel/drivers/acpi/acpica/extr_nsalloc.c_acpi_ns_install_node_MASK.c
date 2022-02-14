
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct acpi_walk_state {TYPE_2__* method_desc; struct acpi_namespace_node* method_node; int owner_id; } ;
struct acpi_namespace_node {scalar_t__ type; int owner_id; struct acpi_namespace_node* peer; struct acpi_namespace_node* child; struct acpi_namespace_node* parent; } ;
typedef int acpi_owner_id ;
typedef scalar_t__ acpi_object_type ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ method; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct acpi_namespace_node*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(struct acpi_walk_state *VAR_4, struct acpi_namespace_node *VAR_5,
     struct acpi_namespace_node *VAR_6,
     acpi_object_type VAR_7)
{
 acpi_owner_id VAR_8 = 0;
 struct acpi_namespace_node *VAR_9;

 FUNC_1(VAR_2);

 if (VAR_4) {




  VAR_8 = VAR_4->owner_id;

  if ((VAR_4->method_desc) &&
      (VAR_5 != VAR_4->method_node)) {






   VAR_4->method_desc->method.flags |=
       VAR_1;
  }
 }



 VAR_6->peer = ((void*)0);
 VAR_6->parent = VAR_5;
 VAR_9 = VAR_5->child;

 if (!VAR_9) {
  VAR_5->child = VAR_6;
 } else {


  while (VAR_9->peer) {
   VAR_9 = VAR_9->peer;
  }

  VAR_9->peer = VAR_6;
 }



 VAR_6->owner_id = VAR_8;
 VAR_6->type = (u8) VAR_7;

 FUNC_0((VAR_0,
     "%4.4s (%s) [Node %p Owner %X] added to %4.4s (%s) [Node %p]\n",
     FUNC_2(VAR_6),
     FUNC_3(VAR_6->type), VAR_6, VAR_8,
     FUNC_2(VAR_5),
     FUNC_3(VAR_5->type),
     VAR_5));

 VAR_3;
}
