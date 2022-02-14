
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ addr ;
struct TYPE_10__ {int host_no; } ;
struct TYPE_9__ {unsigned long fifo_count; int csr; } ;
struct TYPE_8__ {int addr_hi; int addr_lo; unsigned long count; int rsel; int mode_lo; int mode_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_6__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 TYPE_4__* VAR_15 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,void*,unsigned long) ;
 int FUNC_5 (char*,int ,unsigned long,unsigned int) ;
 int * VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_6 (int,int ) ;
 TYPE_1__* VAR_18 ;

__attribute__((used)) static unsigned long FUNC_7(void *VAR_19, unsigned long VAR_20, int VAR_21)
{
 void *VAR_22;

 if(VAR_16 != ((void*)0))
  FUNC_2(VAR_16);


 VAR_22 = (void *)FUNC_1((unsigned long) VAR_19, VAR_20);

 VAR_16 = VAR_22;
 VAR_17 = VAR_20;

 VAR_15->fifo_count = 0;
 FUNC_6(VAR_10, VAR_4);


 VAR_15->csr &= ~VAR_0;
 VAR_15->csr |= VAR_0;


 if(VAR_21)
  VAR_15->csr |= VAR_1;
 else
  VAR_15->csr &= ~VAR_1;


 VAR_15->fifo_count = VAR_20;

 FUNC_6(VAR_10, VAR_4);


 VAR_15->csr &= ~VAR_0;
 VAR_15->csr |= VAR_0;

 if(VAR_15->fifo_count != VAR_20) {
  FUNC_5("scsi%d: fifo_mismatch %04x not %04x\n",
         VAR_13->host_no, VAR_15->fifo_count,
         (unsigned int) VAR_20);
  FUNC_0(VAR_13);
 }






 VAR_18->addr_hi = (((unsigned long)(VAR_22) & 0xff0000) >> 8);
 VAR_18->addr_lo = ((unsigned long)(VAR_22) & 0xffff);

 VAR_18->count = VAR_20/2;
 VAR_18->mode_hi = VAR_7;
 if(VAR_21) {
  if(VAR_20 & 1)
   VAR_18->count++;
  VAR_18->mode_lo = VAR_9;
  VAR_18->rsel = VAR_12;
 } else {
  VAR_18->mode_lo = VAR_8;
  VAR_18->rsel = VAR_11;
 }


 FUNC_6(((FUNC_3(VAR_18) & 0xff0000) >> 8),
         VAR_2);

 FUNC_6((FUNC_3(VAR_18) & 0xffff), VAR_3);


 FUNC_6(0xd, VAR_6);


 FUNC_6(VAR_5, VAR_4);

        return VAR_20;

}
