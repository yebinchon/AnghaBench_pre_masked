
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdbuf_t {scalar_t__ wake_tasklet; scalar_t__ len; int * prev; struct cmdbuf_t* next; } ;
struct cardstate {scalar_t__ curlen; int * lastcmdbuf; struct cmdbuf_t* cmdbuf; int cmdbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,int ) ;
 int FUNC_1 (struct cmdbuf_t*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cardstate *VAR_2)
{
 struct cmdbuf_t *VAR_3 = VAR_2->cmdbuf;


 VAR_2->cmdbytes -= VAR_2->curlen;
 FUNC_0(VAR_1|VAR_0,
  "write_command: sent %u bytes, %u left",
  VAR_2->curlen, VAR_2->cmdbytes);
 if ((VAR_2->cmdbuf = VAR_3->next) != ((void*)0)) {
  VAR_2->cmdbuf->prev = ((void*)0);
  VAR_2->curlen = VAR_2->cmdbuf->len;
 } else {
  VAR_2->lastcmdbuf = ((void*)0);
  VAR_2->curlen = 0;
 }

 if (VAR_3->wake_tasklet)
  FUNC_2(VAR_3->wake_tasklet);

 FUNC_1(VAR_3);
}
