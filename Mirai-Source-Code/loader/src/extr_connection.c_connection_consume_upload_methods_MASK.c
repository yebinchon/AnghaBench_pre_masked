
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int upload_method; } ;
struct connection {int rdbuf_pos; TYPE_1__ info; int rdbuf; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char*,int) ;

int FUNC_2(struct connection *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_4->rdbuf, VAR_4->rdbuf_pos, VAR_0, FUNC_0(VAR_0));

    if (VAR_5 == -1)
        return 0;

    if (FUNC_1(VAR_4->rdbuf, VAR_5, "wget: applet not found", 22) == -1)
        VAR_4->info.upload_method = VAR_3;
    else if (FUNC_1(VAR_4->rdbuf, VAR_5, "tftp: applet not found", 22) == -1)
        VAR_4->info.upload_method = VAR_2;
    else
        VAR_4->info.upload_method = VAR_1;

    return VAR_5;
}
