
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_vv {int current_hps_source; int current_hps_sync; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 int FUNC_1 (struct saa7146_dev*,int ,int) ;

void FUNC_2(struct saa7146_dev *VAR_7, int VAR_8, int VAR_9)
{
 struct saa7146_vv *VAR_10 = VAR_7->vv_data;
 u32 VAR_11 = 0;


 VAR_11 = FUNC_0(VAR_7, VAR_0);

 VAR_11 &= ~( VAR_5 | VAR_4 | VAR_3 );
 VAR_11 |= (VAR_8 << 30) | (VAR_9 << 28);


 FUNC_1(VAR_7, VAR_0, VAR_11);
 FUNC_1(VAR_7, VAR_6, (VAR_1 | VAR_2));

 VAR_10->current_hps_source = VAR_8;
 VAR_10->current_hps_sync = VAR_9;
}
