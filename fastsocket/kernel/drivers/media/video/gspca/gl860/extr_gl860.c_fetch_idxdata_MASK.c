
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idxdata {int idx; int data; } ;
struct gspca_dev {int dummy; } ;


 int ctrl_out (struct gspca_dev*,int,int,int,int ,int,int ) ;
 scalar_t__ memcmp (int ,char*,int) ;
 int msleep (int ) ;

void fetch_idxdata(struct gspca_dev *gspca_dev, struct idxdata *tbl, int len)
{
 int n;

 for (n = 0; n < len; n++) {
  if (memcmp(tbl[n].data, "\xff\xff\xff", 3) != 0)
   ctrl_out(gspca_dev, 0x40, 3, 0x7a00, tbl[n].idx,
     3, tbl[n].data);
  else
   msleep(tbl[n].idx);
 }
}
