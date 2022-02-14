
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct comedi_device *VAR_3, int VAR_4)
{
 unsigned VAR_5;

 if (VAR_4 >= 0) {
  VAR_5 =
      (FUNC_1(VAR_4) <<
       VAR_2) & VAR_1;
 } else {
  VAR_5 = 0;
 }
 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_5);
}
