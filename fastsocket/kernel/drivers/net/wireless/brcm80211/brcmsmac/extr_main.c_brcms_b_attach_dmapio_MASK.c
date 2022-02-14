
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u16 ;
struct brcms_hardware {int unit; int** txavail; TYPE_1__* band; int ** di; int d11core; } ;
struct brcms_c_info {struct brcms_hardware* hw; } ;
typedef int name ;
struct TYPE_2__ {int mhfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcms_c_info*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 void* FUNC_2 (char*,struct brcms_c_info*,int ,int ,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static bool FUNC_6(struct brcms_c_info *VAR_8, uint VAR_9, bool VAR_10)
{
 uint VAR_11;
 char VAR_12[8];



 u16 VAR_13 = 0;
 struct brcms_hardware *VAR_14 = VAR_8->hw;
 uint VAR_15 = VAR_14->unit;


 FUNC_5(VAR_12, sizeof(VAR_12), "wl%d", VAR_15);

 if (VAR_14->di[0] == ((void*)0)) {
  int VAR_16 = 0;






  VAR_14->di[0] = FUNC_2(VAR_12, VAR_8,
        (VAR_10 ? FUNC_4(VAR_2, 0) : 0),
        FUNC_4(VAR_1, 0),
        (VAR_10 ? VAR_6 : 0), VAR_5,
        VAR_7, -1, VAR_4,
        VAR_0);
  VAR_16 |= (((void*)0) == VAR_14->di[0]);







  VAR_14->di[1] = FUNC_2(VAR_12, VAR_8,
        FUNC_4(VAR_2, 1), 0,
        VAR_6, 0, 0, -1, 0, 0);
  VAR_16 |= (((void*)0) == VAR_14->di[1]);






  VAR_14->di[2] = FUNC_2(VAR_12, VAR_8,
        FUNC_4(VAR_2, 2), 0,
        VAR_6, 0, 0, -1, 0, 0);
  VAR_16 |= (((void*)0) == VAR_14->di[2]);





  VAR_14->di[3] = FUNC_2(VAR_12, VAR_8,
        FUNC_4(VAR_2, 3),
        0, VAR_6, 0, 0, -1,
        0, 0);
  VAR_16 |= (((void*)0) == VAR_14->di[3]);


  if (VAR_16) {
   FUNC_1(VAR_14->d11core,
      "wl%d: wlc_attach: dma_attach failed\n",
      VAR_15);
   return 0;
  }


  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   if (VAR_14->di[VAR_11])
    VAR_14->txavail[VAR_11] =
        (uint *) FUNC_3(VAR_14->di[VAR_11],
       "&txavail");
 }


 FUNC_0(VAR_8, VAR_14->band->mhfs, VAR_13);

 return 1;
}
