
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_dev; } ;
typedef TYPE_3__ bt3c_info_t ;
typedef int b ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (char*,int *,int) ;
 unsigned int FUNC_9 (char*,int *,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(bt3c_info_t *VAR_3, const unsigned char *VAR_4,
         int VAR_5)
{
 char *VAR_6 = (char *) VAR_4;
 char VAR_7[9];
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_8 = VAR_3->p_dev->io.BasePort1;


 FUNC_2(VAR_8, 0x8040, 0x0404);
 FUNC_2(VAR_8, 0x8040, 0x0400);

 FUNC_10(1);

 FUNC_2(VAR_8, 0x8040, 0x0404);

 FUNC_10(17);


 while (VAR_5) {
  if (VAR_6[0] != 'S') {
   FUNC_0("Bad address in firmware");
   VAR_14 = -VAR_1;
   goto error;
  }

  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  FUNC_5(VAR_7, VAR_6 + 2, 2);
  VAR_9 = FUNC_9(VAR_7, ((void*)0), 16);

  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  FUNC_5(VAR_7, VAR_6 + 4, 8);
  VAR_10 = FUNC_9(VAR_7, ((void*)0), 16);

  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  FUNC_5(VAR_7, VAR_6 + (VAR_9 * 2) + 2, 2);
  VAR_11 = FUNC_9(VAR_7, ((void*)0), 16);

  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   FUNC_5(VAR_7, VAR_6 + (VAR_13 * 2) + 2, 2);
   VAR_12 += FUNC_8(VAR_7, ((void*)0), 16);
  }

  if (((VAR_12 + VAR_11) & 0xff) != 0xff) {
   FUNC_0("Checksum error in firmware");
   VAR_14 = -VAR_2;
   goto error;
  }

  if (VAR_6[1] == '3') {
   FUNC_1(VAR_8, VAR_10);

   FUNC_6(VAR_7, 0, sizeof(VAR_7));
   for (VAR_13 = 0; VAR_13 < (VAR_9 - 4) / 2; VAR_13++) {
    FUNC_5(VAR_7, VAR_6 + (VAR_13 * 4) + 12, 4);
    VAR_12 = FUNC_9(VAR_7, ((void*)0), 16);
    FUNC_3(VAR_8, VAR_12);
   }
  }

  VAR_6 += (VAR_9 * 2) + 6;
  VAR_5 -= (VAR_9 * 2) + 6;
 }

 FUNC_10(17);


 FUNC_1(VAR_8, 0x3000);
 FUNC_7(FUNC_4(VAR_8 + VAR_0) | 0x40, VAR_8 + VAR_0);

error:
 FUNC_10(17);


 FUNC_2(VAR_8, 0x7006, 0x0000);
 FUNC_2(VAR_8, 0x7005, 0x0000);
 FUNC_2(VAR_8, 0x7001, 0x0000);

 return VAR_14;
}
