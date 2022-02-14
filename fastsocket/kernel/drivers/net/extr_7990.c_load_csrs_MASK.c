
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_private {int busmaster_regval; struct lance_init_block* lance_init_block; } ;
struct lance_init_block {int dummy; } ;


 int FUNC_0 (struct lance_init_block volatile*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct lance_private*,int ) ;
 int FUNC_2 (struct lance_private*,int) ;

__attribute__((used)) static void FUNC_3 (struct lance_private *VAR_4)
{
        volatile struct lance_init_block *VAR_5 = VAR_4->lance_init_block;
        int VAR_6;

        VAR_6 = FUNC_0 (VAR_5);

        FUNC_1(VAR_4, VAR_1);
        FUNC_2(VAR_4, VAR_6 & 0xFFFF);
        FUNC_1(VAR_4, VAR_2);
        FUNC_2(VAR_4, VAR_6 >> 16);
        FUNC_1(VAR_4, VAR_3);
        FUNC_2(VAR_4, VAR_4->busmaster_regval);


        FUNC_1(VAR_4, VAR_0);
}
