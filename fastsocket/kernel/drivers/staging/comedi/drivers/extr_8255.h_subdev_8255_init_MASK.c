
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int type; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline int FUNC_1(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2, void *VAR_3,
       unsigned long VAR_4)
{
 FUNC_0("8255 support not configured -- disabling subdevice\n");

 VAR_2->type = VAR_0;

 return 0;
}
