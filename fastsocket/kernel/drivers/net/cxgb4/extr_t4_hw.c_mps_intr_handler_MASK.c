
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct adapter {int dummy; } ;



 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;

 int VAR_10 ;

 int VAR_11 ;


 int VAR_12 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ,struct intr_info const*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_13)
{
 static const struct intr_info VAR_14[] = {
  { 0xffffff, "MPS Rx parity error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_15[] = {
  { 130, "MPS Tx TP FIFO parity error", -1, 1 },
  { 133, "MPS Tx NC-SI FIFO parity error", -1, 1 },
  { 129, "MPS Tx data FIFO parity error", -1, 1 },
  { 128, "MPS Tx desc FIFO parity error", -1, 1 },
  { 140, "MPS Tx underflow", -1, 1 },
  { 131, "MPS Tx SOP/EOP error", -1, 1 },
  { 138, "MPS Tx framing error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_16[] = {
  { 139, "MPS TRC filter parity error", -1, 1 },
  { 132, "MPS TRC packet FIFO parity error", -1, 1 },
  { 134, "MPS TRC misc parity error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_17[] = {
  { 0x1fffff, "MPS statistics SRAM parity error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_18[] = {
  { 0xfffff, "MPS statistics Tx FIFO parity error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_19[] = {
  { 0xffffff, "MPS statistics Rx FIFO parity error", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_20[] = {
  { 136, "MPS match SRAM parity error", -1, 1 },
  { 135, "MPS match TCAM parity error", -1, 1 },
  { 137, "MPS hash SRAM parity error", -1, 1 },
  { 0 }
 };

 int VAR_21;

 VAR_21 = FUNC_1(VAR_13, VAR_3,
        VAR_14) +
       FUNC_1(VAR_13, VAR_8,
        VAR_15) +
       FUNC_1(VAR_13, VAR_7,
        VAR_16) +
       FUNC_1(VAR_13, VAR_5,
        VAR_17) +
       FUNC_1(VAR_13, VAR_6,
        VAR_18) +
       FUNC_1(VAR_13, VAR_4,
        VAR_19) +
       FUNC_1(VAR_13, VAR_1,
        VAR_20);

 FUNC_3(VAR_13, VAR_2, VAR_0 | VAR_11 |
       VAR_9 | VAR_12 | VAR_10);
 FUNC_2(VAR_13, VAR_2);
 if (VAR_21)
  FUNC_0(VAR_13);
}
