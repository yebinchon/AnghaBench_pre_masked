
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct brcms_hardware {int suspended_fifos; int wlc; int band; scalar_t__* di; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct brcms_hardware*,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct brcms_hardware *VAR_1,
        uint VAR_2)
{
 u8 VAR_3 = 1 << VAR_2;




 if ((VAR_1->suspended_fifos & VAR_3) == VAR_3)
  return;


 if (VAR_1->suspended_fifos == 0)
  FUNC_3(VAR_1,
      VAR_0);

 VAR_1->suspended_fifos |= VAR_3;

 if (VAR_1->di[VAR_2]) {





  if (FUNC_0(VAR_1->band))
   FUNC_2(VAR_1->wlc);

  FUNC_4(VAR_1->di[VAR_2]);

  if (FUNC_0(VAR_1->band))
   FUNC_1(VAR_1->wlc);
 }
}
