
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int* vc_palette; } ;
struct TYPE_2__ {int vgabase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_4, unsigned char *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_0(VAR_3.vgabase, VAR_2, 0xff);
 for (VAR_6 = VAR_7 = 0; VAR_6 < 16; VAR_6++) {
  FUNC_0(VAR_3.vgabase, VAR_1, VAR_5[VAR_6]);
  FUNC_0(VAR_3.vgabase, VAR_0, VAR_4->vc_palette[VAR_7++] >> 2);
  FUNC_0(VAR_3.vgabase, VAR_0, VAR_4->vc_palette[VAR_7++] >> 2);
  FUNC_0(VAR_3.vgabase, VAR_0, VAR_4->vc_palette[VAR_7++] >> 2);
 }
}
