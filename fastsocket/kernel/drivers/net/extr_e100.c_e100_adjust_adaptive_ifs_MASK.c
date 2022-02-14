
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nic {scalar_t__ adaptive_ifs; int tx_frames; int tx_collisions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nic*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nic *VAR_3, int VAR_4, int VAR_5)
{



 if (VAR_5 == VAR_0) {
  u32 VAR_6 = VAR_3->adaptive_ifs;
  u32 VAR_7 = (VAR_4 == VAR_1) ? 1000 : 100;

  if ((VAR_3->tx_frames / 32 < VAR_3->tx_collisions) &&
     (VAR_3->tx_frames > VAR_7)) {
   if (VAR_3->adaptive_ifs < 60)
    VAR_3->adaptive_ifs += 5;
  } else if (VAR_3->tx_frames < VAR_7) {
   if (VAR_3->adaptive_ifs >= 5)
    VAR_3->adaptive_ifs -= 5;
  }
  if (VAR_3->adaptive_ifs != VAR_6)
   FUNC_0(VAR_3, ((void*)0), VAR_2);
 }
}
