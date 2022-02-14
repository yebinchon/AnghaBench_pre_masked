
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zs_port {int* regs; unsigned int mctrl; TYPE_1__* scc; } ;
struct TYPE_2__ {struct zs_port* zport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_0 (struct zs_port*,struct zs_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct zs_port *VAR_8)
{
 struct zs_port *VAR_9 = &VAR_8->scc->zport[VAR_7];
 unsigned int VAR_10, VAR_11, VAR_12;
 u8 VAR_13, VAR_14;

 if (VAR_8 == VAR_9)
  return 0;

 VAR_13 = VAR_9->regs[15];
 VAR_14 = VAR_8->regs[15];

 VAR_10 = ((VAR_14 & VAR_0) ? VAR_4 : 0) |
  ((VAR_14 & VAR_1) ? VAR_3 : 0) |
  ((VAR_13 & VAR_1) ? VAR_6 : 0) |
  ((VAR_13 & VAR_2) ? VAR_5 : 0);

 VAR_11 = VAR_8->mctrl;
 if (VAR_10) {
  VAR_11 &= ~VAR_10;
  VAR_11 |= FUNC_0(VAR_9, VAR_8) & VAR_10;
 }

 VAR_12 = VAR_11 ^ VAR_8->mctrl;
 if (VAR_12)
  VAR_8->mctrl = VAR_11;

 return VAR_12;
}
