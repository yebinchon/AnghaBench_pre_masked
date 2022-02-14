
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct pktcdvd_device* queuedata; } ;
struct TYPE_2__ {int size; } ;
struct pktcdvd_device {TYPE_1__ settings; } ;
struct bvec_merge_data {int bi_sector; int bi_size; } ;
struct bio_vec {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct pktcdvd_device*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_1, struct bvec_merge_data *VAR_2,
     struct bio_vec *VAR_3)
{
 struct pktcdvd_device *VAR_4 = VAR_1->queuedata;
 sector_t VAR_5 = FUNC_1(VAR_2->bi_sector, VAR_4);
 int VAR_6 = ((VAR_2->bi_sector - VAR_5) << 9) + VAR_2->bi_size;
 int VAR_7 = (VAR_4->settings.size << 9) - VAR_6;
 int VAR_8;





 VAR_8 = VAR_0 - VAR_2->bi_size;
 VAR_7 = FUNC_2(VAR_7, VAR_8);

 FUNC_0(VAR_7 < 0);
 return VAR_7;
}
