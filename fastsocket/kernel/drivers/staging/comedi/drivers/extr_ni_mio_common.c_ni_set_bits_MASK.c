
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct comedi_device *VAR_0, int VAR_1,
          unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 if (VAR_3)
  VAR_4 = VAR_2;
 else
  VAR_4 = 0;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
}
