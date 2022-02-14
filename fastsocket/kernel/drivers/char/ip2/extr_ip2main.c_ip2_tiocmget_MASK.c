
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_t ;
struct tty_struct {size_t index; } ;
struct file {int dummy; } ;
typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {int dataSetOut; int dataSetIn; int dss_now_wait; int pMyBord; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int *) ;
 int VAR_19 ;
 int FUNC_1 (int ,TYPE_1__*,int,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_20, struct file *VAR_21)
{
 i2ChanStrPtr VAR_22 = VAR_1[VAR_20->index];




 if (VAR_22 == ((void*)0))
  return -VAR_3;
 return ((VAR_22->dataSetOut & VAR_9) ? VAR_18 : 0)
       | ((VAR_22->dataSetOut & VAR_7) ? VAR_16 : 0)
       | ((VAR_22->dataSetIn & VAR_5) ? VAR_13 : 0)
       | ((VAR_22->dataSetIn & VAR_8) ? VAR_17 : 0)
       | ((VAR_22->dataSetIn & VAR_6) ? VAR_15 : 0)
       | ((VAR_22->dataSetIn & VAR_4) ? VAR_14 : 0);
}
