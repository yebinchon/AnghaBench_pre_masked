
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zonedebug_t ;
struct TYPE_5__ {int allocSize; int label; int line; int file; } ;
struct TYPE_7__ {scalar_t__ size; TYPE_1__ d; scalar_t__ tag; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_3__ blocklist; } ;
typedef TYPE_2__ memzone_t ;
typedef TYPE_3__ memblock_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

void FUNC_4( memzone_t *VAR_1, char *VAR_2 ) {




 memblock_t *VAR_3;
 char VAR_4[4096];
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_0 || !FUNC_1())
  return;
 VAR_5 = VAR_6 = VAR_7 = 0;
 FUNC_0(VAR_4, sizeof(VAR_4), "\r\n================\r\n%s log\r\n================\r\n", VAR_2);
 FUNC_2(VAR_4, FUNC_3(VAR_4), VAR_0);
 for (VAR_3 = VAR_1->blocklist.next ; VAR_3->next != &VAR_1->blocklist; VAR_3 = VAR_3->next) {
  if (VAR_3->tag) {
   VAR_5 += VAR_3->size;
   VAR_7++;
  }
 }




 VAR_6 = VAR_7 * sizeof(memblock_t);

 FUNC_0(VAR_4, sizeof(VAR_4), "%d %s memory in %d blocks\r\n", VAR_5, VAR_2, VAR_7);
 FUNC_2(VAR_4, FUNC_3(VAR_4), VAR_0);
 FUNC_0(VAR_4, sizeof(VAR_4), "%d %s memory overhead\r\n", VAR_5 - VAR_6, VAR_2);
 FUNC_2(VAR_4, FUNC_3(VAR_4), VAR_0);
}
