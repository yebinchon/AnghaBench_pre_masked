
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd6729_socket {int number; unsigned long io_base; } ;


 int FUNC_0 (unsigned char,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct pd6729_socket *VAR_1, unsigned short VAR_2,
        unsigned short VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_0, VAR_6);
 VAR_2 = VAR_2 + VAR_1->number * 0x40;
 VAR_4 = VAR_1->io_base;

 FUNC_0(VAR_2, VAR_4);
 VAR_5 = VAR_3 & 255;
 FUNC_0(VAR_5, VAR_4 + 1);

 VAR_2++;

 FUNC_0(VAR_2, VAR_4);
 VAR_5 = VAR_3 >> 8;
 FUNC_0(VAR_5, VAR_4 + 1);
 FUNC_2(&VAR_0, VAR_6);
}
