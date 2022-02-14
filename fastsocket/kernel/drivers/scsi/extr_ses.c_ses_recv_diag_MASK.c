
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,void*,int,int *,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_4, int VAR_5,
    void *VAR_6, int VAR_7)
{
 unsigned char VAR_8[] = {
  VAR_1,
  1,
  VAR_5,
  VAR_7 >> 8,
  VAR_7 & 0xff,
  0
 };

 return FUNC_0(VAR_4, VAR_8, VAR_0, VAR_6, VAR_7,
    ((void*)0), VAR_3, VAR_2, ((void*)0));
}
