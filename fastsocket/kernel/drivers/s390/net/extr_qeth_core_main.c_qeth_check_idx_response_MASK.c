
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,unsigned char*,int ) ;
 int FUNC_1 (int,char*,unsigned char,char*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_5,
 unsigned char *VAR_6)
{
 if (!VAR_6)
  return 0;

 FUNC_0(VAR_0, 2, VAR_6, VAR_3);
 if ((VAR_6[2] & 0xc0) == 0xc0) {
  FUNC_1(2, "received an IDX TERMINATE "
      "with cause code 0x%02x%s\n",
      VAR_6[4],
      ((VAR_6[4] == 0x22) ?
       " -- try another portname" : ""));
  FUNC_2(VAR_4, 2, "ckidxres");
  FUNC_2(VAR_4, 2, " idxterm");
  FUNC_3(VAR_4, 2, "  rc%d", -VAR_1);
  if (VAR_6[4] == 0xf6) {
   FUNC_4(&VAR_5->gdev->dev,
   "The qeth device is not configured "
   "for the OSI layer required by z/VM\n");
   return -VAR_2;
  }
  return -VAR_1;
 }
 return 0;
}
