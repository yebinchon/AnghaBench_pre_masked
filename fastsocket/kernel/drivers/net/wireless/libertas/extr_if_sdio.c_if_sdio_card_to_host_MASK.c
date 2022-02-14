
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct if_sdio_card {int* buffer; int ioport; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct if_sdio_card*,int*,int) ;
 int FUNC_1 (struct if_sdio_card*,int*,int) ;
 int FUNC_2 (struct if_sdio_card*,int*,int) ;
 int FUNC_3 (struct if_sdio_card*,int*) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int*,int ,int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct if_sdio_card *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_4(VAR_5);

 VAR_10 = FUNC_3(VAR_7, &VAR_8);
 if (VAR_8)
  goto out;

 if (VAR_10 < 4) {
  FUNC_6("invalid packet size (%d bytes) from firmware\n",
   (int)VAR_10);
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_13 = VAR_6 + VAR_2;
 while (1) {
  VAR_9 = FUNC_10(VAR_7->func, VAR_4, &VAR_8);
  if (VAR_8)
   goto out;
  if (VAR_9 & VAR_3)
   break;
  if (FUNC_12(VAR_6, VAR_13)) {
   VAR_8 = -VAR_1;
   goto out;
  }
  FUNC_8(1);
 }






 VAR_12 = FUNC_9(VAR_7->func, VAR_10);

 VAR_8 = FUNC_11(VAR_7->func, VAR_7->buffer, VAR_7->ioport, VAR_12);
 if (VAR_8)
  goto out;

 VAR_12 = VAR_7->buffer[0] | (VAR_7->buffer[1] << 8);
 VAR_11 = VAR_7->buffer[2] | (VAR_7->buffer[3] << 8);

 FUNC_6("packet of type %d and size %d bytes\n",
  (int)VAR_11, (int)VAR_12);

 if (VAR_12 > VAR_10) {
  FUNC_6("packet fragment (%d > %d)\n",
   (int)VAR_12, (int)VAR_10);
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_12 < VAR_10) {
  FUNC_6("packet fragment (%d < %d)\n",
   (int)VAR_12, (int)VAR_10);
 }

 switch (VAR_11) {
 case 130:
  VAR_8 = FUNC_0(VAR_7, VAR_7->buffer + 4, VAR_12 - 4);
  if (VAR_8)
   goto out;
  break;
 case 129:
  VAR_8 = FUNC_1(VAR_7, VAR_7->buffer + 4, VAR_12 - 4);
  if (VAR_8)
   goto out;
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_7, VAR_7->buffer + 4, VAR_12 - 4);
  if (VAR_8)
   goto out;
  break;
 default:
  FUNC_6("invalid type (%d) from firmware\n",
    (int)VAR_11);
  VAR_8 = -VAR_0;
  goto out;
 }

out:
 if (VAR_8)
  FUNC_7("problem fetching packet from firmware\n");

 FUNC_5(VAR_5, "ret %d", VAR_8);

 return VAR_8;
}
