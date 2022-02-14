
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct prism2_download_aux_dump* private; } ;
struct prism2_download_aux_dump {int page; TYPE_1__* local; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,unsigned long,int,int ) ;
 int FUNC_1 (struct seq_file*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct prism2_download_aux_dump *VAR_2 = VAR_0->private;

 FUNC_0(VAR_2->local->dev, (unsigned long)VAR_1 - 1, 0x80, VAR_2->page);
 FUNC_1(VAR_0, VAR_2->page, 0x80);
 return 0;
}
