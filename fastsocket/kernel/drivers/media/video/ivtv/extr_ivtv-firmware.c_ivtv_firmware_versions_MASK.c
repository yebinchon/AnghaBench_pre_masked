
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv {scalar_t__ has_cx23415; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ivtv*,int*,int ,int ) ;

void FUNC_3(struct ivtv *VAR_3)
{
 u32 VAR_4[VAR_2];


 FUNC_2(VAR_3, VAR_4, VAR_1, 0);
 FUNC_0("Encoder revision: 0x%08x\n", VAR_4[0]);

 if (VAR_4[0] != 0x02060039)
  FUNC_1("Recommended firmware version is 0x02060039.\n");

 if (VAR_3->has_cx23415) {

  FUNC_2(VAR_3, VAR_4, VAR_0, 0);
  FUNC_0("Decoder revision: 0x%08x\n", VAR_4[0]);
 }
}
