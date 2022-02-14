
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int serial_signals; int port_num; TYPE_1__** port_array; } ;
struct TYPE_7__ {int ctrlreg_value; } ;
typedef TYPE_2__ SLMP_INFO ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_3(SLMP_INFO *VAR_5)
{
 unsigned char VAR_6;
 u16 VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_5->serial_signals & VAR_4)
  VAR_6 &= ~VAR_0;
 else
  VAR_6 |= VAR_0;
 FUNC_2(VAR_5, VAR_2, VAR_6);


 VAR_7 = VAR_1 << (VAR_5->port_num*2);
 if (VAR_5->serial_signals & VAR_3)
  VAR_5->port_array[0]->ctrlreg_value &= ~VAR_7;
 else
  VAR_5->port_array[0]->ctrlreg_value |= VAR_7;
 FUNC_1(VAR_5);
}
