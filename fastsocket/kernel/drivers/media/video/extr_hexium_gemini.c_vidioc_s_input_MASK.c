
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct hexium {unsigned int cur_input; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct hexium*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct hexium *VAR_6 = (struct hexium *) VAR_5->ext_priv;

 FUNC_0(("VIDIOC_S_INPUT %d.\n", VAR_4));

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_6->cur_input = VAR_4;
 FUNC_1(VAR_6, VAR_4);
 return 0;
}
