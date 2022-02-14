
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {int slock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7134_fh*,int ) ;
 int FUNC_2 (struct saa7134_dev*,struct saa7134_fh*,int ) ;
 int FUNC_3 (struct saa7134_dev*,struct saa7134_fh*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct saa7134_dev*,struct saa7134_fh*) ;
 int FUNC_7 (struct saa7134_dev*,struct saa7134_fh*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct saa7134_fh *VAR_7 = VAR_5;
 struct saa7134_dev *VAR_8 = VAR_7->dev;
 unsigned long VAR_9;

 if (VAR_6) {
  if (VAR_3 > 0) {
   FUNC_0("no_overlay\n");
   return -VAR_1;
  }

  if (!FUNC_3(VAR_8, VAR_7, VAR_2))
   return -VAR_0;
  FUNC_4(&VAR_8->slock, VAR_9);
  FUNC_6(VAR_8, VAR_7);
  FUNC_5(&VAR_8->slock, VAR_9);
 }
 if (!VAR_6) {
  if (!FUNC_1(VAR_7, VAR_2))
   return -VAR_1;
  FUNC_4(&VAR_8->slock, VAR_9);
  FUNC_7(VAR_8, VAR_7);
  FUNC_5(&VAR_8->slock, VAR_9);
  FUNC_2(VAR_8, VAR_7, VAR_2);
 }
 return 0;
}
