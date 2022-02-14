
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int dummy; } ;


 unsigned int FUNC_0 (unsigned long long,unsigned int) ;
 unsigned char* VAR_0 ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned char*,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_3,
       struct sdebug_dev_info *VAR_4,
       unsigned long long VAR_5, unsigned int VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10 = 0;
 int (*VAR_11)(struct scsi_cmnd *, unsigned char *, int);

 VAR_11 = VAR_7 ? FUNC_1 : FUNC_2;

 VAR_9 = FUNC_0(VAR_5, VAR_2);
 if (VAR_9 + VAR_6 > VAR_2)
  VAR_10 = VAR_9 + VAR_6 - VAR_2;

 VAR_8 = VAR_11(VAR_3, VAR_0 + (VAR_9 * VAR_1),
     (VAR_6 - VAR_10) * VAR_1);
 if (!VAR_8 && VAR_10)
  VAR_8 = VAR_11(VAR_3, VAR_0, VAR_10 * VAR_1);

 return VAR_8;
}
