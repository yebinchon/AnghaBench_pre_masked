
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {long len; scalar_t__ data; } ;
union outputArgs {TYPE_3__ coda_ioctl; } ;
struct CodaFid {int dummy; } ;
struct TYPE_4__ {unsigned int cmd; long len; char* data; struct CodaFid VFid; } ;
union inputArgs {TYPE_1__ coda_ioctl; } ;
struct super_block {int dummy; } ;
struct TYPE_5__ {long in_size; long out_size; int out; int in; } ;
struct PioctlData {TYPE_2__ vi; } ;


 int FUNC_0 (union inputArgs*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct CodaFid*) ;
 int FUNC_5 (int ,long,int*,union inputArgs*) ;
 int FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (char*,int ,long) ;
 scalar_t__ FUNC_8 (int ,char*,long) ;
 int VAR_6 ;
 int FUNC_9 (char*,int,int ) ;

int FUNC_10(struct super_block *VAR_7, struct CodaFid *VAR_8,
   unsigned int VAR_9, struct PioctlData *VAR_10)
{
        union inputArgs *VAR_11;
        union outputArgs *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_13 = VAR_5;
 FUNC_3(VAR_0);


        if (VAR_10->vi.in_size > VAR_4) {
  VAR_15 = -VAR_2;
  goto exit;
        }

        if (VAR_10->vi.out_size > VAR_4) {
  VAR_15 = -VAR_2;
  goto exit;
 }

        VAR_11->coda_ioctl.VFid = *VAR_8;




        VAR_11->coda_ioctl.cmd = (VAR_9 & ~(VAR_3 << 16));
        VAR_16 = ((VAR_9 >> 16) & VAR_3) - sizeof(char *) - sizeof(int);
        VAR_11->coda_ioctl.cmd |= (VAR_16 & VAR_3) << 16;


        VAR_11->coda_ioctl.len = VAR_10->vi.in_size;
        VAR_11->coda_ioctl.data = (char *)(FUNC_1(VAR_6));


        if ( FUNC_7((char*)VAR_11 + (long)VAR_11->coda_ioctl.data,
       VAR_10->vi.in, VAR_10->vi.in_size) ) {
  VAR_15 = -VAR_2;
         goto exit;
 }

 VAR_15 = FUNC_5(FUNC_6(VAR_7), FUNC_2(VAR_6) + VAR_10->vi.in_size,
       &VAR_14, VAR_11);

        if (VAR_15) {
         FUNC_9("coda_pioctl: Venus returns: %d for %s\n",
         VAR_15, FUNC_4(VAR_8));
  goto exit;
 }

 if (VAR_14 < (long)VAR_12->coda_ioctl.data + VAR_12->coda_ioctl.len) {
  VAR_15 = -VAR_2;
  goto exit;
 }


        if (VAR_12->coda_ioctl.len > VAR_10->vi.out_size) {
  VAR_15 = -VAR_2;
  goto exit;
        }


 if (FUNC_8(VAR_10->vi.out,
    (char *)VAR_12 + (long)VAR_12->coda_ioctl.data,
    VAR_12->coda_ioctl.len)) {
  VAR_15 = -VAR_1;
  goto exit;
 }

 exit:
 FUNC_0(VAR_11, VAR_13);
 return VAR_15;
}
