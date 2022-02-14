
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int word ;
typedef int byte ;
struct TYPE_5__ {int Size; } ;
struct TYPE_4__ {int Wrap; int * Tail; scalar_t__ Head; } ;
typedef TYPE_1__ MSG_QUEUE ;
typedef TYPE_2__ MSG_HEAD ;


 int VAR_0 ;

__attribute__((used)) static byte *FUNC_0 (MSG_QUEUE *VAR_1, word *VAR_2) {




 MSG_HEAD *VAR_3 = (MSG_HEAD *)VAR_1->Head;

 if (((byte *)VAR_3 == VAR_1->Tail && !VAR_1->Wrap) ||
     (VAR_3->Size & VAR_0)) {
  return ((void*)0);
 } else {
  *VAR_2 = VAR_3->Size;
  return ((byte *)(VAR_3 + 1));
 }
}
