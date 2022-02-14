
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; size_t type; int lock; int fifosize; int iotype; } ;
struct uart_sunsu_port {scalar_t__ su_type; void* type_probed; TYPE_1__ port; } ;
struct TYPE_4__ {int dfl_xmit_fifo_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned char VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct uart_sunsu_port*,int ) ;
 int FUNC_2 (struct uart_sunsu_port*,int ) ;
 int FUNC_3 (struct uart_sunsu_port*,int ,unsigned char) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_2__* VAR_29 ;

__attribute__((used)) static void FUNC_6(struct uart_sunsu_port *VAR_30)
{
 unsigned char VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 unsigned char VAR_36, VAR_37;
 unsigned long VAR_38;

 if (VAR_30->su_type == VAR_9)
  return;

 VAR_30->type_probed = VAR_8;
 VAR_30->port.iotype = VAR_28;

 FUNC_4(&VAR_30->port.lock, VAR_38);

 if (!(VAR_30->port.flags & VAR_26)) {
  VAR_33 = FUNC_2(VAR_30, VAR_16);
  FUNC_3(VAR_30, VAR_16, 0);



  VAR_34 = FUNC_2(VAR_30, VAR_16);
  FUNC_3(VAR_30, VAR_16, 0x0f);



  VAR_35 = FUNC_2(VAR_30, VAR_16);
  FUNC_3(VAR_30, VAR_16, VAR_33);
  if (VAR_34 != 0 || VAR_35 != 0x0F)
   goto out;
 }

 VAR_37 = FUNC_1(VAR_30, VAR_20);
 VAR_36 = FUNC_1(VAR_30, VAR_18);
 if (!(VAR_30->port.flags & VAR_27)) {
  FUNC_3(VAR_30, VAR_20, VAR_21 | 0x0A);
  VAR_31 = FUNC_2(VAR_30, VAR_22) & 0xF0;
  FUNC_3(VAR_30, VAR_20, VAR_37);
  if (VAR_31 != 0x90)
   goto out;
 }
 FUNC_3(VAR_30, VAR_18, 0xBF);
 FUNC_3(VAR_30, VAR_10, 0);
 FUNC_3(VAR_30, VAR_18, 0);
 FUNC_3(VAR_30, VAR_11, VAR_15);
 VAR_33 = FUNC_1(VAR_30, VAR_17) >> 6;
 switch (VAR_33) {
  case 0:
   VAR_30->port.type = VAR_0;
   break;
  case 1:
   VAR_30->port.type = VAR_8;
   break;
  case 2:
   VAR_30->port.type = VAR_1;
   break;
  case 3:
   VAR_30->port.type = VAR_2;
   break;
 }
 if (VAR_30->port.type == VAR_2) {

  FUNC_3(VAR_30, VAR_18, VAR_19);
  if (FUNC_1(VAR_30, VAR_10) == 0) {
   VAR_30->port.type = VAR_3;
  } else {
   FUNC_3(VAR_30, VAR_18, 0xBF);
   if (FUNC_1(VAR_30, VAR_10) == 0)
    VAR_30->port.type = VAR_4;
  }
 }
 if (VAR_30->port.type == VAR_2) {

  FUNC_3(VAR_30, VAR_18, VAR_36 | VAR_19);
  FUNC_3(VAR_30, VAR_11,
       VAR_15 | VAR_12);
  VAR_33 = FUNC_1(VAR_30, VAR_17) >> 5;
  if (VAR_33 == 7) {






    FUNC_3(VAR_30, VAR_11, VAR_15);
   FUNC_3(VAR_30, VAR_18, 0);
   FUNC_3(VAR_30, VAR_11,
        VAR_15 | VAR_12);
   VAR_33 = FUNC_1(VAR_30, VAR_17) >> 5;
   if (VAR_33 == 6)
    VAR_30->port.type = VAR_5;
  }
  FUNC_3(VAR_30, VAR_11, VAR_15);
 }
 FUNC_3(VAR_30, VAR_18, VAR_36);
 if (VAR_30->port.type == VAR_0) {
  VAR_33 = FUNC_1(VAR_30, VAR_25);
  FUNC_3(VAR_30, VAR_25, 0xa5);
  VAR_31 = FUNC_1(VAR_30, VAR_25);
  FUNC_3(VAR_30, VAR_25, 0x5a);
  VAR_32 = FUNC_1(VAR_30, VAR_25);
  FUNC_3(VAR_30, VAR_25, VAR_33);

  if ((VAR_31 != 0xa5) || (VAR_32 != 0x5a))
   VAR_30->port.type = VAR_6;
 }

 VAR_30->port.fifosize = VAR_29[VAR_30->port.type].dfl_xmit_fifo_size;

 if (VAR_30->port.type == VAR_8)
  goto out;
 VAR_30->type_probed = VAR_30->port.type;
 FUNC_3(VAR_30, VAR_20, VAR_37);
 FUNC_3(VAR_30, VAR_11, (VAR_15 |
         VAR_13 |
         VAR_14));
 FUNC_3(VAR_30, VAR_11, 0);
 (void)FUNC_1(VAR_30, VAR_24);
 FUNC_3(VAR_30, VAR_16, 0);

out:
 FUNC_5(&VAR_30->port.lock, VAR_38);
}
