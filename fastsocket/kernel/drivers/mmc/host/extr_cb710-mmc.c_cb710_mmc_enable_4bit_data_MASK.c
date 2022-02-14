
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cb710_slot*,int ,int ,int ) ;
 int FUNC_1 (struct cb710_slot*) ;
 int FUNC_2 (int ,char*,int,char*) ;

__attribute__((used)) static void FUNC_3(struct cb710_slot *VAR_2, int VAR_3)
{
 FUNC_2(FUNC_1(VAR_2), "configuring %d-data-line%s mode\n",
  VAR_3 ? 4 : 1, VAR_3 ? "s" : "");
 if (VAR_3)
  FUNC_0(VAR_2, VAR_1,
   VAR_0, 0);
 else
  FUNC_0(VAR_2, VAR_1,
   0, VAR_0);
}
