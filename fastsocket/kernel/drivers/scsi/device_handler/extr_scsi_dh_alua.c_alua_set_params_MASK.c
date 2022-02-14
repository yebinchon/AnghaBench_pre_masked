
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_dh_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alua_dh_data* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_3, const char *VAR_4)
{
 struct alua_dh_data *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6 = 0, VAR_7;
 const char *VAR_8 = VAR_4;
 int VAR_9 = VAR_2;

 if ((FUNC_1(VAR_4, "%u", &VAR_7) != 1) || (VAR_7 != 1))
  return -VAR_1;

 while (*VAR_8++)
  ;
 if ((FUNC_1(VAR_8, "%u", &VAR_6) != 1) || (VAR_6 > 1))
  return -VAR_1;

 if (VAR_6)
  VAR_5->flags |= VAR_0;
 else
  VAR_5->flags &= ~VAR_0;

 return VAR_9;
}
