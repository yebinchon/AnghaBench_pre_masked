
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_3__ {int archive_size; int directory; int data; int start_delta; } ;
typedef TYPE_1__ file_archive_transfer_t ;



int FUNC_0(file_archive_transfer_t *VAR_0)
{
   ptrdiff_t VAR_1 = 0;

   if (!VAR_0 || VAR_0->archive_size == 0)
      return 0;

   VAR_1 = VAR_0->directory - VAR_0->data;

   if (!VAR_0->start_delta)
      VAR_0->start_delta = VAR_1;

   return (int)(((VAR_1 - VAR_0->start_delta) * 100) / (VAR_0->archive_size - VAR_0->start_delta));
}
