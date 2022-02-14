
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next_device; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 MGSLPC_INFO *VAR_4;

 FUNC_1(VAR_2, "synclink driver:%s\n", VAR_0);

 VAR_4 = VAR_1;
 while( VAR_4 ) {
  FUNC_0(VAR_2, VAR_4);
  VAR_4 = VAR_4->next_device;
 }
 return 0;
}
