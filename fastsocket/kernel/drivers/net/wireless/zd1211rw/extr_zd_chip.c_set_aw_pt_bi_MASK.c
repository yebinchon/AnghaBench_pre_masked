
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_ioreq32 {int value; int addr; } ;
struct zd_chip {int dummy; } ;
struct aw_pt_bi {int beacon_interval; int pre_tbtt; int atim_wnd_period; } ;


 int FUNC_0 (struct zd_ioreq32*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct zd_chip*,struct zd_ioreq32*,int ) ;

__attribute__((used)) static int FUNC_2(struct zd_chip *VAR_3, struct aw_pt_bi *VAR_4)
{
 struct zd_ioreq32 VAR_5[3];
 u16 VAR_6 = VAR_4->beacon_interval & 0xffff;

 if (VAR_6 <= 5)
  VAR_6 = 5;
 if (VAR_4->pre_tbtt < 4 || VAR_4->pre_tbtt >= VAR_6)
  VAR_4->pre_tbtt = VAR_6 - 1;
 if (VAR_4->atim_wnd_period >= VAR_4->pre_tbtt)
  VAR_4->atim_wnd_period = VAR_4->pre_tbtt - 1;

 VAR_5[0].addr = VAR_0;
 VAR_5[0].value = VAR_4->atim_wnd_period;
 VAR_5[1].addr = VAR_2;
 VAR_5[1].value = VAR_4->pre_tbtt;
 VAR_5[2].addr = VAR_1;
 VAR_5[2].value = (VAR_4->beacon_interval & ~0xffff) | VAR_6;

 return FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_5));
}
