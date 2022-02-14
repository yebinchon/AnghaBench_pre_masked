
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp2_target {unsigned int mgt_orb_timeout; int bus_id; } ;


 unsigned int FUNC_0 (unsigned int,int,int) ;
 int FUNC_1 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct sbp2_target *VAR_0)
{
 unsigned int VAR_1 = VAR_0->mgt_orb_timeout;

 if (VAR_1 > 40000)
  FUNC_1("%s: %ds mgt_ORB_timeout limited to 40s\n",
     VAR_0->bus_id, VAR_1 / 1000);

 VAR_0->mgt_orb_timeout = FUNC_0(VAR_1, 5000, 40000);
}
