
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = (VAR_7[0] & 1) | ((VAR_7[0] & 2) << 1);






 VAR_9 = VAR_7[1];
 VAR_10 = -VAR_7[2];

 FUNC_1(VAR_5, VAR_3, VAR_9);
 FUNC_1(VAR_5, VAR_4, VAR_10);

 FUNC_0(VAR_5, VAR_0, VAR_8 & 0x1);
 FUNC_0(VAR_5, VAR_1, VAR_8 & 0x2);
 FUNC_0(VAR_5, VAR_2, VAR_8 & 0x4);

 FUNC_2(VAR_5);

 return;
}
