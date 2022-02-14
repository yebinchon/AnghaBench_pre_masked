
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_packet {int * header; int * payload; } ;
struct fw_ohci {int card; } ;
typedef int lock_old ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct fw_packet*) ;
 int FUNC_6 (struct fw_packet*,int *,int ,int *,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct fw_ohci*,int ) ;
 int FUNC_9 (struct fw_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct fw_ohci *VAR_9,
         struct fw_packet *VAR_10, u32 VAR_11)
{
 struct fw_packet VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 __be32 *VAR_17, VAR_18;
 u32 VAR_19, VAR_20;

 VAR_13 = FUNC_2(VAR_10->header[0]);
 VAR_14 = FUNC_0(VAR_10->header[3]);
 VAR_17 = VAR_10->payload;
 VAR_15 = FUNC_1(VAR_10->header[3]);

 if (VAR_13 == VAR_7 &&
     VAR_15 == VAR_1 && VAR_14 == 8) {
  VAR_19 = FUNC_3(VAR_17[0]);
  VAR_20 = FUNC_3(VAR_17[1]);
 } else if (VAR_13 == VAR_8) {
  VAR_19 = 0;
  VAR_20 = 0;
 } else {
  FUNC_6(&VAR_12, VAR_10->header,
     VAR_6, ((void*)0), 0);
  goto out;
 }

 VAR_16 = (VAR_11 - VAR_0) / 4;
 FUNC_9(VAR_9, VAR_4, VAR_20);
 FUNC_9(VAR_9, VAR_2, VAR_19);
 FUNC_9(VAR_9, VAR_3, VAR_16);

 if (FUNC_8(VAR_9, VAR_3) & 0x80000000)
  VAR_18 = FUNC_4(FUNC_8(VAR_9, VAR_4));
 else
  FUNC_7("swap not done yet\n");

 FUNC_6(&VAR_12, VAR_10->header,
    VAR_5, &VAR_18, sizeof(VAR_18));
 out:
 FUNC_5(&VAR_9->card, &VAR_12);
}
