
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct saa6588_command {unsigned int result; int * event_list; struct file* instance; } ;
struct file {struct saa7134_fh* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,int ,struct saa6588_command*) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 struct saa7134_fh *VAR_6 = VAR_4->private_data;
 struct saa7134_dev *VAR_7 = VAR_6->dev;
 struct saa6588_command VAR_8;

 VAR_8.instance = VAR_4;
 VAR_8.event_list = VAR_5;
 VAR_8.result = -VAR_0;
 FUNC_0(VAR_7, VAR_2, VAR_3, VAR_1, &VAR_8);

 return VAR_8.result;
}
