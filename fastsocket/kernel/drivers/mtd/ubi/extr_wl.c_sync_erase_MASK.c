
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {unsigned long long ec; int pnum; } ;
struct ubi_ec_hdr {int ec; } ;
struct ubi_device {unsigned long long max_ec; int wl_lock; int ec_hdr_alsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (char*,int ,unsigned long long) ;
 int FUNC_2 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ubi_device*,int ,unsigned long long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,unsigned long long) ;
 int FUNC_8 (struct ubi_device*,int ,int) ;
 int FUNC_9 (struct ubi_device*,int ,struct ubi_ec_hdr*) ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_4, struct ubi_wl_entry *VAR_5,
        int VAR_6)
{
 int VAR_7;
 struct ubi_ec_hdr *VAR_8;
 unsigned long long VAR_9 = VAR_5->ec;

 FUNC_1("erase PEB %d, old EC %llu", VAR_5->pnum, VAR_9);

 VAR_7 = FUNC_4(VAR_4, VAR_5->pnum, VAR_5->ec);
 if (VAR_7 > 0)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4->ec_hdr_alsize, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_8(VAR_4, VAR_5->pnum, VAR_6);
 if (VAR_7 < 0)
  goto out_free;

 VAR_9 += VAR_7;
 if (VAR_9 > VAR_3) {




  FUNC_7("erase counter overflow at PEB %d, EC %llu",
   VAR_5->pnum, VAR_9);
  VAR_7 = -VAR_0;
  goto out_free;
 }

 FUNC_1("erased PEB %d, new EC %llu", VAR_5->pnum, VAR_9);

 VAR_8->ec = FUNC_0(VAR_9);

 VAR_7 = FUNC_9(VAR_4, VAR_5->pnum, VAR_8);
 if (VAR_7)
  goto out_free;

 VAR_5->ec = VAR_9;
 FUNC_5(&VAR_4->wl_lock);
 if (VAR_5->ec > VAR_4->max_ec)
  VAR_4->max_ec = VAR_5->ec;
 FUNC_6(&VAR_4->wl_lock);

out_free:
 FUNC_2(VAR_8);
 return VAR_7;
}
