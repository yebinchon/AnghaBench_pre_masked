
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_dev {int chans; int free_shapers; int ubr; scalar_t__ ubr_ref_cnt; int tx_bw; int tx_map; } ;
struct atm_vcc {int dummy; } ;
struct atm_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zatm_dev* FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct zatm_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct atm_dev *VAR_4)
{
 struct zatm_dev *VAR_5;
 int VAR_6;

 FUNC_0("start_tx\n");
 VAR_5 = FUNC_1(VAR_4);
 VAR_5->tx_map = FUNC_2(sizeof(struct atm_vcc *)*
     VAR_5->chans,VAR_2);
 if (!VAR_5->tx_map) return -VAR_1;
 VAR_5->tx_bw = VAR_0;
 VAR_5->free_shapers = (1 << VAR_3)-1;
 VAR_5->ubr = -1;
 VAR_5->ubr_ref_cnt = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) FUNC_4(VAR_5,0,FUNC_3(VAR_6));
 return 0;
}
