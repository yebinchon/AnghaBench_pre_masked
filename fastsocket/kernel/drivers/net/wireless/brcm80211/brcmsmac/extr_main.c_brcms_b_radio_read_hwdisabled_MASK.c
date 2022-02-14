
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int sbclk; int clk; int d11core; int corerev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct brcms_hardware*,int ) ;
 int FUNC_6 (struct brcms_hardware*) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_7(struct brcms_hardware *VAR_5)
{
 bool VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0;

 VAR_8 = VAR_5->sbclk;
 if (!VAR_8)
  FUNC_5(VAR_5, VAR_1);


 VAR_7 = VAR_5->clk;
 if (!VAR_7) {





  if (FUNC_1(VAR_5->corerev, 18))
   VAR_9 |= VAR_3;
  FUNC_3(VAR_5->d11core, VAR_9);
  FUNC_6(VAR_5);
 }

 VAR_6 = ((FUNC_4(VAR_5->d11core,
     FUNC_0(VAR_4)) & VAR_2) != 0);


 if (!VAR_7)
  FUNC_2(VAR_5->d11core, 0);

 if (!VAR_8)
  FUNC_5(VAR_5, VAR_0);

 return VAR_6;
}
