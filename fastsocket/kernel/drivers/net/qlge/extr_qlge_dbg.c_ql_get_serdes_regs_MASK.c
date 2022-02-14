
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_mpi_coredump {int* serdes2_xaui_an; int* serdes_xaui_an; int* serdes2_xaui_hss_pcs; int* serdes_xaui_hss_pcs; int* serdes2_xfi_an; int* serdes_xfi_an; int* serdes2_xfi_train; int* serdes_xfi_train; int* serdes2_xfi_hss_pcs; int* serdes_xfi_hss_pcs; int* serdes2_xfi_hss_tx; int* serdes_xfi_hss_tx; int* serdes2_xfi_hss_rx; int* serdes_xfi_hss_rx; int* serdes2_xfi_hss_pll; int* serdes_xfi_hss_pll; } ;
struct ql_adapter {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ql_adapter*,unsigned int,int*,int*,unsigned int,unsigned int) ;
 int FUNC_1 (struct ql_adapter*,int ,int*) ;
 int FUNC_2 (struct ql_adapter*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_5,
    struct ql_mpi_coredump *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 u32 *VAR_13, VAR_14;
 u32 *VAR_15;

 VAR_8 = VAR_9 = 0;
 VAR_10 = VAR_11 = 1;


 if (VAR_5->func & 1) {

  VAR_7 = FUNC_1(VAR_5,
    VAR_4, &VAR_14);
  if (VAR_7)
   VAR_14 = VAR_1;
  if ((VAR_14 & VAR_1) ==
     VAR_1)
   VAR_11 = 0;

  VAR_7 = FUNC_2(VAR_5,
    VAR_4, &VAR_14);
  if (VAR_7)
   VAR_14 = VAR_1;

  if ((VAR_14 & VAR_1) ==
     VAR_1)
   VAR_10 = 0;
 } else {

  VAR_7 = FUNC_1(VAR_5,
    VAR_4, &VAR_14);
  if (VAR_7)
   VAR_14 = VAR_1;
  if ((VAR_14 & VAR_1) ==
     VAR_1)
   VAR_11 = 0;

  VAR_7 = FUNC_2(VAR_5,
    VAR_4, &VAR_14);
  if (VAR_7)
   VAR_14 = VAR_1;
  if ((VAR_14 & VAR_1) ==
     VAR_1)
   VAR_10 = 0;
 }





 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_14);
 if (VAR_7)
  VAR_14 = 0;

 if ((VAR_14 & VAR_2) ==
     VAR_2) {

  if (VAR_5->func & 1)

   VAR_9 = 1;
  else
   VAR_8 = 1;
 }
 if ((VAR_14 & VAR_3) ==
     VAR_3) {

  if (VAR_5->func & 1)

   VAR_8 = 1;
  else
   VAR_9 = 1;
 }


 if (VAR_5->func & 1) {

  VAR_13 = VAR_6->serdes2_xaui_an;
  VAR_15 = VAR_6->serdes_xaui_an;
 } else {

  VAR_13 = VAR_6->serdes_xaui_an;
  VAR_15 = VAR_6->serdes2_xaui_an;
 }

 for (VAR_12 = 0; VAR_12 <= 0x000000034; VAR_12 += 4, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_10, VAR_11);


 if (VAR_5->func & 1) {
  VAR_13 =
   VAR_6->serdes2_xaui_hss_pcs;
  VAR_15 =
   VAR_6->serdes_xaui_hss_pcs;
 } else {
  VAR_13 =
   VAR_6->serdes_xaui_hss_pcs;
  VAR_15 =
   VAR_6->serdes2_xaui_hss_pcs;
 }

 for (VAR_12 = 0x800; VAR_12 <= 0x880; VAR_12 += 4, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_10, VAR_11);


 if (VAR_5->func & 1) {
  VAR_13 = VAR_6->serdes2_xfi_an;
  VAR_15 = VAR_6->serdes_xfi_an;
 } else {
  VAR_13 = VAR_6->serdes_xfi_an;
  VAR_15 = VAR_6->serdes2_xfi_an;
 }

 for (VAR_12 = 0x1000; VAR_12 <= 0x1034; VAR_12 += 4, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);


 if (VAR_5->func & 1) {
  VAR_13 = VAR_6->serdes2_xfi_train;
  VAR_15 =
   VAR_6->serdes_xfi_train;
 } else {
  VAR_13 = VAR_6->serdes_xfi_train;
  VAR_15 =
   VAR_6->serdes2_xfi_train;
 }

 for (VAR_12 = 0x1050; VAR_12 <= 0x107c; VAR_12 += 4, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);


 if (VAR_5->func & 1) {
  VAR_13 =
   VAR_6->serdes2_xfi_hss_pcs;
  VAR_15 =
   VAR_6->serdes_xfi_hss_pcs;
 } else {
  VAR_13 =
   VAR_6->serdes_xfi_hss_pcs;
  VAR_15 =
   VAR_6->serdes2_xfi_hss_pcs;
 }

 for (VAR_12 = 0x1800; VAR_12 <= 0x1838; VAR_12 += 4, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);


 if (VAR_5->func & 1) {
  VAR_13 =
   VAR_6->serdes2_xfi_hss_tx;
  VAR_15 =
   VAR_6->serdes_xfi_hss_tx;
 } else {
  VAR_13 = VAR_6->serdes_xfi_hss_tx;
  VAR_15 =
   VAR_6->serdes2_xfi_hss_tx;
 }
 for (VAR_12 = 0x1c00; VAR_12 <= 0x1c1f; VAR_12++, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);


 if (VAR_5->func & 1) {
  VAR_13 =
   VAR_6->serdes2_xfi_hss_rx;
  VAR_15 =
   VAR_6->serdes_xfi_hss_rx;
 } else {
  VAR_13 = VAR_6->serdes_xfi_hss_rx;
  VAR_15 =
   VAR_6->serdes2_xfi_hss_rx;
 }

 for (VAR_12 = 0x1c40; VAR_12 <= 0x1c5f; VAR_12++, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);



 if (VAR_5->func & 1) {
  VAR_13 =
   VAR_6->serdes2_xfi_hss_pll;
  VAR_15 =
   VAR_6->serdes_xfi_hss_pll;
 } else {
  VAR_13 =
   VAR_6->serdes_xfi_hss_pll;
  VAR_15 =
   VAR_6->serdes2_xfi_hss_pll;
 }
 for (VAR_12 = 0x1e00; VAR_12 <= 0x1e1f; VAR_12++, VAR_13++, VAR_15++)
  FUNC_0(VAR_5, VAR_12, VAR_13, VAR_15,
     VAR_8, VAR_9);
 return 0;
}
