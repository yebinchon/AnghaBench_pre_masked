
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cb710_slot*) ;
 int FUNC_1 (struct cb710_slot*,int ) ;
 int FUNC_2 (struct cb710_slot*,int ,size_t) ;
 int FUNC_3 (int ,char*,size_t,char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct cb710_slot *VAR_2,
 size_t VAR_3, size_t VAR_4)
{
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_1,
  ((VAR_3 - 1) << 16)|(VAR_4 - 1));

 FUNC_3(FUNC_0(VAR_2), "set up for %zu block%s of %zu bytes\n",
  VAR_3, VAR_3 == 1 ? "" : "s", VAR_4);
}
