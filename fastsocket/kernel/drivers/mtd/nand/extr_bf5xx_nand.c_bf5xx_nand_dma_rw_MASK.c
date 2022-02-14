
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;
struct bf5xx_nand_platform {short page_size; } ;
struct bf5xx_nand_info {int dma_completion; int device; struct bf5xx_nand_platform* platform; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 () ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,struct mtd_info*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 struct bf5xx_nand_info* FUNC_9 (struct mtd_info*) ;
 int FUNC_10 (int ,unsigned short) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned short) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct mtd_info *VAR_5,
    uint8_t *VAR_6, int VAR_7)
{
 struct bf5xx_nand_info *VAR_8 = FUNC_9(VAR_5);
 struct bf5xx_nand_platform *VAR_9 = VAR_8->platform;
 unsigned short VAR_10 = (VAR_9->page_size ? 512 : 256);
 unsigned short VAR_11;

 FUNC_4(VAR_8->device, " mtd->%p, buf->%p, is_read %d\n",
   VAR_5, VAR_6, VAR_7);







 if (VAR_7)
  FUNC_8((unsigned int)VAR_6,
    (unsigned int)(VAR_6 + VAR_10));
 else
  FUNC_7((unsigned int)VAR_6,
    (unsigned int)(VAR_6 + VAR_10));






 FUNC_2(0x1);
 FUNC_0();

 FUNC_5(VAR_0);
 FUNC_3(VAR_0);


 FUNC_10(VAR_0, 0x0);
 FUNC_11(VAR_0, (unsigned long) VAR_6);
 if (VAR_7)
  VAR_11 |= VAR_4;
 FUNC_10(VAR_0, VAR_11);
 FUNC_6(VAR_0);


 if (VAR_7)
  FUNC_1(0x1);
 else
  FUNC_1(0x2);
 FUNC_14(&VAR_8->dma_completion);
}
