
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; TYPE_3__* param; int file; } ;
typedef TYPE_2__ pm_file ;
typedef int gzFile ;
struct TYPE_5__ {int total_bytes; } ;
struct TYPE_7__ {long fpos_out; TYPE_1__ header; } ;
typedef TYPE_3__ cso_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;



 int FUNC_1 (int ,long,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,long,int) ;
 long FUNC_4 (int ) ;

int FUNC_5(pm_file *VAR_3, long VAR_4, int VAR_5)
{
  if (VAR_3->type == VAR_1)
  {
    FUNC_1(VAR_3->file, VAR_4, VAR_5);
    return FUNC_2(VAR_3->file);
  }
  else if (VAR_3->type == VAR_2)
  {
    if (&FUNC_0 != ((void*)0) && VAR_4 > 6*1024*1024) {
      long VAR_6 = FUNC_4((gzFile) VAR_3->param);
      if (VAR_4 < VAR_6 || VAR_4 - VAR_6 > 6*1024*1024)
        FUNC_0("Decompressing data...");
    }
    return FUNC_3((gzFile) VAR_3->param, VAR_4, VAR_5);
  }
  else if (VAR_3->type == VAR_0)
  {
    cso_struct *VAR_7 = VAR_3->param;
    switch (VAR_5)
    {
      case 130: VAR_7->fpos_out += VAR_4; break;
      case 128: VAR_7->fpos_out = VAR_4; break;
      case 129: VAR_7->fpos_out = VAR_7->header.total_bytes - VAR_4; break;
    }
    return VAR_7->fpos_out;
  }
  else
    return -1;
}
