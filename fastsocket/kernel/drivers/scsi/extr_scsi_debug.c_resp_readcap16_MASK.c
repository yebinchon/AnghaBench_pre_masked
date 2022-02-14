
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd * VAR_6,
     struct sdebug_dev_info * VAR_7)
{
 unsigned char *VAR_8 = (unsigned char *)VAR_6->cmnd;
 unsigned char VAR_9[VAR_0];
 unsigned long long VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if ((VAR_11 = FUNC_0(VAR_6, 1, VAR_7)))
  return VAR_11;
 VAR_13 = ((VAR_8[10] << 24) + (VAR_8[11] << 16) + (VAR_8[12] << 8)
       + VAR_8[13]);

 VAR_5 = FUNC_2();
 FUNC_3(VAR_9, 0, VAR_0);
 VAR_10 = VAR_5 - 1;
 for (VAR_12 = 0; VAR_12 < 8; ++VAR_12, VAR_10 >>= 8)
  VAR_9[7 - VAR_12] = VAR_10 & 0xff;
 VAR_9[8] = (VAR_4 >> 24) & 0xff;
 VAR_9[9] = (VAR_4 >> 16) & 0xff;
 VAR_9[10] = (VAR_4 >> 8) & 0xff;
 VAR_9[11] = VAR_4 & 0xff;
 VAR_9[13] = VAR_3 & 0xf;
 VAR_9[14] = (VAR_2 >> 8) & 0x3f;

 if (FUNC_5())
  VAR_9[14] |= 0x80;

 VAR_9[15] = VAR_2 & 0xff;

 if (VAR_1) {
  VAR_9[12] = (VAR_1 - 1) << 1;
  VAR_9[12] |= 1;
 }

 return FUNC_1(VAR_6, VAR_9,
        FUNC_4(VAR_13, VAR_0));
}
