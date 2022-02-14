
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int word ;
struct TYPE_5__ {int Size; } ;
struct TYPE_4__ {scalar_t__ Head; scalar_t__ Wrap; scalar_t__ Base; scalar_t__ Tail; int Count; } ;
typedef TYPE_1__ MSG_QUEUE ;
typedef TYPE_2__ MSG_HEAD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (MSG_QUEUE *VAR_1) {


 word VAR_2 = ((MSG_HEAD *)VAR_1->Head)->Size & ~VAR_0;

 VAR_1->Head += FUNC_0(VAR_2);
 VAR_1->Count -= VAR_2;

 if (VAR_1->Wrap) {
  if (VAR_1->Head >= VAR_1->Wrap) {
   VAR_1->Head = VAR_1->Base;
   VAR_1->Wrap = ((void*)0);
  }
 } else if (VAR_1->Head >= VAR_1->Tail) {
  VAR_1->Head = VAR_1->Tail = VAR_1->Base;
 }
}
