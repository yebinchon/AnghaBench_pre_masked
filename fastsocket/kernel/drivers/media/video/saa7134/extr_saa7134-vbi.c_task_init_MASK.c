
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_tvnorm {int h_start; int h_stop; int vbi_v_start_0; int vbi_v_stop_0; } ;
struct saa7134_dev {struct saa7134_tvnorm* tvnorm; } ;
struct TYPE_2__ {int width; int height; } ;
struct saa7134_buf {TYPE_1__ vb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int VAR_0 ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static void FUNC_19(struct saa7134_dev *VAR_1, struct saa7134_buf *VAR_2,
        int VAR_3)
{
 struct saa7134_tvnorm *VAR_4 = VAR_1->tvnorm;


 FUNC_18(FUNC_5(VAR_3), VAR_4->h_start & 0xff);
 FUNC_18(FUNC_6(VAR_3), VAR_4->h_start >> 8);
 FUNC_18(FUNC_7(VAR_3), VAR_4->h_stop & 0xff);
 FUNC_18(FUNC_8(VAR_3), VAR_4->h_stop >> 8);
 FUNC_18(FUNC_13(VAR_3), VAR_4->vbi_v_start_0 & 0xff);
 FUNC_18(FUNC_14(VAR_3), VAR_4->vbi_v_start_0 >> 8);
 FUNC_18(FUNC_15(VAR_3), VAR_4->vbi_v_stop_0 & 0xff);
 FUNC_18(FUNC_16(VAR_3), VAR_4->vbi_v_stop_0 >> 8);

 FUNC_18(FUNC_3(VAR_3), VAR_0 & 0xff);
 FUNC_18(FUNC_4(VAR_3), VAR_0 >> 8);
 FUNC_18(FUNC_10(VAR_3), 0x00);
 FUNC_18(FUNC_9(VAR_3), 0x00);

 FUNC_18(FUNC_1(VAR_3), VAR_2->vb.width & 0xff);
 FUNC_18(FUNC_2(VAR_3), VAR_2->vb.width >> 8);
 FUNC_18(FUNC_11(VAR_3), VAR_2->vb.height & 0xff);
 FUNC_18(FUNC_12(VAR_3), VAR_2->vb.height >> 8);

 FUNC_17(FUNC_0(VAR_3), 0xc0, 0x00);
}
