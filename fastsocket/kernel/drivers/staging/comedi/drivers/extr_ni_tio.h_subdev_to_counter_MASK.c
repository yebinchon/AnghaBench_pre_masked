
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;



__attribute__((used)) static inline struct ni_gpct *FUNC_0(struct comedi_subdevice *VAR_0)
{
 return VAR_0->private;
}
