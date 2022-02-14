
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {struct mxc_nand_host* priv; } ;
struct mxc_nand_host {int status_request; int col_addr; int spare_only; scalar_t__ pagesize_2k; } ;
struct mtd_info {int writesize; int size; struct nand_chip* priv; } ;


 int FUNC_0 (int ,char*,unsigned int,int,int) ;
 int VAR_0 ;






 unsigned int VAR_1 ;



 int FUNC_1 (struct mxc_nand_host*,int,int) ;
 int FUNC_2 (struct mxc_nand_host*,int const,int) ;
 int FUNC_3 (struct mxc_nand_host*,int,int) ;
 int FUNC_4 (struct mxc_nand_host*) ;
 int FUNC_5 (struct mxc_nand_host*,int,int) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_2, unsigned VAR_3,
    int VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = VAR_2->priv;
 struct mxc_nand_host *VAR_7 = VAR_6->priv;
 int VAR_8 = 1;

 FUNC_0(VAR_0,
       "mxc_nand_command (cmd = 0x%x, col = 0x%x, page = 0x%x)\n",
       VAR_3, VAR_4, VAR_5);


 VAR_7->status_request = 0;


 switch (VAR_3) {

 case 128:
  VAR_7->col_addr = 0;
  VAR_7->status_request = 1;
  break;

 case 133:
  VAR_7->col_addr = VAR_4;
  VAR_7->spare_only = 0;
  VAR_8 = 0;
  break;

 case 131:
  VAR_7->col_addr = VAR_4;
  VAR_7->spare_only = 1;
  VAR_8 = 0;
  if (VAR_7->pagesize_2k)
   VAR_3 = 133;
  break;

 case 129:
  if (VAR_4 >= VAR_2->writesize) {







   if (VAR_7->pagesize_2k)

    FUNC_6(VAR_2, 133, 0,
      VAR_5);

   VAR_7->col_addr = VAR_4 - VAR_2->writesize;
   VAR_7->spare_only = 1;


   if (!VAR_7->pagesize_2k)
    FUNC_2(VAR_7, 131, 0);
  } else {
   VAR_7->spare_only = 0;
   VAR_7->col_addr = VAR_4;


   if (!VAR_7->pagesize_2k)
    FUNC_2(VAR_7, 133, 0);
  }
  VAR_8 = 0;
  break;

 case 134:
  FUNC_3(VAR_7, 0, VAR_7->spare_only);

  if (VAR_7->pagesize_2k) {

   FUNC_3(VAR_7, 1, VAR_7->spare_only);
   FUNC_3(VAR_7, 2, VAR_7->spare_only);
   FUNC_3(VAR_7, 3, VAR_7->spare_only);
  }

  break;

 case 136:
  VAR_8 = 0;
  break;
 }


 FUNC_2(VAR_7, VAR_3, VAR_8);


 if (VAR_4 != -1) {







  FUNC_1(VAR_7, 0, VAR_5 == -1);
  if (VAR_7->pagesize_2k)

   FUNC_1(VAR_7, 0, 0);
 }


 if (VAR_5 != -1) {

  FUNC_1(VAR_7, (VAR_5 & 0xff), 0);

  if (VAR_7->pagesize_2k) {
   if (VAR_2->size >= 0x10000000) {

    FUNC_1(VAR_7, (VAR_5 >> 8) & 0xff, 0);
    FUNC_1(VAR_7, (VAR_5 >> 16) & 0xff, 1);
   } else

    FUNC_1(VAR_7, (VAR_5 >> 8) & 0xff, 1);
  } else {

   if (VAR_2->size >= 0x4000000) {

    FUNC_1(VAR_7, (VAR_5 >> 8) & 0xff, 0);
    FUNC_1(VAR_7, (VAR_5 >> 16) & 0xff, 1);
   } else

    FUNC_1(VAR_7, (VAR_5 >> 8) & 0xff, 1);
  }
 }


 switch (VAR_3) {

 case 130:
  break;

 case 131:
 case 133:
  if (VAR_7->pagesize_2k) {

   FUNC_2(VAR_7, VAR_1, 1);

   FUNC_5(VAR_7, 0, VAR_7->spare_only);
   FUNC_5(VAR_7, 1, VAR_7->spare_only);
   FUNC_5(VAR_7, 2, VAR_7->spare_only);
   FUNC_5(VAR_7, 3, VAR_7->spare_only);
  } else
   FUNC_5(VAR_7, 0, VAR_7->spare_only);
  break;

 case 132:
  VAR_7->col_addr = 0;
  FUNC_4(VAR_7);
  break;

 case 134:
  break;

 case 128:
  break;

 case 135:
  break;
 }
}
