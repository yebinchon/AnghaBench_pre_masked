
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int wait; int iuspin; int flags; scalar_t__ werr; scalar_t__ rerr; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct wdm_device* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_8, struct poll_table_struct *VAR_9)
{
 struct wdm_device *VAR_10 = VAR_8->private_data;
 unsigned long VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_1(&VAR_10->iuspin, VAR_11);
 if (FUNC_3(VAR_5, &VAR_10->flags)) {
  VAR_12 = VAR_0;
  FUNC_2(&VAR_10->iuspin, VAR_11);
  goto desc_out;
 }
 if (FUNC_3(VAR_7, &VAR_10->flags))
  VAR_12 = VAR_1 | VAR_3;
 if (VAR_10->rerr || VAR_10->werr)
  VAR_12 |= VAR_0;
 if (!FUNC_3(VAR_6, &VAR_10->flags))
  VAR_12 |= VAR_2 | VAR_4;
 FUNC_2(&VAR_10->iuspin, VAR_11);

 FUNC_0(VAR_8, &VAR_10->wait, VAR_9);

desc_out:
 return VAR_12;
}
