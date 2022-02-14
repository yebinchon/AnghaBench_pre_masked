
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_set {scalar_t__ stats; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct raid_set *VAR_1)
{
 unsigned VAR_2 = VAR_0;

 while (VAR_2--)
  FUNC_0(VAR_1->stats + VAR_2, 0);
}
