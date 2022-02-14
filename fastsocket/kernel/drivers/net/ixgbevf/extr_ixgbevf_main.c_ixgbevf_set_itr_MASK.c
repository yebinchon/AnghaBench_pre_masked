
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int itr; } ;
struct ixgbevf_q_vector {int itr; TYPE_1__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct ixgbevf_q_vector*,TYPE_1__*) ;
 int FUNC_1 (struct ixgbevf_q_vector*) ;


 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_q_vector *VAR_3)
{
 u32 VAR_4 = VAR_3->itr;
 u8 VAR_5;

 FUNC_0(VAR_3, &VAR_3->tx);
 FUNC_0(VAR_3, &VAR_3->rx);

 VAR_5 = FUNC_2(VAR_3->rx.itr, VAR_3->tx.itr);

 switch (VAR_5) {

 case 128:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = VAR_1;
  break;
 case 130:
 default:
  VAR_4 = VAR_2;
  break;
 }

 if (VAR_4 != VAR_3->itr) {

  VAR_4 = (10 * VAR_4 * VAR_3->itr) /
     ((9 * VAR_4) + VAR_3->itr);


  VAR_3->itr = VAR_4;

  FUNC_1(VAR_3);
 }
}
