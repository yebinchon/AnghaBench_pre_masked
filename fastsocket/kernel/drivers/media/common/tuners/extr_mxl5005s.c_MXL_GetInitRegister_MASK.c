
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*) ;
 scalar_t__ FUNC_2 (struct dvb_frontend*,int,int*) ;

__attribute__((used)) static u16 FUNC_3(struct dvb_frontend *VAR_0, u8 *VAR_1,
 u8 *VAR_2, int *VAR_3)
{
 u16 VAR_4 = 0;
 int VAR_5 ;

 u8 VAR_6[] = {
  11, 12, 13, 22, 32, 43, 44, 53, 56, 59, 73,
  76, 77, 91, 134, 135, 137, 147,
  156, 166, 167, 168, 25 };

 *VAR_3 = FUNC_0(VAR_6);

 VAR_4 += FUNC_1(VAR_0);

 for (VAR_5 = 0 ; VAR_5 < *VAR_3; VAR_5++) {
  VAR_1[VAR_5] = VAR_6[VAR_5];
  VAR_4 += FUNC_2(VAR_0, VAR_1[VAR_5], &VAR_2[VAR_5]);
 }

 return VAR_4;
}
