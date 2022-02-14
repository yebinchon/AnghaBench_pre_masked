
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int whitebal; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qcam_device*,int) ;
 int FUNC_2 (struct qcam_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct qcam_device *VAR_0)
{






 int VAR_1;
 int VAR_2 = 0;

 FUNC_1(VAR_0, 27);
 FUNC_1(VAR_0, 0);





 do {
  FUNC_1(VAR_0, 33);
  VAR_1 = FUNC_2(VAR_0);
  FUNC_0(1);
  FUNC_3();
  VAR_2++;
 } while (VAR_1 == 0xff && VAR_2<2048);

 VAR_0->whitebal = VAR_1;
 return VAR_1;
}
