
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct enic {unsigned int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct enic*,int,int,int,int,int) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct enic*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct enic* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct enic *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = 1;
 int VAR_9 = (VAR_6->flags & VAR_4) ? 1 : 0;
 int VAR_10 = (VAR_6->flags & VAR_3) ? 1 : 0;
 int VAR_11 = (VAR_6->flags & VAR_5) ||
  FUNC_5(VAR_6) > VAR_1;
 int VAR_12 = (VAR_6->flags & VAR_2) ||
  FUNC_3(VAR_6) > VAR_0;
 unsigned int VAR_13 = VAR_6->flags |
  (VAR_12 ? VAR_2 : 0) |
  (VAR_11 ? VAR_5 : 0);

 if (VAR_7->flags != VAR_13) {
  VAR_7->flags = VAR_13;
  FUNC_0(VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_11, VAR_12);
 }

 if (!VAR_11) {
  FUNC_2(VAR_7);
  if (!VAR_12)
   FUNC_1(VAR_7);
 }
}
