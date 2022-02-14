
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dz_port {int dummy; } ;
struct dz_mux {struct dz_port* dport; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dz_port*,int ) ;
 int FUNC_1 (struct dz_mux*) ;
 int FUNC_2 (struct dz_mux*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct dz_mux *VAR_8 = VAR_7;
 struct dz_port *VAR_9 = &VAR_8->dport[0];
 u16 VAR_10;


 VAR_10 = FUNC_0(VAR_9, VAR_0);

 if ((VAR_10 & (VAR_1 | VAR_2)) == (VAR_1 | VAR_2))
  FUNC_1(VAR_8);

 if ((VAR_10 & (VAR_4 | VAR_3)) == (VAR_4 | VAR_3))
  FUNC_2(VAR_8);

 return VAR_5;
}
