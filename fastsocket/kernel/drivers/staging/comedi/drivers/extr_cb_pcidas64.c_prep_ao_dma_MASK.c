
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int write_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_2__ {unsigned int ao_count; scalar_t__ main_iobase; int * ao_bounce_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ,int *,unsigned int) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd const*) ;
 unsigned int FUNC_3 (struct comedi_device*,struct comedi_cmd const*) ;
 TYPE_1__* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7, const struct comedi_cmd *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;



 FUNC_5(0, FUNC_4(VAR_7)->main_iobase + VAR_0);
 FUNC_5(0, FUNC_4(VAR_7)->main_iobase + VAR_1);

 VAR_9 = (VAR_3 / 2) * VAR_6;
 if (VAR_8->stop_src == VAR_5 &&
     VAR_9 / VAR_6 > FUNC_4(VAR_7)->ao_count)
  VAR_9 = FUNC_4(VAR_7)->ao_count * VAR_6;
 VAR_9 = FUNC_0(VAR_7->write_subdev,
            FUNC_4(VAR_7)->ao_bounce_buffer,
            VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_9 / VAR_6; VAR_10++) {
  FUNC_5(FUNC_4(VAR_7)->ao_bounce_buffer[VAR_10],
         FUNC_4(VAR_7)->main_iobase + VAR_2);
 }
 FUNC_4(VAR_7)->ao_count -= VAR_9 / VAR_6;
 if (VAR_8->stop_src == VAR_5 && FUNC_4(VAR_7)->ao_count == 0)
  return 0;
 VAR_9 = FUNC_3(VAR_7, VAR_8);
 if (VAR_9 == 0)
  return -1;
 if (VAR_9 >= VAR_4) ;
 FUNC_2(VAR_7, VAR_8);

 FUNC_1(VAR_7, 0);

 return 0;
}
