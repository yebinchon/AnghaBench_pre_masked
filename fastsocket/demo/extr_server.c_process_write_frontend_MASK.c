
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conn_context {int cpu_id; int fd; char* buf; int data_len; int flags; } ;
struct TYPE_2__ {int trancnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct conn_context*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct conn_context*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(struct conn_context *VAR_2)
{
 int VAR_3;
 char *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->cpu_id;
 VAR_3 = VAR_2->fd;
 VAR_4 = VAR_2->buf;
 VAR_5 = VAR_2->data_len;

 if (VAR_2->flags & VAR_0) {
  FUNC_3("Write to front end socket while back end socket enabled\n");
  goto free_back;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_1("Can't write front-end socket");
  goto free_back;
 }

 FUNC_2("Write %d to front end socket %d\n", VAR_5, VAR_3);

 VAR_1[VAR_6].trancnt++;

free_back:

 FUNC_4(VAR_2);
 FUNC_0(VAR_2);

 return;
}
