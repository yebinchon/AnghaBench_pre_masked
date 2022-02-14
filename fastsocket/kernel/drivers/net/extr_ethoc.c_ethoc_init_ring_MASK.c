
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethoc_bd {int stat; int addr; } ;
struct ethoc {int num_tx; int num_rx; int membase; scalar_t__ cur_rx; scalar_t__ dty_tx; scalar_t__ cur_tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethoc*,int,struct ethoc_bd*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ethoc *VAR_7)
{
 struct ethoc_bd VAR_8;
 int VAR_9;

 VAR_7->cur_tx = 0;
 VAR_7->dty_tx = 0;
 VAR_7->cur_rx = 0;


 VAR_8.addr = FUNC_1(VAR_7->membase);
 VAR_8.stat = VAR_5 | VAR_4;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_tx; VAR_9++) {
  if (VAR_9 == VAR_7->num_tx - 1)
   VAR_8.stat |= VAR_6;

  FUNC_0(VAR_7, VAR_9, &VAR_8);
  VAR_8.addr += VAR_0;
 }

 VAR_8.stat = VAR_1 | VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_rx; VAR_9++) {
  if (VAR_9 == VAR_7->num_rx - 1)
   VAR_8.stat |= VAR_3;

  FUNC_0(VAR_7, VAR_7->num_tx + VAR_9, &VAR_8);
  VAR_8.addr += VAR_0;
 }

 return 0;
}
