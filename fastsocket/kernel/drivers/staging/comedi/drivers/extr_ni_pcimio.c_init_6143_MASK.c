
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int ai_fifo_depth; } ;
struct TYPE_3__ {int ai_calib_source; scalar_t__ ai_calib_source_enabled; int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_9)
{

 VAR_8->stc_writew(VAR_9, 0, VAR_4);


 FUNC_0(0x00, VAR_5);
 FUNC_0(0x80, VAR_6);
 FUNC_0(0x00, VAR_3);

 FUNC_1(VAR_7.ai_fifo_depth / 2, VAR_0);


 VAR_8->ai_calib_source_enabled = 0;
 FUNC_2(VAR_8->ai_calib_source | VAR_2,
    VAR_1);
 FUNC_2(VAR_8->ai_calib_source, VAR_1);
}
