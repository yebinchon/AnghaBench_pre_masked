
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2, int VAR_3, unsigned long VAR_4)
{
 struct comedi_device *VAR_5 = (struct comedi_device *)VAR_4;

 if (VAR_1) {
  FUNC_1(VAR_3, VAR_0 + 2 * VAR_2);
  return 0;
 } else {
  return FUNC_0(VAR_0 + 2 * VAR_2);
 }
}
