
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* stc_readw ) (struct comedi_device*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static uint32_t FUNC_2(struct comedi_device *VAR_1, int VAR_2)
{
 uint32_t VAR_3;
 VAR_3 = VAR_0->stc_readw(VAR_1, VAR_2) << 16;
 VAR_3 |= VAR_0->stc_readw(VAR_1, VAR_2 + 1);
 return VAR_3;
}
