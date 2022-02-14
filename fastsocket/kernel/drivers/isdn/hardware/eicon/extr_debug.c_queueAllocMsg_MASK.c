
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ word ;
typedef int byte ;
struct TYPE_5__ {scalar_t__ Size; } ;
struct TYPE_4__ {scalar_t__ Tail; scalar_t__ Head; scalar_t__ Wrap; scalar_t__ Size; scalar_t__ High; scalar_t__ Base; scalar_t__ Count; } ;
typedef TYPE_1__ MSG_QUEUE ;
typedef TYPE_2__ MSG_HEAD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static byte *FUNC_1 (MSG_QUEUE *VAR_1, word VAR_2) {
 MSG_HEAD *VAR_3;
 word VAR_4 = FUNC_0(VAR_2);

 if (VAR_1->Tail == VAR_1->Head) {
  if (VAR_1->Wrap || VAR_4 > VAR_1->Size) {
   return ((void*)0);
  }
  goto alloc;
 }

 if (VAR_1->Tail > VAR_1->Head) {
  if (VAR_1->Tail + VAR_4 <= VAR_1->High) goto alloc;
  if (VAR_1->Base + VAR_4 > VAR_1->Head) {
   return ((void*)0);
  }

  VAR_1->Wrap = VAR_1->Tail;
  VAR_1->Tail = VAR_1->Base;
  goto alloc;
 }

 if (VAR_1->Tail + VAR_4 > VAR_1->Head) {
  return ((void*)0);
 }

alloc:
 VAR_3 = (MSG_HEAD *)VAR_1->Tail;

 VAR_3->Size = VAR_2 | VAR_0;

 VAR_1->Tail += VAR_4;
 VAR_1->Count += VAR_2;



 return ((byte*)(VAR_3 + 1));
}
