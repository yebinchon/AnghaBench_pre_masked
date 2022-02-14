
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fst_port_info {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct fst_port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct fst_port_info*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3)
{
 int VAR_4;
 struct fst_port_info *VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (!FUNC_4(VAR_2))
          return -VAR_0;

 if (VAR_5->mode != VAR_1) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_1(VAR_5);
 FUNC_3(VAR_3);
 return 0;
}
