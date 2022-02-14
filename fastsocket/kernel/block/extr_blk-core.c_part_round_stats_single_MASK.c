
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {unsigned long stamp; } ;


 int FUNC_0 (int,struct hd_struct*,int ,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct hd_struct*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2, struct hd_struct *VAR_3,
        unsigned long VAR_4)
{
 if (VAR_4 == VAR_3->stamp)
  return;

 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_2, VAR_3, VAR_1,
    FUNC_1(VAR_3) * (VAR_4 - VAR_3->stamp));
  FUNC_0(VAR_2, VAR_3, VAR_0, (VAR_4 - VAR_3->stamp));
 }
 VAR_3->stamp = VAR_4;
}
