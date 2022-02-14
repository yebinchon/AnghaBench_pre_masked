
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_dif_tuple {int app_tag; int ref_tag; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct sd_dif_tuple *VAR_3 = VAR_0;
 u8 *VAR_4 = VAR_1;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0 ; VAR_5 < VAR_2 ; VAR_5++, VAR_6 += 2, VAR_3++) {
  VAR_4[VAR_6] = (VAR_3->app_tag & 0xff00) >> 8;
  VAR_4[VAR_6+1] = VAR_3->app_tag & 0xff;
  VAR_4[VAR_6+2] = (VAR_3->ref_tag & 0xff000000) >> 24;
  VAR_4[VAR_6+3] = (VAR_3->ref_tag & 0xff0000) >> 16;
  VAR_4[VAR_6+4] = (VAR_3->ref_tag & 0xff00) >> 8;
  VAR_4[VAR_6+5] = VAR_3->ref_tag & 0xff;
  FUNC_0(VAR_3->app_tag == 0xffff || VAR_3->ref_tag == 0xffffffff);
 }
}
