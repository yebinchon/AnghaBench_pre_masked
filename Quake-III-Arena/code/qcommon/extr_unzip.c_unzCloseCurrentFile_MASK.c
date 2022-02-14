
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pfile_in_zip_read; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
struct TYPE_5__ {scalar_t__ stream_initialised; int stream; struct TYPE_5__* read_buffer; } ;
typedef TYPE_2__ file_in_zip_read_info_s ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

extern int FUNC_2 (unzFile VAR_2)
{
 int VAR_3=VAR_0;

 unz_s* VAR_4;
 file_in_zip_read_info_s* VAR_5;
 if (VAR_2==((void*)0))
  return VAR_1;
 VAR_4=(unz_s*)VAR_2;
    VAR_5=VAR_4->pfile_in_zip_read;

 if (VAR_5==((void*)0))
  return VAR_1;
 FUNC_0(VAR_5->read_buffer);
 VAR_5->read_buffer = ((void*)0);
 if (VAR_5->stream_initialised)
  FUNC_1(&VAR_5->stream);

 VAR_5->stream_initialised = 0;
 FUNC_0(VAR_5);

    VAR_4->pfile_in_zip_read=((void*)0);

 return VAR_3;
}
