
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int status; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ipw2100_priv *VAR_3)
{
 if (VAR_3->status & VAR_2)
  return;
 VAR_3->status |= VAR_2;
 FUNC_0(VAR_3->net_dev, VAR_1, VAR_0);
}
