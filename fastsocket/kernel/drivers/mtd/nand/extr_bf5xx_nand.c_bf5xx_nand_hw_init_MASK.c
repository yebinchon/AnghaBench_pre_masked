
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bf5xx_nand_platform {int page_size; int data_width; unsigned short rd_dly; int wr_dly; } ;
struct bf5xx_nand_info {int device; struct bf5xx_nand_platform* platform; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct bf5xx_nand_info*) ;
 unsigned short FUNC_2 () ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned short) ;
 int FUNC_6 (int ,char*,unsigned short) ;
 int FUNC_7 (int ,char*,int,int,int ,unsigned short) ;

__attribute__((used)) static int FUNC_8(struct bf5xx_nand_info *VAR_5)
{
 int VAR_6 = 0;
 unsigned short VAR_7;
 struct bf5xx_nand_platform *VAR_8 = VAR_5->platform;


 FUNC_7(VAR_5->device,
  "page_size=%d, data_width=%d, wr_dly=%d, rd_dly=%d\n",
  (VAR_8->page_size ? 512 : 256),
  (VAR_8->data_width ? 16 : 8),
  VAR_8->wr_dly, VAR_8->rd_dly);

 VAR_7 = (VAR_8->page_size << VAR_2) |
  (VAR_8->data_width << VAR_1) |
  (VAR_8->rd_dly << VAR_3) |
  (VAR_8->rd_dly << VAR_4);
 FUNC_6(VAR_5->device, "NFC_CTL is 0x%04x\n", VAR_7);

 FUNC_3(VAR_7);
 FUNC_0();


 FUNC_4(0x0);
 FUNC_0();
 VAR_7 = FUNC_2();
 FUNC_5(VAR_7);
 FUNC_0();


 if (FUNC_1(VAR_5))
  VAR_6 = -VAR_0;

 return VAR_6;
}
