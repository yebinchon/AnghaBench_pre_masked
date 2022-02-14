
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qib_devdata*,int,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct qib_devdata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1, FUNC_4(0) | VAR_0, 0x2D, 0xFF);
 if (VAR_2 < 0)
  goto bail;


 VAR_2 = FUNC_5(VAR_1, FUNC_3(0), 3, 0xF);
 if (VAR_2 < 0)
  goto bail;

 VAR_2 = FUNC_5(VAR_1, FUNC_0(0) | VAR_0, 0x40, 0xFF);
 if (VAR_2 < 0)
  goto bail;

 VAR_2 = FUNC_5(VAR_1, FUNC_1(0) | VAR_0, 0x04, 0xFF);
 if (VAR_2 < 0)
  goto bail;

 VAR_2 = FUNC_5(VAR_1, FUNC_2(0) | VAR_0, 0x04, 0xFF);
 if (VAR_2 < 0)
  goto bail;





 FUNC_6(415);

 VAR_2 = FUNC_5(VAR_1, FUNC_1(0) | VAR_0, 0x00, 0xFF);

bail:
 return VAR_2;
}
