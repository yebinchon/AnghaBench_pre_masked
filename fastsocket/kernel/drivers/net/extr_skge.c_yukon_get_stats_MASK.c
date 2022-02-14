
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct TYPE_3__ {int gma_offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct skge_hw*,int,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct skge_port *VAR_5, u64 *VAR_6)
{
 struct skge_hw *VAR_7 = VAR_5->hw;
 int VAR_8 = VAR_5->port;
 int VAR_9;

 VAR_6[0] = (u64) FUNC_1(VAR_7, VAR_8, VAR_2) << 32
  | FUNC_1(VAR_7, VAR_8, VAR_3);
 VAR_6[1] = (u64) FUNC_1(VAR_7, VAR_8, VAR_0) << 32
  | FUNC_1(VAR_7, VAR_8, VAR_1);

 for (VAR_9 = 2; VAR_9 < FUNC_0(VAR_4); VAR_9++)
  VAR_6[VAR_9] = FUNC_1(VAR_7, VAR_8,
       VAR_4[VAR_9].gma_offset);
}
