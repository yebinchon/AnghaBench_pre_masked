
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_icount {int rng; int dcd; int dsr; int cts; } ;
struct moschip_port {struct async_icount icount; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct moschip_port *VAR_4, __u8 VAR_5)
{
 struct moschip_port *VAR_6;
 struct async_icount *VAR_7;
 VAR_6 = VAR_4;
 VAR_7 = &VAR_6->icount;
 if (VAR_5 &
     (VAR_1 | VAR_2 | VAR_3 |
      VAR_0)) {
  VAR_7 = &VAR_6->icount;


  if (VAR_5 & VAR_1) {
   VAR_7->cts++;
   FUNC_0();
  }
  if (VAR_5 & VAR_2) {
   VAR_7->dsr++;
   FUNC_0();
  }
  if (VAR_5 & VAR_0) {
   VAR_7->dcd++;
   FUNC_0();
  }
  if (VAR_5 & VAR_3) {
   VAR_7->rng++;
   FUNC_0();
  }
 }
}
