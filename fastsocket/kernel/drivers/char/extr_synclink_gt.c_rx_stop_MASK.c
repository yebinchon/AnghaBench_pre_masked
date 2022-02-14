
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int rx_enabled; int rx_restart; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*,scalar_t__) ;
 int FUNC_3 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct slgt_info *VAR_7)
{
 unsigned short VAR_8;


 VAR_8 = FUNC_0(VAR_7, VAR_5) & ~VAR_0;
 FUNC_3(VAR_7, VAR_5, (unsigned short)(VAR_8 | VAR_1));
 FUNC_3(VAR_7, VAR_5, VAR_8);

 FUNC_2(VAR_7, VAR_4 + VAR_2 + VAR_3);


 FUNC_3(VAR_7, VAR_6, VAR_3 + VAR_4);

 FUNC_1(VAR_7);

 VAR_7->rx_enabled = 0;
 VAR_7->rx_restart = 0;
}
