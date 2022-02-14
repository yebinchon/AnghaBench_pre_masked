
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* cur_ioport; } ;
struct TYPE_4__ {scalar_t__ minimum; } ;
struct TYPE_5__ {TYPE_1__ io1; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static u8 FUNC_4(u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;

 FUNC_3(FUNC_1(VAR_1.cur_ioport->io1.minimum + 4) & 2, VAR_0);
 FUNC_2(VAR_2, VAR_1.cur_ioport->io1.minimum + 4);
 FUNC_3(FUNC_1(VAR_1.cur_ioport->io1.minimum + 4) & 2, VAR_0);
 FUNC_2(VAR_3, VAR_1.cur_ioport->io1.minimum);
 FUNC_3(FUNC_1(VAR_1.cur_ioport->io1.minimum + 4) & 2, VAR_0);
 FUNC_2(VAR_4, VAR_1.cur_ioport->io1.minimum);
 VAR_5 = FUNC_1(VAR_1.cur_ioport->io1.minimum);
 FUNC_0("sony_pic_call3(0x%.2x - 0x%.2x - 0x%.2x): 0x%.4x\n",
   VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
