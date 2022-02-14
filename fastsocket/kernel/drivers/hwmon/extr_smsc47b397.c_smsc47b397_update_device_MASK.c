
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47b397_data {int valid; int* temp; int* fan; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*) ;
 struct smsc47b397_data* FUNC_4 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct smsc47b397_data*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct smsc47b397_data *FUNC_9(struct device *VAR_2)
{
 struct smsc47b397_data *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_5(&VAR_3->update_lock);

 if (FUNC_8(VAR_1, VAR_3->last_updated + VAR_0) || !VAR_3->valid) {
  FUNC_3(VAR_2, "starting device update...\n");


  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   VAR_3->temp[VAR_4] = FUNC_7(VAR_3,
     FUNC_2(VAR_4));


   VAR_3->fan[VAR_4] = FUNC_7(VAR_3,
     FUNC_0(VAR_4));
   VAR_3->fan[VAR_4] |= FUNC_7(VAR_3,
     FUNC_1(VAR_4)) << 8;
  }

  VAR_3->last_updated = VAR_1;
  VAR_3->valid = 1;

  FUNC_3(VAR_2, "... device update complete\n");
 }

 FUNC_6(&VAR_3->update_lock);

 return VAR_3;
}
