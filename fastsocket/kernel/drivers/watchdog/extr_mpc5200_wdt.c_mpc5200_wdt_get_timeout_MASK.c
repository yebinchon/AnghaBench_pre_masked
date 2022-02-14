
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc5200_wdt {int count; int ipb_freq; } ;



__attribute__((used)) static int FUNC_0(struct mpc5200_wdt *VAR_0)
{
 return VAR_0->count * 0x10000 / VAR_0->ipb_freq;
}
