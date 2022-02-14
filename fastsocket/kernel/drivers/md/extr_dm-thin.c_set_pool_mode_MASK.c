
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mode; } ;
struct pool_c {TYPE_3__ adjusted_pf; } ;
struct TYPE_5__ {int mode; } ;
struct pool {TYPE_2__ pf; void* process_prepared_discard; void* process_prepared_mapping; void* process_discard; void* process_bio; int pmd; int pool_md; TYPE_1__* ti; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;
struct TYPE_4__ {struct pool_c* private; } ;


 int FUNC_0 (char*,int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pool*) ;
 int FUNC_6 (struct pool*) ;
 int FUNC_7 (struct pool*,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static void FUNC_8(struct pool *VAR_10, enum pool_mode VAR_11)
{
 struct pool_c *VAR_12 = VAR_10->ti->private;
 bool VAR_13 = FUNC_2(VAR_10->pmd);
 enum pool_mode VAR_14 = FUNC_6(VAR_10);





 if (VAR_11 == 128 && VAR_13) {
  FUNC_0("%s: unable to switch pool to write mode until repaired.",
        FUNC_1(VAR_10->pool_md));
  if (VAR_14 != VAR_11)
   VAR_11 = VAR_14;
  else
   VAR_11 = 129;
 }





 if (VAR_14 == 131)
  VAR_11 = VAR_14;

 switch (VAR_11) {
 case 131:
  if (VAR_14 != VAR_11)
   FUNC_7(VAR_10, "failure");
  FUNC_3(VAR_10->pmd);
  VAR_10->process_bio = VAR_1;
  VAR_10->process_discard = VAR_1;
  VAR_10->process_prepared_mapping = VAR_9;
  VAR_10->process_prepared_discard = VAR_6;

  FUNC_5(VAR_10);
  break;

 case 129:
  if (VAR_14 != VAR_11)
   FUNC_7(VAR_10, "read-only");
  FUNC_3(VAR_10->pmd);
  VAR_10->process_bio = VAR_2;
  VAR_10->process_discard = VAR_3;
  VAR_10->process_prepared_mapping = VAR_9;
  VAR_10->process_prepared_discard = VAR_7;

  FUNC_5(VAR_10);
  break;

 case 130:
  if (VAR_14 != VAR_11)
   FUNC_7(VAR_10, "out-of-data-space");
  VAR_10->process_bio = VAR_2;
  VAR_10->process_discard = VAR_4;
  VAR_10->process_prepared_mapping = VAR_8;
  VAR_10->process_prepared_discard = VAR_7;
  break;

 case 128:
  if (VAR_14 != VAR_11)
   FUNC_7(VAR_10, "write");
  FUNC_4(VAR_10->pmd);
  VAR_10->process_bio = VAR_0;
  VAR_10->process_discard = VAR_4;
  VAR_10->process_prepared_mapping = VAR_8;
  VAR_10->process_prepared_discard = VAR_5;
  break;
 }

 VAR_10->pf.mode = VAR_11;




 VAR_12->adjusted_pf.mode = VAR_11;
}
