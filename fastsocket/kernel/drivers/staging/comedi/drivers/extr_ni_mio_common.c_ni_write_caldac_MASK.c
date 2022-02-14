
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_6__ {int* caldac; } ;
struct TYPE_5__ {int n_chans; unsigned int (* packbits ) (int,int,unsigned int*) ;} ;
struct TYPE_4__ {int* caldacs; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int,int,unsigned int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_5, int VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0, VAR_9 = 0, VAR_10, VAR_11 = 0;
 int VAR_12;
 int VAR_13;


 if (VAR_4->caldacs[VAR_6] == VAR_7)
  return;
 VAR_4->caldacs[VAR_6] = VAR_7;

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_13 = VAR_1.caldac[VAR_12];
  if (VAR_13 == VAR_2)
   break;
  if (VAR_6 < VAR_3[VAR_13].n_chans) {
   VAR_9 = VAR_3[VAR_13].packbits(VAR_6, VAR_7, &VAR_11);
   VAR_8 = FUNC_0(VAR_12);

   break;
  }
  VAR_6 -= VAR_3[VAR_13].n_chans;
 }

 for (VAR_10 = 1 << (VAR_9 - 1); VAR_10; VAR_10 >>= 1) {
  FUNC_1(((VAR_10 & VAR_11) ? 0x02 : 0), VAR_0);
  FUNC_3(1);
  FUNC_1(1 | ((VAR_10 & VAR_11) ? 0x02 : 0), VAR_0);
  FUNC_3(1);
 }
 FUNC_1(VAR_8, VAR_0);
 FUNC_3(1);
 FUNC_1(0, VAR_0);
}
