
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coalition {int type; int role; int ref_count; int should_notify; scalar_t__ id; int coalitions; int lock; int privileged; } ;
typedef scalar_t__ kern_return_t ;
typedef struct coalition* coalition_t ;
typedef scalar_t__ boolean_t ;


 struct coalition* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct coalition*,int) ;
 scalar_t__ FUNC_3 (struct coalition*,int ,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,int *) ;
 int VAR_16 ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,struct coalition*) ;

kern_return_t
FUNC_12(int VAR_17, int VAR_18, boolean_t VAR_19, coalition_t *VAR_20)
{
 kern_return_t VAR_21;
 struct coalition *VAR_22;

 if (VAR_17 < 0 || VAR_17 > VAR_1)
  return VAR_4;

 VAR_22 = (struct coalition *)FUNC_10(VAR_11);
 if (VAR_22 == VAR_0)
  return VAR_5;
 FUNC_2(VAR_22, sizeof(*VAR_22));

 VAR_22->type = VAR_17;
 VAR_22->role = VAR_18;


 VAR_21 = FUNC_3(VAR_22, VAR_16, VAR_19);
 if (VAR_21 != VAR_6) {
  FUNC_11(VAR_11, VAR_22);
  return VAR_21;
 }


 VAR_22->ref_count = 2;

 VAR_22->privileged = VAR_19 ? VAR_8 : VAR_3;




 FUNC_7(&VAR_22->lock, &VAR_13, &VAR_12);

 FUNC_8(&VAR_14);
 VAR_22->id = VAR_10++;
 VAR_9++;
 FUNC_6(&VAR_15, &VAR_22->coalitions);

 FUNC_0(FUNC_1(VAR_2, VAR_7),
  VAR_22->id, VAR_22->type);
 FUNC_9(&VAR_14);

 FUNC_4("id:%llu, type:%s", VAR_22->id, FUNC_5(VAR_22->type));

 *VAR_20 = VAR_22;
 return VAR_6;
}
