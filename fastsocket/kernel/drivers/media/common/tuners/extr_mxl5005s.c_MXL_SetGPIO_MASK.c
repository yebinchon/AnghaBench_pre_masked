
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static u16 FUNC_1(struct dvb_frontend *VAR_5, u8 VAR_6, u8 VAR_7)
{
 u16 VAR_8 = 0;

 if (VAR_6 == 1)
  VAR_8 += FUNC_0(VAR_5, VAR_0, VAR_7 ? 0 : 1);



 if (VAR_6 == 3) {
  if (VAR_7 == 1) {
   VAR_8 += FUNC_0(VAR_5, VAR_1, 0);
   VAR_8 += FUNC_0(VAR_5, VAR_2, 0);
  }
  if (VAR_7 == 0) {
   VAR_8 += FUNC_0(VAR_5, VAR_1, 1);
   VAR_8 += FUNC_0(VAR_5, VAR_2, 1);
  }
  if (VAR_7 == 3) {
   VAR_8 += FUNC_0(VAR_5, VAR_1, 0);
   VAR_8 += FUNC_0(VAR_5, VAR_2, 1);
  }
 }
 if (VAR_6 == 4) {
  if (VAR_7 == 1) {
   VAR_8 += FUNC_0(VAR_5, VAR_3, 0);
   VAR_8 += FUNC_0(VAR_5, VAR_4, 0);
  }
  if (VAR_7 == 0) {
   VAR_8 += FUNC_0(VAR_5, VAR_3, 1);
   VAR_8 += FUNC_0(VAR_5, VAR_4, 1);
  }
  if (VAR_7 == 3) {
   VAR_8 += FUNC_0(VAR_5, VAR_3, 0);
   VAR_8 += FUNC_0(VAR_5, VAR_4, 1);
  }
 }

 return VAR_8;
}
