
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmb_data {int size; struct cmb_data* last_block; } ;
struct cmb {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_channels; int lock; struct cmb* mem; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct ccw_device*,struct cmb_data*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct cmb*,int) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cmb_data*) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cmb*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ccw_device *VAR_4)
{
 int VAR_5;
 struct cmb *VAR_6;
 ssize_t VAR_7;
 struct cmb_data *VAR_8;


 VAR_8 = FUNC_7(sizeof(struct cmb_data), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->last_block = FUNC_7(sizeof(struct cmb), VAR_2);
 if (!VAR_8->last_block) {
  FUNC_6(VAR_8);
  return -VAR_0;
 }
 VAR_8->size = sizeof(struct cmb);
 FUNC_10(&VAR_3.lock);

 if (!VAR_3.mem) {

  VAR_7 = sizeof(struct cmb) * VAR_3.num_channels;
  FUNC_0(!FUNC_8(&VAR_3.list));

  FUNC_11(&VAR_3.lock);
  VAR_6 = (void*)FUNC_1(VAR_2 | VAR_1,
     FUNC_5(VAR_7));
  FUNC_10(&VAR_3.lock);

  if (VAR_3.mem) {

   FUNC_4((unsigned long)VAR_6, FUNC_5(VAR_7));
  } else if (!VAR_6) {

   VAR_5 = -VAR_0;
   goto out;
  } else {

   FUNC_9(VAR_6, 0, VAR_7);
   VAR_3.mem = VAR_6;
   FUNC_3(VAR_3.mem, 1);
  }
 }


 VAR_5 = FUNC_2(VAR_4, VAR_8);
out:
 FUNC_11(&VAR_3.lock);
 if (VAR_5) {
  FUNC_6(VAR_8->last_block);
  FUNC_6(VAR_8);
 }
 return VAR_5;
}
