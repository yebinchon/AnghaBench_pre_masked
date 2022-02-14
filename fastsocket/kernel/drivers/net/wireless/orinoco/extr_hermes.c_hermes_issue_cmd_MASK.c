
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hermes*,int ) ;
 int FUNC_1 (struct hermes*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hermes *VAR_7, u16 VAR_8, u16 VAR_9,
       u16 VAR_10, u16 VAR_11)
{
 int VAR_12 = VAR_1;
 u16 VAR_13;


 VAR_13 = FUNC_0(VAR_7, VAR_0);
 while ((VAR_13 & VAR_3) && VAR_12) {
  VAR_12--;
  FUNC_2(1);
  VAR_13 = FUNC_0(VAR_7, VAR_0);
 }
 if (VAR_13 & VAR_3)
  return -VAR_2;

 FUNC_1(VAR_7, VAR_6, VAR_11);
 FUNC_1(VAR_7, VAR_5, VAR_10);
 FUNC_1(VAR_7, VAR_4, VAR_9);
 FUNC_1(VAR_7, VAR_0, VAR_8);

 return 0;
}
