
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int tx_enabled; int tx_active; int tx_timer; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 unsigned short FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*,scalar_t__) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_6(struct slgt_info *VAR_7)
{
 unsigned short VAR_8;

 FUNC_0(&VAR_7->tx_timer);

 FUNC_4(VAR_7);


 VAR_8 = FUNC_1(VAR_7, VAR_6) & ~VAR_0;
 FUNC_5(VAR_7, VAR_6, (unsigned short)(VAR_8 | VAR_1));

 FUNC_3(VAR_7, VAR_2 + VAR_3 + VAR_4);


 FUNC_5(VAR_7, VAR_5, (unsigned short)(VAR_3 + VAR_4));

 FUNC_2(VAR_7);

 VAR_7->tx_enabled = 0;
 VAR_7->tx_active = 0;
}
