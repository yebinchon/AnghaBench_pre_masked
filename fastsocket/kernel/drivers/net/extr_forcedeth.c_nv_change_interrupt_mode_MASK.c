
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {scalar_t__ quiet_count; scalar_t__ irqmask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_6, int VAR_7)
{
 struct fe_priv *VAR_8 = FUNC_0(VAR_6);

 if (VAR_5 == VAR_4) {
  if (VAR_7 > VAR_3) {

   VAR_8->quiet_count = 0;
   if (VAR_8->irqmask != VAR_0) {
    VAR_8->irqmask = VAR_0;
    return 1;
   }
  } else {
   if (VAR_8->quiet_count < VAR_2) {
    VAR_8->quiet_count++;
   } else {


    if (VAR_8->irqmask != VAR_1) {
     VAR_8->irqmask = VAR_1;
     return 1;
    }
   }
  }
 }
 return 0;
}
