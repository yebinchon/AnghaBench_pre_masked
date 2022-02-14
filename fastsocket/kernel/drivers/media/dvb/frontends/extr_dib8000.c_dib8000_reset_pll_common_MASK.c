
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dibx000_bandwidth_config {int ifreq; int internal; int sad_cfg; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int,int ) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib8000_state *VAR_0, const struct dibx000_bandwidth_config *VAR_1)
{
 FUNC_1("ifreq: %d %x, inversion: %d", VAR_1->ifreq, VAR_1->ifreq, VAR_1->ifreq >> 25);
 FUNC_0(VAR_0, 23, (u16) (((VAR_1->internal * 1000) >> 16) & 0xffff));
 FUNC_0(VAR_0, 24, (u16) ((VAR_1->internal * 1000) & 0xffff));
 FUNC_0(VAR_0, 27, (u16) ((VAR_1->ifreq >> 16) & 0x01ff));
 FUNC_0(VAR_0, 28, (u16) (VAR_1->ifreq & 0xffff));
 FUNC_0(VAR_0, 26, (u16) ((VAR_1->ifreq >> 25) & 0x0003));

 FUNC_0(VAR_0, 922, VAR_1->sad_cfg);
}
