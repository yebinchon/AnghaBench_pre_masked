
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_reg {unsigned char index; unsigned char mask; unsigned char value; scalar_t__ port; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

void FUNC_2(struct io_reg VAR_0[], int VAR_1)
{
 int VAR_2;
 unsigned char VAR_3;



 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_1(VAR_0[VAR_2].index, VAR_0[VAR_2].port);
  VAR_3 = FUNC_0(VAR_0[VAR_2].port + 1);
  VAR_3 = (VAR_3 & (~VAR_0[VAR_2].mask)) | VAR_0[VAR_2].value;
  FUNC_1(VAR_3, VAR_0[VAR_2].port + 1);
 }
}
