
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, u32 VAR_6)
{
 struct enic *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6 && !FUNC_0(VAR_7, VAR_4))
  return -VAR_0;

 if (VAR_6)
  VAR_5->features |=
   VAR_1 | VAR_2 | VAR_3;
 else
  VAR_5->features &=
   ~(VAR_1 | VAR_2 | VAR_3);

 return 0;
}
