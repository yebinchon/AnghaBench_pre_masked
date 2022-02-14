
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct saa7146_standard {scalar_t__ id; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mxb*,int ,int ,int) ;
 int FUNC_2 (struct saa7146_dev*,int ,int) ;
 int FUNC_3 (struct mxb*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct saa7146_dev *VAR_6, struct saa7146_standard *VAR_7)
{
 struct mxb *VAR_8 = (struct mxb *)VAR_6->ext_priv;

 if (VAR_2 == VAR_7->id) {
  v4l2_std_id VAR_9 = VAR_2;

  FUNC_0(("VIDIOC_S_STD: setting mxb for PAL_I.\n"));

  FUNC_2(VAR_6, VAR_0, 0x00404050);

  FUNC_1(VAR_8, VAR_3, VAR_4, 0);
  FUNC_3(VAR_8, VAR_3, VAR_5, VAR_9);
 } else {
  v4l2_std_id VAR_10 = VAR_1;

  FUNC_0(("VIDIOC_S_STD: setting mxb for PAL/NTSC/SECAM.\n"));

  FUNC_2(VAR_6, VAR_0, 0x00404050);

  FUNC_1(VAR_8, VAR_3, VAR_4, 1);
  FUNC_3(VAR_8, VAR_3, VAR_5, VAR_10);
 }
 return 0;
}
