
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tpm_chip*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tpm_chip*,int ) ;
 int FUNC_4 (struct tpm_chip*,size_t) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_7, u8 * VAR_8, size_t VAR_9)
{
 int VAR_10;
 int VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


 FUNC_2(VAR_2, VAR_0);

 VAR_11 = FUNC_1(VAR_7, 1);
 if (VAR_11) {
  FUNC_0(VAR_7->dev, "Timeout while clearing FIFO\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_3(VAR_7, VAR_3);
 if (VAR_11)
  return -VAR_1;

 VAR_14 = (VAR_9 & 0xff000000) >> 24;
 VAR_15 = (VAR_9 & 0x00ff0000) >> 16;
 VAR_16 = (VAR_9 & 0x0000ff00) >> 8;
 VAR_17 = (VAR_9 & 0x000000ff);
 VAR_12 = ((VAR_9 + 6) & 0xffffff00) >> 8;
 VAR_13 = ((VAR_9 + 6) & 0x000000ff);


 FUNC_4(VAR_7, VAR_6);
 FUNC_4(VAR_7, VAR_4);
 FUNC_4(VAR_7, VAR_12);
 FUNC_4(VAR_7, VAR_13);


 FUNC_4(VAR_7, VAR_6);
 FUNC_4(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_14);
 FUNC_4(VAR_7, VAR_15);
 FUNC_4(VAR_7, VAR_16);
 FUNC_4(VAR_7, VAR_17);


 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  FUNC_4(VAR_7, VAR_8[VAR_10]);
 }
 return VAR_9;
}
