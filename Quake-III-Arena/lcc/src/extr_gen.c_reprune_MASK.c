
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inst; struct node** kids; } ;
struct node {TYPE_1__ x; struct node** kids; } ;
struct TYPE_5__ {int (* target ) (struct node*) ;} ;
struct TYPE_6__ {TYPE_2__ x; } ;
typedef struct node* Node ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,struct node**,struct node*,struct node*) ;
 int VAR_1 ;
 int FUNC_2 (struct node*) ;

__attribute__((used)) static int FUNC_3(Node *VAR_2, int VAR_3, int VAR_4, Node VAR_5) {
 struct node VAR_6, *VAR_7 = *VAR_2;

 if (VAR_7 == ((void*)0) || VAR_3 > VAR_4)
  return VAR_3;
 else if (VAR_7->x.inst == 0)
  return FUNC_3(&VAR_7->kids[1],
   FUNC_3(&VAR_7->kids[0], VAR_3, VAR_4, VAR_5), VAR_4, VAR_5);
 if (VAR_3 == VAR_4) {
  FUNC_0(FUNC_1(VAR_1, "(reprune changes %x from %x to %x)\n", VAR_2, *VAR_2, VAR_5->x.kids[VAR_4]));
  *VAR_2 = VAR_5->x.kids[VAR_4];
  VAR_6 = *VAR_5;
  (VAR_0->x.target)(&VAR_6);
 }
 return VAR_3 + 1;
}
