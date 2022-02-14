
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct TYPE_3__ {int xmac_offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct skge_hw*,int,int ) ;
 int FUNC_4 (struct skge_hw*,int,int ) ;
 int FUNC_5 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct skge_port *VAR_10, u64 *VAR_11)
{
 struct skge_hw *VAR_12 = VAR_10->hw;
 int VAR_13 = VAR_10->port;
 int VAR_14;
 unsigned long VAR_15 = VAR_8 + VAR_0;

 FUNC_5(VAR_12, VAR_13,
   VAR_5, VAR_4 | VAR_3);


 while (FUNC_3(VAR_12, VAR_13, VAR_5)
        & (VAR_4 | VAR_3)) {
  if (FUNC_1(VAR_8, VAR_15))
   break;
  FUNC_2(10);
 }


 VAR_11[0] = (u64) FUNC_4(VAR_12, VAR_13, VAR_6) << 32
  | FUNC_4(VAR_12, VAR_13, VAR_7);
 VAR_11[1] = (u64) FUNC_4(VAR_12, VAR_13, VAR_1) << 32
  | FUNC_4(VAR_12, VAR_13, VAR_2);

 for (VAR_14 = 2; VAR_14 < FUNC_0(VAR_9); VAR_14++)
  VAR_11[VAR_14] = FUNC_4(VAR_12, VAR_13, VAR_9[VAR_14].xmac_offset);
}
