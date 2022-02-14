
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_fifo_info {unsigned int num_segments; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {struct hw_fifo_info* ai_fifo; } ;


 unsigned int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 const struct hw_fifo_info *const VAR_4 = FUNC_1(VAR_1)->ai_fifo;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = VAR_2[1];

 if (VAR_6) {
  VAR_3 =
      VAR_6 * VAR_4->num_segments / VAR_0;

  VAR_7 = FUNC_2(VAR_1, VAR_3);
  if (VAR_7 < 0)
   return VAR_7;

 }

 VAR_5 = FUNC_0(VAR_1) / VAR_4->num_segments * VAR_0;

 VAR_2[1] = VAR_5;

 return 2;
}
