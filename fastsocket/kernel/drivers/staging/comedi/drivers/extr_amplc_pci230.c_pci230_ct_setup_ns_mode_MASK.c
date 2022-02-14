
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase1; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__,int ,unsigned int,unsigned int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;
 unsigned int FUNC_4 (int ,unsigned int*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, uint64_t VAR_6,
        unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;


 FUNC_1(VAR_2->iobase1 + VAR_0, 0, VAR_4, VAR_5);

 VAR_8 = FUNC_4(VAR_6, &VAR_9, VAR_7);

 FUNC_3(FUNC_0(VAR_4, VAR_8), VAR_2->iobase1 + VAR_1);

 if (VAR_9 >= 65536) {
  VAR_9 = 0;
 }
 FUNC_2(VAR_2->iobase1 + VAR_0, 0, VAR_4, VAR_9);
}
