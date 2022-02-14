
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {struct pi_adapter* pi; } ;
struct pi_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pi_adapter*) ;
 int FUNC_1 (struct pi_adapter*,char*,int) ;
 int FUNC_2 (struct pi_adapter*,char*,int) ;
 int FUNC_3 (struct pt_unit*,int ,int,char*,char*) ;
 int FUNC_4 (struct pi_adapter*,int) ;

__attribute__((used)) static int FUNC_5(struct pt_unit *VAR_4, char *VAR_5, char *VAR_6)
{
 struct pi_adapter *VAR_7 = VAR_4->pi;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_4, VAR_0, VAR_1 | VAR_3 | VAR_2,
      VAR_6, "completion");

 if (FUNC_4(VAR_7, 7) & VAR_1) {
  VAR_10 = (((FUNC_4(VAR_7, 4) + 256 * FUNC_4(VAR_7, 5)) +
        3) & 0xfffc);
  VAR_11 = FUNC_4(VAR_7, 2) & 3;
  if (VAR_11 == 0)
   FUNC_2(VAR_7, VAR_5, VAR_10);
  if (VAR_11 == 2)
   FUNC_1(VAR_7, VAR_5, VAR_10);
 }

 VAR_9 = FUNC_3(VAR_4, VAR_0, VAR_3 | VAR_2, VAR_6, "data done");

 FUNC_0(VAR_7);

 return (VAR_8 ? VAR_8 : VAR_9);
}
