
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* stc_writew ) (struct comedi_device*,int,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct comedi_device*,int,int) ;
 int FUNC_1 (struct comedi_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1, uint32_t VAR_2, int VAR_3)
{
 VAR_0->stc_writew(VAR_1, VAR_2 >> 16, VAR_3);
 VAR_0->stc_writew(VAR_1, VAR_2 & 0xffff, VAR_3 + 1);
}
