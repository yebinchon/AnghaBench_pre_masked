
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* last; TYPE_3__* first; } ;
struct TYPE_10__ {TYPE_3__* next; TYPE_3__* left; } ;
struct TYPE_9__ {TYPE_3__* right; void* subid; } ;
struct TYPE_11__ {TYPE_2__ u2; TYPE_1__ u1; } ;
typedef TYPE_3__ Reinst ;
typedef TYPE_4__ Node ;




 int const VAR_0 ;



 int VAR_1 ;

 int* VAR_2 ;
 TYPE_3__* FUNC_0 (int const) ;
 TYPE_4__* FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (char*) ;
 void** VAR_3 ;

__attribute__((used)) static void
FUNC_5(int VAR_4)
{
 Node *VAR_5, *VAR_6;
 Reinst *VAR_7, *VAR_8;

 while(VAR_4==VAR_1 || VAR_2[-1]>=VAR_4){
  switch(FUNC_2()){
  default:
   FUNC_4("unknown operator in evaluntil");
   break;
  case 132:
   VAR_5 = FUNC_1('(');
   VAR_8 = FUNC_0(VAR_1);
   VAR_8->u1.subid = *VAR_3;
   VAR_5->last->u2.next = VAR_8;
   VAR_7 = FUNC_0(132);
   VAR_7->u1.subid = *VAR_3;
   VAR_7->u2.next = VAR_5->first;
   FUNC_3(VAR_7, VAR_8);
   return;
  case 131:
   VAR_6 = FUNC_1('|');
   VAR_5 = FUNC_1('|');
   VAR_8 = FUNC_0(VAR_0);
   VAR_6->last->u2.next = VAR_8;
   VAR_5->last->u2.next = VAR_8;
   VAR_7 = FUNC_0(131);
   VAR_7->u1.right = VAR_5->first;
   VAR_7->u2.left = VAR_6->first;
   FUNC_3(VAR_7, VAR_8);
   break;
  case 133:
   VAR_6 = FUNC_1(0);
   VAR_5 = FUNC_1(0);
   VAR_5->last->u2.next = VAR_6->first;
   FUNC_3(VAR_5->first, VAR_6->last);
   break;
  case 128:
   VAR_6 = FUNC_1('*');
   VAR_7 = FUNC_0(131);
   VAR_6->last->u2.next = VAR_7;
   VAR_7->u1.right = VAR_6->first;
   FUNC_3(VAR_7, VAR_7);
   break;
  case 130:
   VAR_6 = FUNC_1('+');
   VAR_7 = FUNC_0(131);
   VAR_6->last->u2.next = VAR_7;
   VAR_7->u1.right = VAR_6->first;
   FUNC_3(VAR_6->first, VAR_7);
   break;
  case 129:
   VAR_6 = FUNC_1('?');
   VAR_7 = FUNC_0(131);
   VAR_8 = FUNC_0(VAR_0);
   VAR_7->u2.left = VAR_8;
   VAR_7->u1.right = VAR_6->first;
   VAR_6->last->u2.next = VAR_8;
   FUNC_3(VAR_7, VAR_8);
   break;
  }
 }
}
