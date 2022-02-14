
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gendisk {TYPE_2__* queue; struct blk_integrity* integrity; } ;
struct blk_integrity {int flags; int name; int tag_size; int get_tag_fn; int set_tag_fn; int tuple_size; int verify_fn; int generate_fn; int sector_size; int kobj; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_5__ {TYPE_1__ backing_dev_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (struct gendisk*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct blk_integrity* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct blk_integrity*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,char*,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(struct gendisk *VAR_9, struct blk_integrity *VAR_10)
{
 struct blk_integrity *VAR_11;
 static bool VAR_12 = 0;

 FUNC_0(VAR_9 == ((void*)0));

 if (!VAR_12) {
  FUNC_6("DIF/DIX support", ((void*)0));
  VAR_12 = 1;
 }

 if (VAR_9->integrity == ((void*)0)) {
  VAR_11 = FUNC_2(VAR_7,
          VAR_1 | VAR_5);
  if (!VAR_11)
   return -1;

  if (FUNC_4(&VAR_11->kobj, &VAR_8,
      &FUNC_1(VAR_9)->kobj,
      "%s", "integrity")) {
   FUNC_3(VAR_7, VAR_11);
   return -1;
  }

  FUNC_5(&VAR_11->kobj, VAR_4);

  VAR_11->flags |= VAR_2 | VAR_3;
  VAR_11->sector_size = FUNC_7(VAR_9->queue);
  VAR_9->integrity = VAR_11;
 } else
  VAR_11 = VAR_9->integrity;


 if (VAR_10 != ((void*)0)) {
  VAR_11->name = VAR_10->name;
  VAR_11->generate_fn = VAR_10->generate_fn;
  VAR_11->verify_fn = VAR_10->verify_fn;
  VAR_11->tuple_size = VAR_10->tuple_size;
  VAR_11->set_tag_fn = VAR_10->set_tag_fn;
  VAR_11->get_tag_fn = VAR_10->get_tag_fn;
  VAR_11->tag_size = VAR_10->tag_size;
 } else
  VAR_11->name = VAR_6;

 VAR_9->queue->backing_dev_info.capabilities |= VAR_0;

 return 0;
}
