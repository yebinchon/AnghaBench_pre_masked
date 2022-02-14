
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int written ;
struct TYPE_2__ {int secs_w; int secs_rg; int pkt_started; } ;
struct pktcdvd_device {TYPE_1__ stats; int bdev; } ;
struct packet_data {int sector; int frames; int io_wait; int * pages; struct bio** r_bios; scalar_t__ cache_valid; int lock; struct bio* orig_bios; int io_errors; } ;
struct bio_vec {int dummy; } ;
struct bio {int bi_sector; int bi_size; int bi_max_vecs; int bi_rw; int bi_destructor; struct bio_vec* bi_io_vec; struct packet_data* bi_private; int bi_end_io; int bi_bdev; struct bio* bi_next; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio*,int ,int,int) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct pktcdvd_device*,struct bio*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pktcdvd_device *VAR_6, struct packet_data *VAR_7)
{
 int VAR_8 = 0;
 struct bio *VAR_9;
 int VAR_10;
 char VAR_11[VAR_1];

 FUNC_1(!VAR_7->orig_bios);

 FUNC_4(&VAR_7->io_wait, 0);
 FUNC_4(&VAR_7->io_errors, 0);




 FUNC_7(VAR_11, 0, sizeof(VAR_11));
 FUNC_9(&VAR_7->lock);
 for (VAR_9 = VAR_7->orig_bios; VAR_9; VAR_9 = VAR_9->bi_next) {
  int VAR_12 = (VAR_9->bi_sector - VAR_7->sector) / (VAR_0 >> 9);
  int VAR_13 = VAR_9->bi_size / VAR_0;
  VAR_6->stats.secs_w += VAR_13 * (VAR_0 >> 9);
  FUNC_1(VAR_12 < 0);
  FUNC_1(VAR_12 + VAR_13 > VAR_7->frames);
  for (VAR_10 = VAR_12; VAR_10 < VAR_12 + VAR_13; VAR_10++)
   VAR_11[VAR_10] = 1;
 }
 FUNC_10(&VAR_7->lock);

 if (VAR_7->cache_valid) {
  FUNC_2("pkt_gather_data: zone %llx cached\n",
   (unsigned long long)VAR_7->sector);
  goto out_account;
 }




 for (VAR_10 = 0; VAR_10 < VAR_7->frames; VAR_10++) {
  struct bio_vec *VAR_14;

  int VAR_15, VAR_16;
  if (VAR_11[VAR_10])
   continue;
  VAR_9 = VAR_7->r_bios[VAR_10];
  VAR_14 = VAR_9->bi_io_vec;
  FUNC_6(VAR_9);
  VAR_9->bi_max_vecs = 1;
  VAR_9->bi_sector = VAR_7->sector + VAR_10 * (VAR_0 >> 9);
  VAR_9->bi_bdev = VAR_6->bdev;
  VAR_9->bi_end_io = VAR_5;
  VAR_9->bi_private = VAR_7;
  VAR_9->bi_io_vec = VAR_14;
  VAR_9->bi_destructor = VAR_4;

  VAR_15 = (VAR_10 * VAR_0) / VAR_2;
  VAR_16 = (VAR_10 * VAR_0) % VAR_2;
  FUNC_2("pkt_gather_data: Adding frame %d, page:%p offs:%d\n",
   VAR_10, VAR_7->pages[VAR_15], VAR_16);
  if (!FUNC_5(VAR_9, VAR_7->pages[VAR_15], VAR_0, VAR_16))
   FUNC_0();

  FUNC_3(&VAR_7->io_wait);
  VAR_9->bi_rw = VAR_3;
  FUNC_8(VAR_6, VAR_9);
  VAR_8++;
 }

out_account:
 FUNC_2("pkt_gather_data: need %d frames for zone %llx\n",
  VAR_8, (unsigned long long)VAR_7->sector);
 VAR_6->stats.pkt_started++;
 VAR_6->stats.secs_rg += VAR_8 * (VAR_0 >> 9);
}
