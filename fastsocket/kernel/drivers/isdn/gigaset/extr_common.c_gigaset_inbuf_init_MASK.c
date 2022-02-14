
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {int inputstate; int * rcvbuf; struct bc_state* bcs; struct cardstate* cs; scalar_t__ tail; scalar_t__ head; } ;
struct cardstate {int dummy; } ;
struct bc_state {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct inbuf_t *VAR_0, struct bc_state *VAR_1,
          struct cardstate *VAR_2, int VAR_3)

{
 VAR_0->head = 0;
 VAR_0->tail = 0;
 VAR_0->cs = VAR_2;
 VAR_0->bcs = VAR_1;
 VAR_0->rcvbuf = ((void*)0);
 VAR_0->inputstate = VAR_3;
}
