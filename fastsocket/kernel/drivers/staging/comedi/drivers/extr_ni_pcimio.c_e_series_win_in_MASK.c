
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int window_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static uint16_t FUNC_4(struct comedi_device *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 uint16_t VAR_6;

 FUNC_2(&VAR_2->window_lock, VAR_5);
 FUNC_1(VAR_4, VAR_0);
 VAR_6 = FUNC_0(VAR_1);
 FUNC_3(&VAR_2->window_lock, VAR_5);

 return VAR_6;
}
