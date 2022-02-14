
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_data {unsigned char diacr; } ;


 unsigned char FUNC_0 (struct kbd_data*,unsigned char) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct kbd_data *VAR_1, unsigned char VAR_2)
{
 VAR_2 = VAR_0[VAR_2];
 VAR_1->diacr = (VAR_1->diacr ? FUNC_0(VAR_1, VAR_2) : VAR_2);
}
