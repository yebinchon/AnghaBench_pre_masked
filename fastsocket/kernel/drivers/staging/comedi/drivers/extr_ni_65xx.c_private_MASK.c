
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_65xx_private {int dummy; } ;
struct comedi_device {struct ni_65xx_private* private; } ;



__attribute__((used)) static inline struct ni_65xx_private *FUNC_0(struct comedi_device *VAR_0)
{
 return VAR_0->private;
}
