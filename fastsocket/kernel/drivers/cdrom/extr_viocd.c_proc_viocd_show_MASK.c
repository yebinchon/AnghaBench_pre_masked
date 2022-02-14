
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int model; int type; int rsrcname; } ;


 int FUNC_0 (struct seq_file*,char*,int,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_2, "viocd device %d is iSeries resource %10.10s"
    "type %4.4s, model %3.3s\n",
    VAR_4, VAR_0[VAR_4].rsrcname,
    VAR_0[VAR_4].type,
    VAR_0[VAR_4].model);
 }
 return 0;
}
