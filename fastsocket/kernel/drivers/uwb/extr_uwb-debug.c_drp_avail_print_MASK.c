
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int local; int global; } ;
struct uwb_rc {TYPE_1__ drp_avail; } ;
struct seq_file {struct uwb_rc* private; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct uwb_rc *VAR_3 = VAR_1->private;
 char VAR_4[72];

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_3->drp_avail.global, VAR_0);
 FUNC_1(VAR_1, "global:  %s\n", VAR_4);
 FUNC_0(VAR_4, sizeof(VAR_4), VAR_3->drp_avail.local, VAR_0);
 FUNC_1(VAR_1, "local:   %s\n", VAR_4);
 FUNC_0(VAR_4, sizeof(VAR_4), VAR_3->drp_avail.pending, VAR_0);
 FUNC_1(VAR_1, "pending: %s\n", VAR_4);

 return 0;
}
