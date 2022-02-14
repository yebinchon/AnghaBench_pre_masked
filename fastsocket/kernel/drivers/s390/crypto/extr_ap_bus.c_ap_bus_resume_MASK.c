
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct ap_device {int lock; int qid; } ;
struct TYPE_4__ {scalar_t__ expires; scalar_t__ data; int function; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 () ;
 int VAR_11 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct ap_device* FUNC_17 (struct device*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_18(struct device *VAR_14)
{
 int VAR_15 = 0;
 struct ap_device *VAR_16 = FUNC_17(VAR_14);

 if (VAR_8) {
  VAR_8 = 0;
  if (!FUNC_4())
   VAR_7 = ((void*)0);
  FUNC_6();
  if (!VAR_13) {
   VAR_6 = -1;
   FUNC_8();
  }
  FUNC_11(&VAR_4);
  VAR_4.function = VAR_3;
  VAR_4.data = 0;
  VAR_4.expires = VAR_12 + VAR_2 * VAR_1;
  FUNC_3(&VAR_4);
  VAR_11 = FUNC_10("kapwork");
  if (!VAR_11)
   return -VAR_0;
  FUNC_15(&VAR_9);
  if (!FUNC_9())
   FUNC_7();
  else
   FUNC_16(&VAR_9);
  if (VAR_10)
   VAR_15 = FUNC_5();
 }
 if (FUNC_2(VAR_16->qid) != VAR_6) {
  FUNC_13(&VAR_16->lock);
  VAR_16->qid = FUNC_0(FUNC_1(VAR_16->qid),
           VAR_6);
  FUNC_14(&VAR_16->lock);
 }
 FUNC_12(VAR_11, &VAR_5);

 return VAR_15;
}
