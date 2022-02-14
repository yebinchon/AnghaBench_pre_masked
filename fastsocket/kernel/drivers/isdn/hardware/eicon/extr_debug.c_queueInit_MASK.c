
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dword ;
typedef int byte ;
struct TYPE_3__ {int Size; scalar_t__ Count; int * Wrap; int * High; int * Tail; int * Head; int * Base; } ;
typedef TYPE_1__ MSG_QUEUE ;



__attribute__((used)) static void FUNC_0 (MSG_QUEUE *VAR_0, byte *VAR_1, dword VAR_2) {
 VAR_0->Size = VAR_2;
 VAR_0->Base = VAR_0->Head = VAR_0->Tail = VAR_1;
 VAR_0->High = VAR_1 + VAR_2;
 VAR_0->Wrap = ((void*)0);
 VAR_0->Count= 0;
}
