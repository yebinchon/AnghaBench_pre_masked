
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int lock; scalar_t__ wcomplete; scalar_t__ no_paper; scalar_t__ rcomplete; scalar_t__ bidir; int wwait; int rwait; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct usblp* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 struct usblp *VAR_8 = VAR_4->private_data;

 FUNC_0(VAR_4, &VAR_8->rwait, VAR_5);
 FUNC_0(VAR_4, &VAR_8->wwait, VAR_5);
 FUNC_1(&VAR_8->lock, VAR_7);
 VAR_6 = ((VAR_8->bidir && VAR_8->rcomplete) ? VAR_0 | VAR_2 : 0) |
    ((VAR_8->no_paper || VAR_8->wcomplete) ? VAR_1 | VAR_3 : 0);
 FUNC_2(&VAR_8->lock, VAR_7);
 return VAR_6;
}
