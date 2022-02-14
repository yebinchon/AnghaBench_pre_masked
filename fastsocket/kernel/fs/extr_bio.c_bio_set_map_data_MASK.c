
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {int dummy; } ;
struct bio_vec {int dummy; } ;
struct bio_map_data {int nr_sgvecs; int is_our_pages; int sgvecs; int iovecs; } ;
struct bio {int bi_vcnt; struct bio_map_data* bi_private; struct sg_iovec* bi_io_vec; } ;


 int FUNC_0 (int ,struct sg_iovec*,int) ;

__attribute__((used)) static void FUNC_1(struct bio_map_data *VAR_0, struct bio *VAR_1,
        struct sg_iovec *VAR_2, int VAR_3,
        int VAR_4)
{
 FUNC_0(VAR_0->iovecs, VAR_1->bi_io_vec, sizeof(struct bio_vec) * VAR_1->bi_vcnt);
 FUNC_0(VAR_0->sgvecs, VAR_2, sizeof(struct sg_iovec) * VAR_3);
 VAR_0->nr_sgvecs = VAR_3;
 VAR_0->is_our_pages = VAR_4;
 VAR_1->bi_private = VAR_0;
}
