
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,int ,int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct comedi_device *VAR_1,
        unsigned VAR_2,
        int VAR_3)
{
 unsigned VAR_4;

 if (VAR_3 >= 0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 } else {
  VAR_4 = 0;
 }
 FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_2),
   VAR_4);
}
