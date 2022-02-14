
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int * i2c_adap; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*,int,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cx18 *VAR_2)
{
 int VAR_3;
 FUNC_0("i2c exit\n");
 FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_0) | 4,
       VAR_0);
 FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_1) | 4,
       VAR_1);

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_3(&VAR_2->i2c_adap[VAR_3]);
 }
}
