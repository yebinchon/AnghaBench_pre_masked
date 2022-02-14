
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
typedef unsigned int uLong ;
typedef scalar_t__ uInt ;
struct TYPE_4__ {unsigned int size_local_extrafield; unsigned int pos_local_extrafield; unsigned int offset_local_extrafield; int file; } ;
typedef TYPE_2__ file_in_zip_read_info_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int ,unsigned int,int ) ;

extern int FUNC_2 (unzFile VAR_3,void *VAR_4,unsigned VAR_5)
{
 unz_s* VAR_6;
 file_in_zip_read_info_s* VAR_7;
 uInt VAR_8;
 uLong VAR_9;

 if (VAR_3==((void*)0))
  return VAR_2;
 VAR_6=(unz_s*)VAR_3;
    VAR_7=VAR_6->pfile_in_zip_read;

 if (VAR_7==((void*)0))
  return VAR_2;

 VAR_9 = (VAR_7->size_local_extrafield -
    VAR_7->pos_local_extrafield);

 if (VAR_4==((void*)0))
  return (int)VAR_9;

 if (VAR_5>VAR_9)
  VAR_8 = (uInt)VAR_9;
 else
  VAR_8 = (uInt)VAR_5 ;

 if (VAR_8==0)
  return 0;

 if (FUNC_1(VAR_7->file,
              VAR_7->offset_local_extrafield +
     VAR_7->pos_local_extrafield,VAR_0)!=0)
  return VAR_1;

 if (FUNC_0(VAR_4,(uInt)VAR_9,1,VAR_7->file)!=1)
  return VAR_1;

 return (int)VAR_8;
}
