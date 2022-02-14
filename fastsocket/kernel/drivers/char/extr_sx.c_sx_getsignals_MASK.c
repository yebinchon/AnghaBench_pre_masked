
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct sx_port {TYPE_1__ gs; int c_dcd; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int,int,int ,int ,int,int) ;
 int FUNC_1 (struct sx_port*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sx_port *VAR_16)
{
 int VAR_17, VAR_18;

 VAR_18 = FUNC_1(VAR_16, VAR_14);
 VAR_17 = FUNC_1(VAR_16, VAR_13);

 FUNC_0(VAR_6, "getsignals: %d/%d  (%d/%d) "
   "%02x/%02x\n",
   (VAR_18 & VAR_4) != 0, (VAR_18 & VAR_5) != 0,
   VAR_16->c_dcd, FUNC_2(&VAR_16->gs.port),
   FUNC_1(VAR_16, VAR_13),
   FUNC_1(VAR_16, VAR_15));

 return (((VAR_18 & VAR_4) ? VAR_10 : 0) |
  ((VAR_18 & VAR_5) ? VAR_12 : 0) |
  ((VAR_17 & VAR_0) ? VAR_8 : 0) |
  ((VAR_17 & VAR_1) ? VAR_7 : 0) |
  ((VAR_17 & VAR_2) ? VAR_9 : 0) |
  ((VAR_17 & VAR_3) ? VAR_11 : 0));
}
