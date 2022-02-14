
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int csr; unsigned short fifo_count; unsigned short fifo_data; } ;
struct TYPE_4__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned short VAR_11 ;
 int FUNC_3 (int *,int ,unsigned short) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 unsigned short VAR_14 ;
 int * VAR_15 ;
 int FUNC_5 (int ,int ) ;
 unsigned short FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(int VAR_16)
{
 unsigned short VAR_17;
 unsigned short VAR_18;
 int VAR_19 = 0;

 VAR_12 = 0;


 if(!VAR_16) {
  int VAR_20 = 20000;

  while(1) {
   if(VAR_10->csr & VAR_4)
    break;

   if(--VAR_20 <= 0) {
    FUNC_4("sun3scsi: fifo failed to empty!\n");
    return 1;
   }
   FUNC_7(10);
  }
 }



 VAR_17 = FUNC_6(VAR_8);
 VAR_18 = VAR_10->fifo_count;
 VAR_11 = VAR_18;


 if((!VAR_16) && (VAR_17 - VAR_18) == 2) {
  unsigned short VAR_21;
  unsigned char *VAR_22;

  VAR_21 = VAR_10->fifo_data;
  VAR_22 = (unsigned char *)FUNC_1(VAR_13);

  VAR_22 += (VAR_14 - VAR_18);

  VAR_22[-2] = (VAR_21 & 0xff00) >> 8;
  VAR_22[-1] = (VAR_21 & 0xff);
 }

 FUNC_2(VAR_13);
 VAR_13 = ((void*)0);

 FUNC_5(VAR_7, VAR_6);
 VAR_10->fifo_count = 0;
 VAR_10->csr &= ~VAR_5;


 VAR_10->csr &= ~VAR_3;
 VAR_10->csr |= VAR_3;

 VAR_15 = ((void*)0);

 return VAR_19;

}
