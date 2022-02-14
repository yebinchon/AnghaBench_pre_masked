
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dump_header {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct bnx2x *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2 *= 4;
 VAR_2 += sizeof(struct dump_header);

 return VAR_2;
}
