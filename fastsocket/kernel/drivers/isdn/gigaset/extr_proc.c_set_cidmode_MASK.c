
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cardstate {int waiting; int mutex; int waitqueue; int at_state; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct cardstate* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cardstate*,int *,int ,int *,long,int *) ;
 int FUNC_3 (struct cardstate*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,char**,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5, struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 struct cardstate *VAR_9 = FUNC_0(VAR_5);
 long int VAR_10;
 char *VAR_11;

 VAR_10 = FUNC_7(VAR_7, &VAR_11, 0);
 while (*VAR_11)
  if (!FUNC_4(*VAR_11++))
   return -VAR_1;
 if (VAR_10 < 0 || VAR_10 > 1)
   return -VAR_1;

 if (FUNC_5(&VAR_9->mutex))
  return -VAR_3;

 VAR_9->waiting = 1;
 if (!FUNC_2(VAR_9, &VAR_9->at_state, VAR_4,
          ((void*)0), VAR_10, ((void*)0))) {
  VAR_9->waiting = 0;
  FUNC_6(&VAR_9->mutex);
  return -VAR_2;
 }

 FUNC_1(VAR_0, "scheduling PROC_CIDMODE");
 FUNC_3(VAR_9);

 FUNC_8(VAR_9->waitqueue, !VAR_9->waiting);

 FUNC_6(&VAR_9->mutex);

 return VAR_8;
}
