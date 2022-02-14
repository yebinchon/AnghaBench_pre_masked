
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 static u8 VAR_1[] = { 0x89, 0x38, 0x8a, 0x2d, 0x50, 0x80 };
 static u8 VAR_2[] = { 0x68, 0xa0, 0x8e, 0x40, 0x53, 0x50,
   0x67, 0x20, 0x7d, 0x01, 0x7c, 0x00, 0x7a, 0x00,
   0x79, 0x20, 0x57, 0x05, 0x56, 0x31, 0x88, 0x0f,
   0x75, 0x32 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3 += 2)
  FUNC_2(VAR_0, &VAR_1[VAR_3], 2);

 FUNC_1(1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3 += 2)
  FUNC_2(VAR_0, &VAR_2[VAR_3], 2);

 return 0;
}
