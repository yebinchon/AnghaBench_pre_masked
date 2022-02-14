
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tiger_hw {int base; int base_s; int isac; int name; int pdev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (int,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct tiger_hw *VAR_3)
{
 VAR_3->base = FUNC_2(VAR_3->pdev, 0);
 VAR_3->base_s = FUNC_1(VAR_3->pdev, 0);
 if (!FUNC_4(VAR_3->base, VAR_3->base_s, VAR_3->name)) {
  FUNC_3("%s: NETjet config port %#x-%#x already in use\n",
   VAR_3->name, VAR_3->base,
   (u32)(VAR_3->base + VAR_3->base_s - 1));
  VAR_3->base_s = 0;
  return -VAR_0;
 }
 FUNC_0(VAR_2, VAR_1, VAR_3->isac);
 return 0;
}
