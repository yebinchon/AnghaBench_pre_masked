
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in_device*,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline __be32 FUNC_4(struct net_device *VAR_1, __be32 VAR_2, __be32 VAR_3)
{
 struct in_device *VAR_4;
 __be32 VAR_5 = 0;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_1);

 if (VAR_4)
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3, VAR_0);

 FUNC_3();
 return VAR_5;
}
