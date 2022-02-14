
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct txx9dmac_chan {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct txx9dmac_chan*,int ) ;
 scalar_t__ FUNC_2 (struct txx9dmac_chan*) ;
 int FUNC_3 (struct txx9dmac_chan*,int ) ;
 int FUNC_4 (struct txx9dmac_chan*,int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct txx9dmac_chan*) ;

__attribute__((used)) static void FUNC_7(struct txx9dmac_chan *VAR_8)
{
 if (FUNC_6(VAR_8))
  FUNC_5(FUNC_0(&VAR_8->chan),
   "  CHAR: %#llx SAR: %#llx DAR: %#llx CNTR: %#x"
   " SAIR: %#x DAIR: %#x CCR: %#x CSR: %#x\n",
   (u64)FUNC_2(VAR_8),
   FUNC_4(VAR_8, VAR_7),
   FUNC_4(VAR_8, VAR_5),
   FUNC_3(VAR_8, VAR_2),
   FUNC_3(VAR_8, VAR_6),
   FUNC_3(VAR_8, VAR_4),
   FUNC_3(VAR_8, VAR_0),
   FUNC_3(VAR_8, VAR_3));
 else
  FUNC_5(FUNC_0(&VAR_8->chan),
   "  CHAR: %#x SAR: %#x DAR: %#x CNTR: %#x"
   " SAIR: %#x DAIR: %#x CCR: %#x CSR: %#x\n",
   FUNC_1(VAR_8, VAR_1),
   FUNC_1(VAR_8, VAR_7),
   FUNC_1(VAR_8, VAR_5),
   FUNC_1(VAR_8, VAR_2),
   FUNC_1(VAR_8, VAR_6),
   FUNC_1(VAR_8, VAR_4),
   FUNC_1(VAR_8, VAR_0),
   FUNC_1(VAR_8, VAR_3));
}
