
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {int lock; int freq; TYPE_1__ board; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7 (struct cx88_core *VAR_4,
    struct v4l2_frequency *VAR_5)
{
 if (FUNC_6(VAR_1 == VAR_4->board.tuner_type))
  return -VAR_0;
 if (FUNC_6(VAR_5->tuner != 0))
  return -VAR_0;

 FUNC_4(&VAR_4->lock);
 VAR_4->freq = VAR_5->frequency;
 FUNC_1(VAR_4);
 FUNC_0(VAR_4, VAR_3, VAR_2, VAR_5);


 FUNC_3 (10);
 FUNC_2(VAR_4);

 FUNC_5(&VAR_4->lock);

 return 0;
}
