
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int poll_table ;
struct TYPE_2__ {scalar_t__ entropy_count; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static unsigned int
FUNC_1(struct file *VAR_9, poll_table * VAR_10)
{
 unsigned int VAR_11;

 FUNC_0(VAR_9, &VAR_5, VAR_10);
 FUNC_0(VAR_9, &VAR_7, VAR_10);
 VAR_11 = 0;
 if (VAR_4.entropy_count >= VAR_6)
  VAR_11 |= VAR_0 | VAR_2;
 if (VAR_4.entropy_count < VAR_8)
  VAR_11 |= VAR_1 | VAR_3;
 return VAR_11;
}
