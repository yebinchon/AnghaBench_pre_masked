
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct e752x_error_info {int buf_ferr; int buf_nerr; } ;


 int FUNC_0 (int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct e752x_error_info *VAR_0,
   int *VAR_1, int VAR_2)
{
 u8 VAR_3;

 VAR_3 = VAR_0->buf_ferr;

 if (VAR_3 & 0x0f) {
  VAR_3 &= 0x0f;
  FUNC_0(VAR_3, VAR_1, VAR_2);
 }

 VAR_3 = VAR_0->buf_nerr;

 if (VAR_3 & 0x0f) {
  VAR_3 &= 0x0f;
  FUNC_0(VAR_3, VAR_1, VAR_2);
 }
}
