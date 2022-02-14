
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dscc4_dev_priv {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct dscc4_dev_priv*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct dscc4_dev_priv *VAR_4, struct net_device *VAR_5)
{
 struct {
  int (*action)(struct dscc4_dev_priv *, struct net_device *);
 } *VAR_6, VAR_7[] = {
  { VAR_2 },
  { VAR_0 },
  { VAR_3 },
  { VAR_1 },
  { ((void*)0) }
 };
 int VAR_8 = 0;

 for (VAR_6 = VAR_7; VAR_6->action; VAR_6++) {
  if ((VAR_8 = VAR_6->action(VAR_4, VAR_5)) < 0)
   break;
 }
 return VAR_8;
}
