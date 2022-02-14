
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (struct mxb*,int) ;
 int FUNC_3 (struct mxb*,int) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_3, void *VAR_4, int VAR_5, void *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_4)->dev;
 struct mxb *VAR_8 = (struct mxb *)VAR_7->ext_priv;

 switch (VAR_5) {
 case 129:
 {
  int VAR_9 = *(int *)VAR_6;

  if (VAR_9 < 0 || VAR_9 >= VAR_2) {
   FUNC_0(("illegal argument to MXB_S_AUDIO_CD: i:%d.\n", VAR_9));
   return -VAR_0;
  }

  FUNC_1(("MXB_S_AUDIO_CD: i:%d.\n", VAR_9));

  FUNC_2(VAR_8, VAR_9);
  return 0;
 }
 case 128:
 {
  int VAR_10 = *(int *)VAR_6;

  if (VAR_10 < 0 || VAR_10 >= VAR_2) {
   FUNC_0(("illegal argument to MXB_S_AUDIO_LINE: i:%d.\n", VAR_10));
   return -VAR_0;
  }

  FUNC_1(("MXB_S_AUDIO_LINE: i:%d.\n", VAR_10));
  FUNC_3(VAR_8, VAR_10);
  return 0;
 }
 default:



  return -VAR_1;
 }
 return 0;
}
