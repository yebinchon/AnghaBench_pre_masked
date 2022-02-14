
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran {int i2cbr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_1,
    int VAR_2)
{
 struct zoran *VAR_3 = (struct zoran *) VAR_1;

 if (VAR_2)
  VAR_3->i2cbr |= 2;
 else
  VAR_3->i2cbr &= ~2;
 FUNC_0(VAR_3->i2cbr, VAR_0);
}
