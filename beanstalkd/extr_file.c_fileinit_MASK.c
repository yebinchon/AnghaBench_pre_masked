
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dir; } ;
typedef TYPE_1__ Wal ;
struct TYPE_6__ {int seq; int path; TYPE_1__* w; } ;
typedef TYPE_2__ File ;


 int FUNC_0 (char*,int ,int) ;

int
FUNC_1(File *VAR_0, Wal *VAR_1, int VAR_2)
{
    VAR_0->w = VAR_1;
    VAR_0->seq = VAR_2;
    VAR_0->path = FUNC_0("%s/binlog.%d", VAR_1->dir, VAR_2);
    return !!VAR_0->path;
}
