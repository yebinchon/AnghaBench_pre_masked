
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,struct ni_gpct*,int ) ;
 int FUNC_2 (struct ni_gpct*,int *,int *,int *,int *) ;
 int FUNC_3 (struct ni_gpct*,int ) ;
 struct ni_gpct* FUNC_4 (struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 int VAR_3;

 struct ni_gpct *VAR_4 = FUNC_4(VAR_2);


 VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1,
        "no dma channel available for use by counter");
  return VAR_3;
 }
 FUNC_2(VAR_4, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 VAR_3 = FUNC_3(VAR_4, VAR_2->async);

 return VAR_3;
}
