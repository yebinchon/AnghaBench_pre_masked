
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zatm_dev {int chans; TYPE_2__* pool_info; int rx_map; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_3__ {int vci_bits; } ;
struct atm_dev {TYPE_1__ ci_range; } ;
struct TYPE_4__ {int next_thres; scalar_t__ next_cnt; scalar_t__ next_off; scalar_t__ offset; int high_water; int low_water; scalar_t__ rqu_count; scalar_t__ rqa_count; scalar_t__ ref_count; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct zatm_dev* FUNC_1 (struct atm_dev*) ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct zatm_dev*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct atm_dev *VAR_7)
{
 struct zatm_dev *VAR_8;
 int VAR_9,VAR_10;

FUNC_0("start_rx\n");
 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = sizeof(struct atm_vcc *)*VAR_8->chans;
 VAR_8->rx_map = FUNC_2(VAR_9,VAR_1);
 if (!VAR_8->rx_map) return -VAR_0;

 FUNC_3(VAR_8,(1 << VAR_7->ci_range.vci_bits)-1,VAR_6);

 for (VAR_10 = 0; VAR_10 <= VAR_5; VAR_10++) {
  VAR_8->pool_info[VAR_10].ref_count = 0;
  VAR_8->pool_info[VAR_10].rqa_count = 0;
  VAR_8->pool_info[VAR_10].rqu_count = 0;
  VAR_8->pool_info[VAR_10].low_water = VAR_3;
  VAR_8->pool_info[VAR_10].high_water = VAR_2;
  VAR_8->pool_info[VAR_10].offset = 0;
  VAR_8->pool_info[VAR_10].next_off = 0;
  VAR_8->pool_info[VAR_10].next_cnt = 0;
  VAR_8->pool_info[VAR_10].next_thres = VAR_4;
 }
 return 0;
}
