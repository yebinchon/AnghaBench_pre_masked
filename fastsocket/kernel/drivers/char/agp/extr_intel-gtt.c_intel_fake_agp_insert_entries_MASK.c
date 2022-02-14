
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct agp_memory {scalar_t__ page_count; int type; int is_flushed; int pages; int num_sg; int sg_list; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {int clear_fake_agp; int stolen_size; int gtt_mappable_entries; scalar_t__ gtt_total_entries; scalar_t__ needs_dmar; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* check_flags ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct agp_memory*,scalar_t__,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int) ;
 int FUNC_4 (struct sg_table*,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,struct sg_table*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct agp_memory *VAR_5,
      off_t VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_1;

 if (VAR_4.clear_fake_agp) {
  int VAR_9 = VAR_4.stolen_size / VAR_3;
  int VAR_10 = VAR_4.gtt_mappable_entries;
  FUNC_2(VAR_9, VAR_10 - VAR_9);
  VAR_4.clear_fake_agp = 0;
 }

 if (VAR_2 == 1 && VAR_7 == VAR_0)
  return FUNC_1(VAR_5, VAR_6, VAR_7);

 if (VAR_5->page_count == 0)
  goto out;

 if (VAR_6 + VAR_5->page_count > VAR_4.gtt_total_entries)
  goto out_err;

 if (VAR_7 != VAR_5->type)
  goto out_err;

 if (!VAR_4.driver->check_flags(VAR_7))
  goto out_err;

 if (!VAR_5->is_flushed)
  FUNC_0();

 if (VAR_4.needs_dmar) {
  struct sg_table VAR_11;

  VAR_8 = FUNC_5(VAR_5->pages, VAR_5->page_count, &VAR_11);
  if (VAR_8 != 0)
   return VAR_8;

  FUNC_4(&VAR_11, VAR_6, VAR_7);
  VAR_5->sg_list = VAR_11.sgl;
  VAR_5->num_sg = VAR_11.nents;
 } else
  FUNC_3(VAR_6, VAR_5->page_count, VAR_5->pages,
           VAR_7);

out:
 VAR_8 = 0;
out_err:
 VAR_5->is_flushed = 1;
 return VAR_8;
}
